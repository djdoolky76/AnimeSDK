#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LLCFODKNNLB;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_JEPJJNLCBMO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x12B4BB90)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_JEPJJNLCBMO__CTOR_OFFSET UNITYSDK_OFFSET(0x12B4BB80)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager_JEPJJNLCBMO_TypeDefinitionIndex = 62587;

	class ConfigChessboardPluginManager_JEPJJNLCBMO : public ::System::Object
	{
	public:
		::System::Action_1<::LLCFODKNNLB*>* AMHGBGMOMLL; // 0x10
		::System::Action* IBNICCGMILF; // 0x18
		::System::Int32 HBINAGPODHA; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_JEPJJNLCBMO__CTOR_OFFSET))(this);
		}

		::System::Void OKKMJKOAIKG(::LLCFODKNNLB* CIMFKACAGNI)
		{
			return ((::System::Void(*)(::PVOID, ::LLCFODKNNLB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_JEPJJNLCBMO_OKKMJKOAIKG_OFFSET))(this, CIMFKACAGNI);
		}
	};
}
