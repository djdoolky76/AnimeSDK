#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDOEFAEOPNC.h"
#include "unitysdk/System/Object.h"
class LGAJIAAJIJI;
namespace RPG::GameCore { class LittleGameCustomVisibilityConfig; }

#define IIAFMCJPKDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB488E0)
#define IIAFMCJPKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB48940)

inline static constexpr unsigned int IIAFMCJPKDE_TypeDefinitionIndex = 43299;

	class IIAFMCJPKDE : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameCustomVisibilityConfig* EABKOHGCHFP; // 0x10
		::LGAJIAAJIJI* NNANJMDMAOC; // 0x18
		::FDOEFAEOPNC PBOCJBPJJOE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFMCJPKDE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFMCJPKDE_CLEAR_OFFSET))(this);
		}

	};
