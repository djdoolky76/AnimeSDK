#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJNDFBIACLJ.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ModifierBehaviorFlag.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IIIDOKNGBNL_CLEAR_OFFSET UNITYSDK_OFFSET(0x164301C0)
#define IIIDOKNGBNL_CTOR_OFFSET UNITYSDK_OFFSET(0x16430580)
#define IIIDOKNGBNL_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x16430270)
#define IIIDOKNGBNL_GET_LAYER_OFFSET UNITYSDK_OFFSET(0x16430520)
#define IIIDOKNGBNL_GET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x16430560)
#define IIIDOKNGBNL_GET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0x16430540)
#define IIIDOKNGBNL_OBJEFNGKLHB_OFFSET UNITYSDK_OFFSET(0x164304C0)
#define IIIDOKNGBNL_SET_LAYER_OFFSET UNITYSDK_OFFSET(0x16430530)
#define IIIDOKNGBNL_SET_LIFETIME_OFFSET UNITYSDK_OFFSET(0x16430570)
#define IIIDOKNGBNL_SET_MAXLAYER_OFFSET UNITYSDK_OFFSET(0x16430550)

inline static constexpr unsigned int IIIDOKNGBNL_TypeDefinitionIndex = 54442;

	class IIIDOKNGBNL : public ::LJNDFBIACLJ
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorFlag>* LNNGJBLKMHI; // 0x30
		::RPG::GameCore::FixPoint _LifeTime_k__BackingField; // 0x38
		::RPG::GameCore::FixPoint _MaxLayer_k__BackingField; // 0x40
		::RPG::GameCore::FixPoint _Layer_k__BackingField; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_CLEAR_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_DLAILGNMFGI_OFFSET))(this, a1);
		}

		::System::Boolean OBJEFNGKLHB(::RPG::GameCore::ModifierBehaviorFlag a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorFlag))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_OBJEFNGKLHB_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_Layer()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_GET_LAYER_OFFSET))(this);
		}

		::System::Void set_Layer(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_SET_LAYER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_MaxLayer()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_GET_MAXLAYER_OFFSET))(this);
		}

		::System::Void set_MaxLayer(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_SET_MAXLAYER_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_LifeTime()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_GET_LIFETIME_OFFSET))(this);
		}

		::System::Void set_LifeTime(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + IIIDOKNGBNL_SET_LIFETIME_OFFSET))(this, a1);
		}

	};
