#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class RogueBuffData; }
namespace RPG::GameCore { class RogueAeonRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEAEONBUFFINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7C2030)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C7C2150)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETBASICBUFF_OFFSET UNITYSDK_OFFSET(0x1C7C21D0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GETENHANCEBUFFS_OFFSET UNITYSDK_OFFSET(0x1C7C23A0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONDISPLAYID_OFFSET UNITYSDK_OFFSET(0x1C7C2670)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONID_OFFSET UNITYSDK_OFFSET(0x1C7C2630)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET UNITYSDK_OFFSET(0x1C7C2650)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC1_OFFSET UNITYSDK_OFFSET(0x1C7C26C0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC2_OFFSET UNITYSDK_OFFSET(0x1C7C2730)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_GET_ROGUEBUFFTYPE_OFFSET UNITYSDK_OFFSET(0x1C7C27A0)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET UNITYSDK_OFFSET(0x1C7C2100)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET UNITYSDK_OFFSET(0x1C7C2640)
#define RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET UNITYSDK_OFFSET(0x1C7C2660)
#define RPG_CLIENT_ROGUEAEONBUFFINFO__TRYINIT_OFFSET UNITYSDK_OFFSET(0x1C7C2040)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAeonBuffInfo_TypeDefinitionIndex = 69398;

	class RogueAeonBuffInfo : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueAeonRow* _AeonRow_k__BackingField; // 0x10
		::RPG::Client::RogueBuffData* _BasicBuff; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* _EnhanceBuffs; // 0x20
		::System::UInt32 _AeonID_k__BackingField; // 0x28
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_CTOR_OFFSET))(this, a1);
		}

		::System::Void Refresh(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_REFRESH_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _TryInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO__TRYINIT_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* GetBasicBuff()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GETBASICBUFF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>* GetEnhanceBuffs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueBuffData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GETENHANCEBUFFS_OFFSET))(this);
		}

		::System::UInt32 get_AeonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONID_OFFSET))(this);
		}

		::System::Void set_AeonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONID_OFFSET))(this, a1);
		}

		::RPG::GameCore::RogueAeonRow* get_AeonRow()
		{
			return ((::RPG::GameCore::RogueAeonRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONROW_OFFSET))(this);
		}

		::System::Void set_AeonRow(::RPG::GameCore::RogueAeonRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueAeonRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_SET_AEONROW_OFFSET))(this, a1);
		}

		::System::UInt32 get_AeonDisplayID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_AEONDISPLAYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectDesc1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC1_OFFSET))(this);
		}

		::RPG::Client::TextID get_EffectDesc2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_EFFECTDESC2_OFFSET))(this);
		}

		::System::UInt32 get_RogueBuffType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEAEONBUFFINFO_GET_ROGUEBUFFTYPE_OFFSET))(this);
		}

	};
}
