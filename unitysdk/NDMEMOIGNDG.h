#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBOICBCAHBE;
class NDMEMOIGNDG_MAOEAMNMIBM;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDMEMOIGNDG_BBEGCJHDGHL_OFFSET UNITYSDK_OFFSET(0xBB50DE0)
#define NDMEMOIGNDG_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xBB50530)
#define NDMEMOIGNDG_CCTOR_OFFSET UNITYSDK_OFFSET(0xBB50F20)
#define NDMEMOIGNDG_OMNGJIFEIFH_OFFSET UNITYSDK_OFFSET(0xBB50910)

inline static constexpr unsigned int NDMEMOIGNDG_TypeDefinitionIndex = 69266;

	class NDMEMOIGNDG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::CBOICBCAHBE*>** StaticGet_JIGBCKKNLOA()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::CBOICBCAHBE*>**)UnitySDK::FromName("", "NDMEMOIGNDG")->GetStaticField(0x2DD00);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_JCMHNBPCBBO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)UnitySDK::FromName("", "NDMEMOIGNDG")->GetStaticField(0x2DD08);
		}

		static ::System::Collections::Generic::List_1<::CBOICBCAHBE*>** StaticGet_EAMPGPHCHHL()
		{
			return (::System::Collections::Generic::List_1<::CBOICBCAHBE*>**)UnitySDK::FromName("", "NDMEMOIGNDG")->GetStaticField(0x2DD10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDMEMOIGNDG_CCTOR_OFFSET))();
		}

		static ::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDMEMOIGNDG_BJMNKLGEMPM_OFFSET))();
		}

		static ::System::Void OMNGJIFEIFH(::System::String* a1, ::NDMEMOIGNDG_MAOEAMNMIBM* a2)
		{
			return ((::System::Void(*)(::System::String*, ::NDMEMOIGNDG_MAOEAMNMIBM*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_OMNGJIFEIFH_OFFSET))(a1, a2);
		}

		static ::System::Void BBEGCJHDGHL(::System::String* a1, ::NDMEMOIGNDG_MAOEAMNMIBM* a2)
		{
			return ((::System::Void(*)(::System::String*, ::NDMEMOIGNDG_MAOEAMNMIBM*))((::PBYTE)hIl2Cpp + NDMEMOIGNDG_BBEGCJHDGHL_OFFSET))(a1, a2);
		}

	};
