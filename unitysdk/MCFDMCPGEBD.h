#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGIPGEHBL;
namespace RPG::GameCore { class LittleGameSandboxConfig; }
namespace RPG::GameCore { class LittleGameSandboxProfile; }
namespace System { class String; }

#define MCFDMCPGEBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1B83F560)
#define MCFDMCPGEBD_DIPFOIAKDDM_OFFSET UNITYSDK_OFFSET(0x1B83F500)

inline static constexpr unsigned int MCFDMCPGEBD_TypeDefinitionIndex = 61921;

	class MCFDMCPGEBD : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameSandboxProfile* EDNBHFFLHNC; // 0x10
		::JAIGIPGEHBL* GMMBCIJGPDG; // 0x18
		::System::String* LIKDABMKBFH; // 0x20
		::RPG::GameCore::LittleGameSandboxConfig* EABKOHGCHFP; // 0x28
		::System::String* ICEPLFPKAHC; // 0x30
		::System::Boolean NKPDABBJDOJ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDMCPGEBD_CTOR_OFFSET))(this);
		}

		::System::Boolean DIPFOIAKDDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCFDMCPGEBD_DIPFOIAKDDM_OFFSET))(this);
		}

	};
