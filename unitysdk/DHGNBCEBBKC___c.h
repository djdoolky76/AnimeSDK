#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOLAHHGIFHA;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define DHGNBCEBBKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xEBD40D0)
#define DHGNBCEBBKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xEBD4110)
#define DHGNBCEBBKC___C__SYNCMOTIONINFO_B__3_1_OFFSET UNITYSDK_OFFSET(0xEBD4120)

inline static constexpr unsigned int DHGNBCEBBKC___c_TypeDefinitionIndex = 66388;

	class DHGNBCEBBKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528E0);
		}

		static ::System::Comparison_1<::JOLAHHGIFHA*>** StaticGet___9__3_1()
		{
			return (::System::Comparison_1<::JOLAHHGIFHA*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x528E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SyncMotionInfo_b__3_1(::JOLAHHGIFHA* a1, ::JOLAHHGIFHA* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JOLAHHGIFHA*, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + DHGNBCEBBKC___C__SYNCMOTIONINFO_B__3_1_OFFSET))(this, a1, a2);
		}

	};
