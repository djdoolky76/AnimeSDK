#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGameSandboxValidationSeverity.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define KMHLBLHBKKF_CTOR_OFFSET UNITYSDK_OFFSET(0xBDA2E00)

inline static constexpr unsigned int KMHLBLHBKKF_TypeDefinitionIndex = 61902;

	class KMHLBLHBKKF : public ::System::Object
	{
	public:
		::System::String* CAJPAGKBBML; // 0x10
		::System::String* IPKCFNKIDMB; // 0x18
		::RPG::Client::LittleGameSandboxValidationSeverity CJFGCAMPOFI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHLBLHBKKF_CTOR_OFFSET))(this);
		}

	};
