#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDOEFAEOPNC.h"
#include "unitysdk/System/Object.h"
class LGAJIAAJIJI;
namespace RPG::GameCore { class LittleGameCustomVisibilityConfig; }

#define IIAFMCJPKDE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EC35730)
#define IIAFMCJPKDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC35790)

inline static constexpr unsigned int IIAFMCJPKDE_TypeDefinitionIndex = 44280;

	class IIAFMCJPKDE : public ::System::Object
	{
	public:
		::LGAJIAAJIJI* NNANJMDMAOC; // 0x10
		::RPG::GameCore::LittleGameCustomVisibilityConfig* EABKOHGCHFP; // 0x18
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
