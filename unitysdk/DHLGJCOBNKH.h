#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class KJCEAHCIHIG;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHLGJCOBNKH_CTOR_OFFSET UNITYSDK_OFFSET(0xEBE8680)
#define DHLGJCOBNKH_GET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xEBE8590)
#define DHLGJCOBNKH_GET_SKILLEXTRAEFFECTLIST_OFFSET UNITYSDK_OFFSET(0xEBE8630)
#define DHLGJCOBNKH_GET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xEBE8640)
#define DHLGJCOBNKH_GET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xEBE8570)
#define DHLGJCOBNKH_GET_SKILLSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xEBE85B0)
#define DHLGJCOBNKH_GET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xEBE85D0)
#define DHLGJCOBNKH_GET_SKILLTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xEBE8610)
#define DHLGJCOBNKH_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xEBE85F0)
#define DHLGJCOBNKH_GET_ULTRASKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xEBE8660)
#define DHLGJCOBNKH_SET_SKILLDESC_OFFSET UNITYSDK_OFFSET(0xEBE85A0)
#define DHLGJCOBNKH_SET_SKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xEBE8650)
#define DHLGJCOBNKH_SET_SKILLNAME_OFFSET UNITYSDK_OFFSET(0xEBE8580)
#define DHLGJCOBNKH_SET_SKILLSIMPLEDESC_OFFSET UNITYSDK_OFFSET(0xEBE85C0)
#define DHLGJCOBNKH_SET_SKILLTAG_OFFSET UNITYSDK_OFFSET(0xEBE85E0)
#define DHLGJCOBNKH_SET_SKILLTYPECOLOR_OFFSET UNITYSDK_OFFSET(0xEBE8620)
#define DHLGJCOBNKH_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xEBE8600)
#define DHLGJCOBNKH_SET_ULTRASKILLICONPATH_OFFSET UNITYSDK_OFFSET(0xEBE8670)

	class DHLGJCOBNKH : public ::System::Object
	{
	public:
		::System::String* _SkillIconPath_k__BackingField; // 0x10
		::System::String* _SkillSimpleDesc_k__BackingField; // 0x18
		::System::String* _UltraSkillIconPath_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::KJCEAHCIHIG*>* _SkillExtraEffectList_k__BackingField; // 0x28
		::System::String* _SkillDesc_k__BackingField; // 0x30
		::RPG::Client::TextID _SkillName_k__BackingField; // 0x38
		::RPG::Client::TextID _SkillType_k__BackingField; // 0x48
		::RPG::Client::TextID _SkillTag_k__BackingField; // 0x58
		::UnityEngine::Color _SkillTypeColor_k__BackingField; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID get_SkillName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLNAME_OFFSET))(this);
		}

		::System::Void set_SkillName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLNAME_OFFSET))(this, a1);
		}

		::System::String* get_SkillDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLDESC_OFFSET))(this);
		}

		::System::Void set_SkillDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLDESC_OFFSET))(this, a1);
		}

		::System::String* get_SkillSimpleDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLSIMPLEDESC_OFFSET))(this);
		}

		::System::Void set_SkillSimpleDesc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLSIMPLEDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillTag()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLTAG_OFFSET))(this);
		}

		::System::Void set_SkillTag(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLTAG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_SkillType()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_SkillTypeColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLTYPECOLOR_OFFSET))(this);
		}

		::System::Void set_SkillTypeColor(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLTYPECOLOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::KJCEAHCIHIG*>* get_SkillExtraEffectList()
		{
			return ((::System::Collections::Generic::List_1<::KJCEAHCIHIG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLEXTRAEFFECTLIST_OFFSET))(this);
		}

		::System::String* get_SkillIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_SKILLICONPATH_OFFSET))(this);
		}

		::System::Void set_SkillIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_SKILLICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_UltraSkillIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_GET_ULTRASKILLICONPATH_OFFSET))(this);
		}

		::System::Void set_UltraSkillIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DHLGJCOBNKH_SET_ULTRASKILLICONPATH_OFFSET))(this, a1);
		}

	};
