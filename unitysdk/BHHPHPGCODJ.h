#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class KFGGDNIGKGG;
namespace System { class Action; }
namespace System { class String; }

#define BHHPHPGCODJ_ADD_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0x151F94C0)
#define BHHPHPGCODJ_AHNHNBDCOLP_OFFSET UNITYSDK_OFFSET(0x151F9410)
#define BHHPHPGCODJ_CPKOILJOBOB_OFFSET UNITYSDK_OFFSET(0x151F9450)
#define BHHPHPGCODJ_CTOR_OFFSET UNITYSDK_OFFSET(0x151F9580)
#define BHHPHPGCODJ_GET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x151F93B0)
#define BHHPHPGCODJ_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x151F9390)
#define BHHPHPGCODJ_GET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0x151F93F0)
#define BHHPHPGCODJ_GET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0x151F93D0)
#define BHHPHPGCODJ_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x151F9370)
#define BHHPHPGCODJ_REMOVE_ONISCHECKEDCHANGED_OFFSET UNITYSDK_OFFSET(0x151F9520)
#define BHHPHPGCODJ_SET_LEVELNAME_OFFSET UNITYSDK_OFFSET(0x151F93C0)
#define BHHPHPGCODJ_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x151F93A0)
#define BHHPHPGCODJ_SET_SHOULDEXPLAINTARGET_OFFSET UNITYSDK_OFFSET(0x151F9400)
#define BHHPHPGCODJ_SET_TARGETDESC_OFFSET UNITYSDK_OFFSET(0x151F93E0)
#define BHHPHPGCODJ_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x151F9380)

inline static constexpr unsigned int BHHPHPGCODJ_TypeDefinitionIndex = 82202;

	class BHHPHPGCODJ : public ::System::Object
	{
	public:
		::System::String* _TargetDesc_k__BackingField; // 0x10
		::KFGGDNIGKGG* _Type_k__BackingField; // 0x18
		::System::Action* OnIsCheckedChanged; // 0x20
		::System::Int32 _Level_k__BackingField; // 0x28
		::System::Boolean PGNIIDNPONO; // 0x2C
		::System::Boolean _ShouldExplainTarget_k__BackingField; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _LevelName_k__BackingField; // 0x30
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
