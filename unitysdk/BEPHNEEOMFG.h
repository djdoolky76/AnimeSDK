#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::Client { class MonoJoyStickProvider; }

#define BEPHNEEOMFG_ACADECJNEBL_OFFSET UNITYSDK_OFFSET(0xB7E5CB0)
#define BEPHNEEOMFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7E5C50)
#define BEPHNEEOMFG_IGAHPDCHJLI_OFFSET UNITYSDK_OFFSET(0xB7E5C70)

inline static constexpr unsigned int BEPHNEEOMFG_TypeDefinitionIndex = 62699;

	class BEPHNEEOMFG
	{
	public:
		::System::Void _ctor(::RPG::Client::MonoJoyStickProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoJoyStickProvider*))((::PBYTE)hIl2Cpp + BEPHNEEOMFG_CTOR_OFFSET))(this, a1);
		}

		::System::Void IGAHPDCHJLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHNEEOMFG_IGAHPDCHJLI_OFFSET))(this);
		}

		::System::Void ACADECJNEBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEPHNEEOMFG_ACADECJNEBL_OFFSET))(this);
		}

	};
