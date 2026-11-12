#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightRoleSkillRemark_RemarkState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTagType.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
class JCEBDGLJIEJ;
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightRoleSkillDetail; }
namespace RPG::GameCore { class GridFightRoleSpecSkillRemConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_CTOR_OFFSET UNITYSDK_OFFSET(0xDC617F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GETSKILLTAGCOLOR_OFFSET UNITYSDK_OFFSET(0xDC640F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GETSKILLTAGTEXTID_OFFSET UNITYSDK_OFFSET(0xDC641C0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0xDC642A0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_DESCCOMPILED_OFFSET UNITYSDK_OFFSET(0xDC63ED0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC63EB0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_NAME_OFFSET UNITYSDK_OFFSET(0xDC63F70)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDC642F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xDC64310)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_STATE_OFFSET UNITYSDK_OFFSET(0xDC602F0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0xDC64330)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_DESC_OFFSET UNITYSDK_OFFSET(0xDC63EC0)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_SKILLID_OFFSET UNITYSDK_OFFSET(0xDC64300)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_SKILLTYPE_OFFSET UNITYSDK_OFFSET(0xDC64320)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0xDC64340)
#define RPG_CLIENT_GRIDFIGHTROLESKILLREMARK__GET_NAME_B__9_0_OFFSET UNITYSDK_OFFSET(0xDC64350)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleSkillRemark_TypeDefinitionIndex = 66839;

	class GridFightRoleSkillRemark : public ::System::Object
	{
	public:
		::JCEBDGLJIEJ* _Activator; // 0x10
		::RPG::Client::GridFightRole* _Role; // 0x18
		::RPG::Client::TextID _Desc_k__BackingField; // 0x20
		::RPG::GameCore::GridFightRoleSkillTagType _TagType_k__BackingField; // 0x30
		::RPG::GameCore::GridFightSkillType _SkillType_k__BackingField; // 0x34
		::System::UInt32 _SkillID_k__BackingField; // 0x38
		::System::Void _ctor(::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow* a1, ::RPG::Client::GridFightRole* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleSpecSkillRemConfigRow*, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_DESC_OFFSET))(this, a1);
		}

		::System::String* get_DescCompiled()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_DESCCOMPILED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_NAME_OFFSET))(this);
		}

		::UnityEngine::Color GetSkillTagColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GETSKILLTAGCOLOR_OFFSET))(this);
		}

		::RPG::Client::TextID GetSkillTagTextID()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GETSKILLTAGTEXTID_OFFSET))(this);
		}

		::RPG::Client::GridFightRoleSkillRemark_RemarkState get_State()
		{
			return ((::RPG::Client::GridFightRoleSkillRemark_RemarkState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_ACTIVE_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_SKILLID_OFFSET))(this);
		}

		::System::Void set_SkillID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_SKILLID_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightSkillType get_SkillType()
		{
			return ((::RPG::GameCore::GridFightSkillType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_SKILLTYPE_OFFSET))(this);
		}

		::System::Void set_SkillType(::RPG::GameCore::GridFightSkillType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_SKILLTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GridFightRoleSkillTagType get_TagType()
		{
			return ((::RPG::GameCore::GridFightRoleSkillTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_GET_TAGTYPE_OFFSET))(this);
		}

		::System::Void set_TagType(::RPG::GameCore::GridFightRoleSkillTagType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightRoleSkillTagType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK_SET_TAGTYPE_OFFSET))(this, a1);
		}

		::System::Boolean _get_Name_b__9_0(::RPG::Client::GridFightRoleSkillDetail* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRoleSkillDetail*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLESKILLREMARK__GET_NAME_B__9_0_OFFSET))(this, a1);
		}

	};
}
