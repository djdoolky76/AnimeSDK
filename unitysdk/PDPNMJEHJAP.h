#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIController; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define PDPNMJEHJAP_AKOIFEHLGDO_OFFSET UNITYSDK_OFFSET(0x1AAF4680)
#define PDPNMJEHJAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF40B0)
#define PDPNMJEHJAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AAF40C0)
#define PDPNMJEHJAP_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1AAF4150)
#define PDPNMJEHJAP_EKGNMMMLKIL_OFFSET UNITYSDK_OFFSET(0x1AAF4500)
#define PDPNMJEHJAP_OOOHIHLDFPF_OFFSET UNITYSDK_OFFSET(0x1AAF4230)

inline static constexpr unsigned int PDPNMJEHJAP_TypeDefinitionIndex = 68908;

	class PDPNMJEHJAP : public ::System::Object
	{
	public:
		::RPG::Client::UIController* KMNLKONEEGF; // 0x10
		::RPG::Client::Promises::Promise* PJKEAFGNKDN; // 0x18
		::RPG::GameCore::RogueSubMode FKNBPKADNPA; // 0x20
		::System::Boolean GEMLLCNLHHM; // 0x24
		::System::Boolean HAKNEFLPMAP; // 0x25
		::System::Void _ctor(::RPG::GameCore::RogueSubMode a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode, ::System::Boolean))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_DISPOSE_OFFSET))(this);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_DMKJAJLNEBK_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* OOOHIHLDFPF()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_OOOHIHLDFPF_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* EKGNMMMLKIL()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_EKGNMMMLKIL_OFFSET))(this);
		}

		::System::Void AKOIFEHLGDO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDPNMJEHJAP_AKOIFEHLGDO_OFFSET))(this, a1);
		}

	};
