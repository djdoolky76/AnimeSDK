#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNJFKHMDPDJ;
namespace RPG::GameCore { class FiveDimBorderPlatConfig; }

#define NAKCDHDLNEI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C934CF0)
#define NAKCDHDLNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C934D50)

inline static constexpr unsigned int NAKCDHDLNEI_TypeDefinitionIndex = 43501;

	class NAKCDHDLNEI : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimBorderPlatConfig* EABKOHGCHFP; // 0x10
		::FNJFKHMDPDJ* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCDHDLNEI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCDHDLNEI_CLEAR_OFFSET))(this);
		}

	};
