#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFCMMMMMIIO.h"
namespace RPG::Client { class GameObjectAudio; }
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AOIFDEBMKEP_BOEFIBKPEDC_OFFSET UNITYSDK_OFFSET(0x158A20D0)
#define AOIFDEBMKEP_CTOR_OFFSET UNITYSDK_OFFSET(0x158A23B0)
#define AOIFDEBMKEP_MBOCAJADFOO_OFFSET UNITYSDK_OFFSET(0x158A2220)
#define AOIFDEBMKEP_MEHIALBHLEJ_OFFSET UNITYSDK_OFFSET(0x158A21D0)
#define AOIFDEBMKEP_NIBJNBCAAIA_OFFSET UNITYSDK_OFFSET(0x158A2150)
#define AOIFDEBMKEP_PAHEIGLPKJE_OFFSET UNITYSDK_OFFSET(0x158A2320)

inline static constexpr unsigned int AOIFDEBMKEP_TypeDefinitionIndex = 75570;

	class AOIFDEBMKEP : public ::KFCMMMMMIIO
	{
	public:
		::RPG::Client::GameObjectAudio* HJJMJLCIFNC; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_CTOR_OFFSET))(this);
		}

		::System::Void BOEFIBKPEDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_BOEFIBKPEDC_OFFSET))(this);
		}

		::System::Void NIBJNBCAAIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_NIBJNBCAAIA_OFFSET))(this);
		}

		::System::Void MEHIALBHLEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_MEHIALBHLEJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* MBOCAJADFOO(::System::String* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_MBOCAJADFOO_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHipplenInteractInfoRow* PAHEIGLPKJE()
		{
			return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOIFDEBMKEP_PAHEIGLPKJE_OFFSET))(this);
		}

	};
