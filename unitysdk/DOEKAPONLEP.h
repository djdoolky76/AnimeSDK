#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICHCKGNHKPF.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueBuffData; }
namespace System { class Object; }

#define DOEKAPONLEP_CTOR_OFFSET UNITYSDK_OFFSET(0x11FDC920)
#define DOEKAPONLEP_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0x11FDC930)
#define DOEKAPONLEP_KPMNALHKMFA_OFFSET UNITYSDK_OFFSET(0x11FDC9D0)

inline static constexpr unsigned int DOEKAPONLEP_TypeDefinitionIndex = 67260;

	class DOEKAPONLEP : public ::System::Object
	{
	public:
		::RPG::Client::RogueBuffData* EJCGHJIJMEN; // 0x10
		::ICHCKGNHKPF LNPLJMDCPEP; // 0x18
		::System::Void _ctor(::ICHCKGNHKPF a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICHCKGNHKPF))((::PBYTE)hIl2Cpp + DOEKAPONLEP_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKAPONLEP_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::Client::RogueBuffData* KPMNALHKMFA()
		{
			return ((::RPG::Client::RogueBuffData*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOEKAPONLEP_KPMNALHKMFA_OFFSET))(this);
		}

	};
