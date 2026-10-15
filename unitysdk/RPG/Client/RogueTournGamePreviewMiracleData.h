#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RogueTournMiracleDataBase.h"
class ENJFKKLJMOJ;
class OAFCOIPLJAH;
namespace RPG::Client { class RogueTournGamePreviewMiracleData; }
namespace RPG::GameCore { class RogueMiracleDisplayRow; }
namespace RPG::GameCore { class RogueMiracleEffectRow; }
namespace RPG::GameCore { class RogueTournMiracleRow; }
namespace System { class Object; }

#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET UNITYSDK_OFFSET(0xDFEE340)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET UNITYSDK_OFFSET(0xDFEE240)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDFEE100)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDFEE0F0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET UNITYSDK_OFFSET(0xDFEE4C0)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET UNITYSDK_OFFSET(0xDFEE150)
#define RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET UNITYSDK_OFFSET(0xDFEE290)

namespace RPG::Client
{
	class RogueTournGamePreviewMiracleData : public ::RPG::Client::RogueTournMiracleDataBase
	{
	public:
		::OAFCOIPLJAH* _GlobalBlackboardProxy; // 0x60
		::System::Boolean _IsBroken; // 0x68
		::System::Void _ctor(::OAFCOIPLJAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAFCOIPLJAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* Create(::System::UInt32 a1, ::ENJFKKLJMOJ* a2)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::ENJFKKLJMOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* CreateMockBroken(::System::UInt32 a1, ::ENJFKKLJMOJ* a2)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::ENJFKKLJMOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CREATEMOCKBROKEN_OFFSET))(a1, a2);
		}

		static ::RPG::Client::RogueTournGamePreviewMiracleData* _Create(::System::UInt32 a1, ::System::Boolean a2, ::ENJFKKLJMOJ* a3)
		{
			return ((::RPG::Client::RogueTournGamePreviewMiracleData*(*)(::System::UInt32, ::System::Boolean, ::ENJFKKLJMOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Void _InitFromRows(::RPG::GameCore::RogueTournMiracleRow* a1, ::RPG::GameCore::RogueMiracleDisplayRow* a2, ::RPG::GameCore::RogueMiracleEffectRow* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueTournMiracleRow*, ::RPG::GameCore::RogueMiracleDisplayRow*, ::RPG::GameCore::RogueMiracleEffectRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA__INITFROMROWS_OFFSET))(this, a1, a2, a3);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_CLONE_OFFSET))(this);
		}

		::System::Boolean IsBroken()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUETOURNGAMEPREVIEWMIRACLEDATA_ISBROKEN_OFFSET))(this);
		}

	};
}
