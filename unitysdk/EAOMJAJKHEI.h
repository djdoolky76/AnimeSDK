#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"

#define EAOMJAJKHEI_CTOR_OFFSET UNITYSDK_OFFSET(0x13A95580)
#define EAOMJAJKHEI_GETFAILHINTTEXT_OFFSET UNITYSDK_OFFSET(0x13A952F0)
#define EAOMJAJKHEI_HASTRIGGERACTION_OFFSET UNITYSDK_OFFSET(0x13A954C0)
#define EAOMJAJKHEI_ONTRIGGER_OFFSET UNITYSDK_OFFSET(0x13A95500)
#define EAOMJAJKHEI_SHOULDTRIGGER_OFFSET UNITYSDK_OFFSET(0x13A953A0)

inline static constexpr unsigned int EAOMJAJKHEI_TypeDefinitionIndex = 77714;

	class EAOMJAJKHEI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMJAJKHEI_CTOR_OFFSET))(this);
		}

		::RPG::Client::TextID GetFailHintText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMJAJKHEI_GETFAILHINTTEXT_OFFSET))(this);
		}

		::System::Boolean ShouldTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMJAJKHEI_SHOULDTRIGGER_OFFSET))(this);
		}

		::System::Boolean HasTriggerAction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMJAJKHEI_HASTRIGGERACTION_OFFSET))(this);
		}

		::System::Void OnTrigger()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAOMJAJKHEI_ONTRIGGER_OFFSET))(this);
		}

	};
