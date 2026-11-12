#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KFGGDNIGKGG;
namespace System { class Action; }
namespace System { class String; }

#define BHHPHPGCODJ_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xBB43EA0)
#define BHHPHPGCODJ_AHNHNBDCOLP_OFFSET UNITYSDK_OFFSET(0xBB43DF0)
#define BHHPHPGCODJ_CPKOILJOBOB_OFFSET UNITYSDK_OFFSET(0xBB43E30)
#define BHHPHPGCODJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBB43F60)
#define BHHPHPGCODJ_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xBB43D90)
#define BHHPHPGCODJ_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB43D70)
#define BHHPHPGCODJ_GET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0xBB43DD0)
#define BHHPHPGCODJ_GET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0xBB43DB0)
#define BHHPHPGCODJ_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xBB43D50)
#define BHHPHPGCODJ_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0xBB43F00)
#define BHHPHPGCODJ_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0xBB43DA0)
#define BHHPHPGCODJ_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB43D80)
#define BHHPHPGCODJ_SET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0xBB43DE0)
#define BHHPHPGCODJ_SET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0xBB43DC0)
#define BHHPHPGCODJ_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xBB43D60)

inline static constexpr unsigned int BHHPHPGCODJ_TypeDefinitionIndex = 82203;

	class BHHPHPGCODJ : public ::System::Object
	{
	public:
		::System::Action* OnIsCheckedChanged; // 0x10
		::System::String* _TargetDesc_k__BackingField; // 0x18
		::KFGGDNIGKGG* _Type_k__BackingField; // 0x20
		::RPG::Client::TextID _LevelName_k__BackingField; // 0x28
		::System::Int32 _Level_k__BackingField; // 0x38
		::System::Boolean _ShouldExplainTarget_k__BackingField; // 0x3C
		::System::Boolean PGNIIDNPONO; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_CTOR_OFFSET))(this);
		}

		::KFGGDNIGKGG* get_Type()
		{
			return ((::KFGGDNIGKGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::KFGGDNIGKGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFGGDNIGKGG*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Int32 get_Level()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_SET_LEVEL_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LevelName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_GET_LEVELNAME_OFFSET))(this);
		}

		::System::Void set_LevelName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_SET_LEVELNAME_OFFSET))(this, a1);
		}

		::System::String* get_TargetDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_GET_TARGETDESC_OFFSET))(this);
		}

		::System::Void set_TargetDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_SET_TARGETDESC_OFFSET))(this, a1);
		}

		::System::Boolean get_ShouldExplainTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_GET_SHOULDEXPLAINTARGET_OFFSET))(this);
		}

		::System::Void set_ShouldExplainTarget(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_SET_SHOULDEXPLAINTARGET_OFFSET))(this, a1);
		}

		::System::Boolean AHNHNBDCOLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_AHNHNBDCOLP_OFFSET))(this);
		}

		::System::Void CPKOILJOBOB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_CPKOILJOBOB_OFFSET))(this, a1);
		}

		::System::Void add_OnIsCheckedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_ADD_ONISCHECKEDCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnIsCheckedChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BHHPHPGCODJ_REMOVE_ONISCHECKEDCHANGED_OFFSET))(this, a1);
		}

	};
