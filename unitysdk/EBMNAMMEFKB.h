#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAODCLALLME;
class HHEIPELCNLH;
namespace RPG::Client::FateRin::Logging { class ILogger; }
namespace RPG::Client::FateRin::Logging { class ILoggerFactory; }

#define EBMNAMMEFKB_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x12CFEF00)
#define EBMNAMMEFKB_CTOR_OFFSET UNITYSDK_OFFSET(0x12CFEED0)

inline static constexpr unsigned int EBMNAMMEFKB_TypeDefinitionIndex = 81200;

	class EBMNAMMEFKB : public ::System::Object
	{
	public:
		::RPG::Client::FateRin::Logging::ILogger* JKCNFDEAMDJ; // 0x10
		::FAODCLALLME* ILMLNDPKFNO; // 0x18
		::System::Void _ctor(::FAODCLALLME* a1, ::RPG::Client::FateRin::Logging::ILoggerFactory* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FAODCLALLME*, ::RPG::Client::FateRin::Logging::ILoggerFactory*))((::PBYTE)hIl2Cpp + EBMNAMMEFKB_CTOR_OFFSET))(this, a1, a2);
		}

		::HHEIPELCNLH* BPLPBPMEODA()
		{
			return ((::HHEIPELCNLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMNAMMEFKB_BPLPBPMEODA_OFFSET))(this);
		}

	};
