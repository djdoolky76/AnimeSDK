#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KICHJEFBCIH;
namespace RPG::GameCore { class FiveDimDashOrbConfig; }

#define MLFECPOBGHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92C9A0)
#define MLFECPOBGHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92CA00)

inline static constexpr unsigned int MLFECPOBGHM_TypeDefinitionIndex = 43510;

	class MLFECPOBGHM : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimDashOrbConfig* EABKOHGCHFP; // 0x10
		::KICHJEFBCIH* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFECPOBGHM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFECPOBGHM_CLEAR_OFFSET))(this);
		}

	};
