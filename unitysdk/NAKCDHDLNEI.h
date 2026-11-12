#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNJFKHMDPDJ;
namespace RPG::GameCore { class FiveDimBorderPlatConfig; }

#define NAKCDHDLNEI_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAF61E0)
#define NAKCDHDLNEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF6240)

inline static constexpr unsigned int NAKCDHDLNEI_TypeDefinitionIndex = 44483;

	class NAKCDHDLNEI : public ::System::Object
	{
	public:
		::FNJFKHMDPDJ* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimBorderPlatConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCDHDLNEI_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKCDHDLNEI_CLEAR_OFFSET))(this);
		}

	};
