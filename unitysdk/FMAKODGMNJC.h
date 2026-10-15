#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APDMIIEDMLI_CFHOMFLPNNO.h"
#include "unitysdk/RPG/GameCore/ConditionType.h"
class KPMHFPMPBBD;
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define FMAKODGMNJC_CTOR_OFFSET UNITYSDK_OFFSET(0x15838C20)
#define FMAKODGMNJC_GET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x15838C00)
#define FMAKODGMNJC_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x15838CC0)
#define FMAKODGMNJC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15838C60)
#define FMAKODGMNJC_MGFCPBINGNJ_OFFSET UNITYSDK_OFFSET(0x15838E00)
#define FMAKODGMNJC_SET_CONDITIONPARAM_OFFSET UNITYSDK_OFFSET(0x15838C10)

inline static constexpr unsigned int FMAKODGMNJC_TypeDefinitionIndex = 59905;

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
