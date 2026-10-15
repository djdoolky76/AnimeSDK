#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GFFNGOOMMKL_EKEDOPAHIOE.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define GFFNGOOMMKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x159EB6A0)
#define GFFNGOOMMKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x159EB6E0)
#define GFFNGOOMMKL___C___GATHERBATTLEITEMDATA_B__11_0_OFFSET UNITYSDK_OFFSET(0x159EB6F0)

inline static constexpr unsigned int GFFNGOOMMKL___c_TypeDefinitionIndex = 76596;

	class GFFNGOOMMKL___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::UInt32>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Object*, ::System::UInt32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62F20);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62F28);
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
