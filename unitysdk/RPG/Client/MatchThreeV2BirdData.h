#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class MatchThreeSkillData; }
namespace RPG::Client { class MatchThreeV2BirdData; }
namespace RPG::GameCore { class MatchThreeBirdRow; }
namespace RPG::GameCore { class MatchThreeV2BirdRow; }
namespace System { class String; }

#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1D708C40)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1D708A70)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D708AD0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_BIRDDESC_OFFSET UNITYSDK_OFFSET(0x1D708210)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_BIRDNAME_OFFSET UNITYSDK_OFFSET(0x1D708150)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DEFAULTEMO_OFFSET UNITYSDK_OFFSET(0x1D708550)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DISPLAYROW_OFFSET UNITYSDK_OFFSET(0x1D707FE0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DRAWEMO_OFFSET UNITYSDK_OFFSET(0x1D708690)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_FACEMAT_OFFSET UNITYSDK_OFFSET(0x1D7084B0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0x1D7087D0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D7082D0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D7080A0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1D708370)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1D708870)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_LOSEEMO_OFFSET UNITYSDK_OFFSET(0x1D708730)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_MODELPATH_OFFSET UNITYSDK_OFFSET(0x1D708410)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1D7089B0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1D708040)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_SKILLID_OFFSET UNITYSDK_OFFSET(0x1D7080B0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_SKILL_OFFSET UNITYSDK_OFFSET(0x1D708A50)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_UNLOCKLEVELS_OFFSET UNITYSDK_OFFSET(0x1D708910)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_WINEMO_OFFSET UNITYSDK_OFFSET(0x1D7085F0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_INIT_OFFSET UNITYSDK_OFFSET(0x1D708AE0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_MARKSEEN_OFFSET UNITYSDK_OFFSET(0x1D708CE0)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA_SET_SKILL_OFFSET UNITYSDK_OFFSET(0x1D708A60)
#define RPG_CLIENT_MATCHTHREEV2BIRDDATA__SETUPSKILLDATA_OFFSET UNITYSDK_OFFSET(0x1D708BA0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreeV2BirdData_TypeDefinitionIndex = 67927;

	class MatchThreeV2BirdData : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeSkillData* _Skill_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::MatchThreeBirdRow* get_DisplayRow()
		{
			return ((::RPG::GameCore::MatchThreeBirdRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DISPLAYROW_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreeV2BirdRow* get_Row()
		{
			return ((::RPG::GameCore::MatchThreeV2BirdRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_SkillID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_SKILLID_OFFSET))(this);
		}

		::RPG::Client::TextID get_BirdName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_BIRDNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_BirdDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_BIRDDESC_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_IMAGEPATH_OFFSET))(this);
		}

		::System::String* get_ModelPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_MODELPATH_OFFSET))(this);
		}

		::System::String* get_FaceMat()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_FACEMAT_OFFSET))(this);
		}

		::System::UInt32 get_DefaultEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DEFAULTEMO_OFFSET))(this);
		}

		::System::UInt32 get_WinEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_WINEMO_OFFSET))(this);
		}

		::System::UInt32 get_DrawEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_DRAWEMO_OFFSET))(this);
		}

		::System::UInt32 get_LoseEmo()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_LOSEEMO_OFFSET))(this);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_GUIDEID_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ISSHOW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_UnlockLevels()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_UNLOCKLEVELS_OFFSET))(this);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_ORDER_OFFSET))(this);
		}

		::RPG::Client::MatchThreeSkillData* get_Skill()
		{
			return ((::RPG::Client::MatchThreeSkillData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_GET_SKILL_OFFSET))(this);
		}

		::System::Void set_Skill(::RPG::Client::MatchThreeSkillData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeSkillData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_SET_SKILL_OFFSET))(this, a1);
		}

		static ::RPG::Client::MatchThreeV2BirdData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::MatchThreeV2BirdData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_CREATE_OFFSET))(a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_INIT_OFFSET))(this);
		}

		::System::Void _SetupSkillData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA__SETUPSKILLDATA_OFFSET))(this);
		}

		::System::Int32 CompareTo(::RPG::Client::MatchThreeV2BirdData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::MatchThreeV2BirdData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_COMPARETO_OFFSET))(this, a1);
		}

		::System::Void MarkSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEV2BIRDDATA_MARKSEEN_OFFSET))(this);
		}

	};
}
