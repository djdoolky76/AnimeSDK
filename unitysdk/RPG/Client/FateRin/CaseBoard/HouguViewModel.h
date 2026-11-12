#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class HKAJMEMCBLC;
class LMKIOMMDEJI;
namespace RPG::Client::FateRin::CaseBoard { class HouguViewModel; }
namespace RPG::GameCore { class FateRinCaseBoardHouguInfo; }
namespace System { class String; }

#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CREATE_OFFSET UNITYSDK_OFFSET(0xD91B050)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xD91BA20)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_HOUGUID_OFFSET UNITYSDK_OFFSET(0xD91B7F0)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xD91B900)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISCOLLECTED_OFFSET UNITYSDK_OFFSET(0xD91B830)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD91B810)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0xD91B880)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_HOUGUID_OFFSET UNITYSDK_OFFSET(0xD91B800)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xD91B820)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_UPDATE_OFFSET UNITYSDK_OFFSET(0xD91B2E0)
#define RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__INIT_OFFSET UNITYSDK_OFFSET(0xD91BAA0)

namespace RPG::Client::FateRin::CaseBoard
{
	inline static constexpr unsigned int HouguViewModel_TypeDefinitionIndex = 83581;

	class HouguViewModel : public ::System::Object
	{
	public:
		::HKAJMEMCBLC* _Card; // 0x10
		::LMKIOMMDEJI* _CaseBoardService; // 0x18
		::System::UInt32 _HouguID_k__BackingField; // 0x20
		::System::Boolean _IsShow_k__BackingField; // 0x24
		::System::Void _ctor(::LMKIOMMDEJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMKIOMMDEJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_HouguID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_HOUGUID_OFFSET))(this);
		}

		::System::Void set_HouguID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_HOUGUID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISSHOW_OFFSET))(this);
		}

		::System::Void set_IsShow(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_SET_ISSHOW_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCollected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ISCOLLECTED_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		static ::RPG::Client::FateRin::CaseBoard::HouguViewModel* Create(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1, ::LMKIOMMDEJI* a2)
		{
			return ((::RPG::Client::FateRin::CaseBoard::HouguViewModel*(*)(::RPG::GameCore::FateRinCaseBoardHouguInfo*, ::LMKIOMMDEJI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_CREATE_OFFSET))(a1, a2);
		}

		::System::Void _Init(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardHouguInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL__INIT_OFFSET))(this, a1);
		}

		::System::Void Update(::RPG::GameCore::FateRinCaseBoardHouguInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FateRinCaseBoardHouguInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_CASEBOARD_HOUGUVIEWMODEL_UPDATE_OFFSET))(this, a1);
		}

	};
}
