#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNOHHOEPFHC.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NNBKBGKBBEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x179D8780)
#define NNBKBGKBBEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x179D87B0)
#define NNBKBGKBBEM___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET UNITYSDK_OFFSET(0x179D87C0)

inline static constexpr unsigned int NNBKBGKBBEM___c_TypeDefinitionIndex = 64100;

	class NNBKBGKBBEM___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::HNOHHOEPFHC>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::UInt32, ::HNOHHOEPFHC>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57410);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x57418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNBKBGKBBEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNBKBGKBBEM___C_CTOR_OFFSET))(this);
		}

		::HNOHHOEPFHC _SetRequestUnlockedMultiPathAvatarTypes_b__5_0(::System::UInt32 a1)
		{
			return ((::HNOHHOEPFHC(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNBKBGKBBEM___C__SETREQUESTUNLOCKEDMULTIPATHAVATARTYPES_B__5_0_OFFSET))(this, a1);
		}

	};
