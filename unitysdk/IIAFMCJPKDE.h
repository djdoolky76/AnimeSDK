#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDOEFAEOPNC.h"
#include "unitysdk/System/Object.h"
class LGAJIAAJIJI;
namespace RPG::GameCore { class LittleGameCustomVisibilityConfig; }

#define IIAFMCJPKDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB76C10)
#define IIAFMCJPKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB76C70)

inline static constexpr unsigned int IIAFMCJPKDE_TypeDefinitionIndex = 43299;

	class IIAFMCJPKDE : public ::System::Object
	{
	public:
		::FDOEFAEOPNC PBOCJBPJJOE; // 0x10
		::RPG::GameCore::LittleGameCustomVisibilityConfig* EABKOHGCHFP; // 0x20
		::LGAJIAAJIJI* NNANJMDMAOC; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFMCJPKDE_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIAFMCJPKDE_CLEAR_OFFSET))(this);
		}

	};
