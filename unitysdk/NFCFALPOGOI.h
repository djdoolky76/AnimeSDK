#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define NFCFALPOGOI_AEOAJANLCMF_OFFSET UNITYSDK_OFFSET(0xBB78CE0)
#define NFCFALPOGOI_CTOR_OFFSET UNITYSDK_OFFSET(0xBB78C30)
#define NFCFALPOGOI_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xBB78C90)
#define NFCFALPOGOI_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xBB78C40)
#define NFCFALPOGOI_HKMHCHNNGBK_OFFSET UNITYSDK_OFFSET(0xBB78D00)
#define NFCFALPOGOI_LFPMEJBHNFD_OFFSET UNITYSDK_OFFSET(0xBB78CF0)

	class NFCFALPOGOI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JFCIBPBJFGC; // 0x10
		::System::String* BCNCHNNGCGF; // 0x18
		::System::Boolean CAMFELEBOCO; // 0x20
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NFCFALPOGOI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFALPOGOI_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFALPOGOI_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* AEOAJANLCMF()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFALPOGOI_AEOAJANLCMF_OFFSET))(this);
		}

		::System::Boolean LFPMEJBHNFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFALPOGOI_LFPMEJBHNFD_OFFSET))(this);
		}

		::System::String* HKMHCHNNGBK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFCFALPOGOI_HKMHCHNNGBK_OFFSET))(this);
		}

	};
