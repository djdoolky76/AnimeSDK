#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMHEPKCFAFH;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define ALAICIHJBFG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CE15B0)
#define ALAICIHJBFG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x12CE15F0)
#define ALAICIHJBFG___C___GETFLOORSAVEDVALUEOVERRIDELIST_B__14_0_OFFSET UNITYSDK_OFFSET(0x12CE1600)

	class ALAICIHJBFG___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NMHEPKCFAFH*, ::RPG::GameCore::FloorSavedValueOverride*>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::NMHEPKCFAFH*, ::RPG::GameCore::FloorSavedValueOverride*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C8B0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C8B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALAICIHJBFG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALAICIHJBFG___C_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FloorSavedValueOverride* __GetFloorSavedValueOverrideList_b__14_0(::NMHEPKCFAFH* a1)
		{
			return ((::RPG::GameCore::FloorSavedValueOverride*(*)(::PVOID, ::NMHEPKCFAFH*))((::PBYTE)hIl2Cpp + ALAICIHJBFG___C___GETFLOORSAVEDVALUEOVERRIDELIST_B__14_0_OFFSET))(this, a1);
		}

	};
