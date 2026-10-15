#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKAJMEMCBLC;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IFMNCLKDLDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15F1A290)
#define IFMNCLKDLDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15F1A2D0)
#define IFMNCLKDLDC___C__GETRECOMMENDDECK_B__1_0_OFFSET UNITYSDK_OFFSET(0x15F1A2E0)
#define IFMNCLKDLDC___C___GETMASTERCARDPRESET_B__2_0_OFFSET UNITYSDK_OFFSET(0x15F1A300)

inline static constexpr unsigned int IFMNCLKDLDC___c_TypeDefinitionIndex = 81112;

	class IFMNCLKDLDC___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E410);
		}

		static ::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::HKAJMEMCBLC*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E418);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFMNCLKDLDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFMNCLKDLDC___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 _GetRecommendDeck_b__1_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + IFMNCLKDLDC___C__GETRECOMMENDDECK_B__1_0_OFFSET))(this, a1);
		}

		::System::UInt32 __GetMasterCardPreset_b__2_0(::HKAJMEMCBLC* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + IFMNCLKDLDC___C___GETMASTERCARDPRESET_B__2_0_OFFSET))(this, a1);
		}

	};
