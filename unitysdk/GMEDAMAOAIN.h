#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FMKEJLGKEMH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GMEDAMAOAIN_CCTOR_OFFSET UNITYSDK_OFFSET(0x15ABFA00)
#define GMEDAMAOAIN_CTOR_OFFSET UNITYSDK_OFFSET(0x15ABF9F0)
#define GMEDAMAOAIN_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x15ABEA80)
#define GMEDAMAOAIN_JFOCGBEJGAC_OFFSET UNITYSDK_OFFSET(0x15ABF1C0)
#define GMEDAMAOAIN_KGDGIGNOFNA_OFFSET UNITYSDK_OFFSET(0x15ABF070)
#define GMEDAMAOAIN_MMGEGIJLJAB_OFFSET UNITYSDK_OFFSET(0x15ABEF10)

inline static constexpr unsigned int GMEDAMAOAIN_TypeDefinitionIndex = 65316;

	class GMEDAMAOAIN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>** StaticGet_LLFBFMNLPKO()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "GMEDAMAOAIN")->GetStaticField(0x6AB60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMEDAMAOAIN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMEDAMAOAIN_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::FMKEJLGKEMH*>* FPKLDCGAJGP(::System::String* a1)
		{
			return ((::System::Collections::Generic::List_1<::FMKEJLGKEMH*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GMEDAMAOAIN_FPKLDCGAJGP_OFFSET))(this, a1);
		}

		static ::System::String* MMGEGIJLJAB(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GMEDAMAOAIN_MMGEGIJLJAB_OFFSET))(a1, a2);
		}

		static ::System::String* KGDGIGNOFNA(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + GMEDAMAOAIN_KGDGIGNOFNA_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* JFOCGBEJGAC(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + GMEDAMAOAIN_JFOCGBEJGAC_OFFSET))(a1);
		}

	};
