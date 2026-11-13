#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GFFNGOOMMKL_EKEDOPAHIOE.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GFFNGOOMMKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B493FD0)
#define GFFNGOOMMKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B494010)
#define GFFNGOOMMKL___C___GATHERBATTLEITEMDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x1B494020)

inline static constexpr unsigned int GFFNGOOMMKL___c_TypeDefinitionIndex = 78927;

	class GFFNGOOMMKL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68740);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68748);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFNGOOMMKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFNGOOMMKL___C_CTOR_OFFSET))(this);
		}

		::System::UInt32 __GatherBattleItemData_b__11_0(::GFFNGOOMMKL_EKEDOPAHIOE a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::GFFNGOOMMKL_EKEDOPAHIOE))((::PBYTE)hIl2Cpp + GFFNGOOMMKL___C___GATHERBATTLEITEMDATA_B__11_0_OFFSET))(this, a1);
		}

	};
