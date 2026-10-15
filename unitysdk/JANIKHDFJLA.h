#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelCurveInstance; }

#define JANIKHDFJLA_CTOR_OFFSET UNITYSDK_OFFSET(0x1654DF40)

inline static constexpr unsigned int JANIKHDFJLA_TypeDefinitionIndex = 64239;

	class JANIKHDFJLA : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelCurveInstance* NLIFDJHPHLP; // 0x10
		::System::Single BJOCBPFKJDP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JANIKHDFJLA_CTOR_OFFSET))(this);
		}

	};
