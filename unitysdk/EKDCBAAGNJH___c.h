#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class BattleGridFightEquipData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define EKDCBAAGNJH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x154F5340)
#define EKDCBAAGNJH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x154F5380)
#define EKDCBAAGNJH___C___SETUPEQUIPITEMPANELS_B__9_0_OFFSET UNITYSDK_OFFSET(0x154F5390)

inline static constexpr unsigned int EKDCBAAGNJH___c_TypeDefinitionIndex = 72252;

	class EKDCBAAGNJH___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::BattleGridFightEquipData*, ::System::Int32>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::RPG::GameCore::BattleGridFightEquipData*, ::System::Int32>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x352D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x352D8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKDCBAAGNJH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKDCBAAGNJH___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __SetupEquipItemPanels_b__9_0(::RPG::GameCore::BattleGridFightEquipData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::BattleGridFightEquipData*))((::PBYTE)hIl2Cpp + EKDCBAAGNJH___C___SETUPEQUIPITEMPANELS_B__9_0_OFFSET))(this, a1);
		}

	};
