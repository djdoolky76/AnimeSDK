#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class FAPMPKICHBB;
class GPOJDMAFJDE;
namespace System { class String; }

#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0xCE42A30)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARICONPATH_OFFSET UNITYSDK_OFFSET(0xCE42920)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0xCE428D0)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNCNT_OFFSET UNITYSDK_OFFSET(0xCE42880)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNDESC_OFFSET UNITYSDK_OFFSET(0xCE42810)
#define RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNNAME_OFFSET UNITYSDK_OFFSET(0xCE427A0)

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleMapFunViewModel_TypeDefinitionIndex = 63943;

	class ExpeditionBattleMapFunViewModel : public ::System::Object
	{
	public:
		::FAPMPKICHBB* _FunRecord; // 0x10
		::GPOJDMAFJDE* _DisplayService; // 0x18
		::System::Void _ctor(::FAPMPKICHBB* a1, ::GPOJDMAFJDE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FAPMPKICHBB*, ::GPOJDMAFJDE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::TextID get_FunName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNNAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_FunDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNDESC_OFFSET))(this);
		}

		::System::UInt64 get_FunCnt()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_FUNCNT_OFFSET))(this);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARID_OFFSET))(this);
		}

		::System::String* get_AvatarIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EXPEDITIONBATTLEMAPFUNVIEWMODEL_GET_AVATARICONPATH_OFFSET))(this);
		}

	};
}
