#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
class KPMHFPMPBBD;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define FMAKODGMNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x18973DE0)
#define FMAKODGMNJC_GET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x18973DC0)
#define FMAKODGMNJC_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x18973E80)
#define FMAKODGMNJC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x18973E20)
#define FMAKODGMNJC_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x18973FC0)
#define FMAKODGMNJC_SET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x18973DD0)

inline static constexpr unsigned int FMAKODGMNJC_TypeDefinitionIndex = 61189;

	class FMAKODGMNJC : public ::APDMIIEDMLI_CFHOMFLPNNO
	{
	public:
		::RPG::GameCore::ConditionParam* _ConditionParam_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::GameCore::ConditionType a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionType, ::System::String*))((::PBYTE)hIl2Cpp + FMAKODGMNJC_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::ConditionParam* get_ConditionParam()
		{
			return ((::RPG::GameCore::ConditionParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKODGMNJC_GET_CONDITIONPARAM_OFFSET))(this);
		}

		::System::Void set_ConditionParam(::RPG::GameCore::ConditionParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConditionParam*))((::PBYTE)hIl2Cpp + FMAKODGMNJC_SET_CONDITIONPARAM_OFFSET))(this, a1);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKODGMNJC_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + FMAKODGMNJC_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

		::System::Void MGFCPBINGNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMAKODGMNJC_MGFCPBINGNJ_OFFSET))(this);
		}

	};
