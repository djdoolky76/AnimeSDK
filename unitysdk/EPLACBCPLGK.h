#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameEntityConfig; }

#define EPLACBCPLGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E28F0)

inline static constexpr unsigned int EPLACBCPLGK_TypeDefinitionIndex = 36833;

	class EPLACBCPLGK : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameEntityConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLACBCPLGK_CTOR_OFFSET))(this);
		}

	};
