#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHOGONCDLM.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define MNJFHFEFFGF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAEF1F0)
#define MNJFHFEFFGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF240)

inline static constexpr unsigned int MNJFHFEFFGF_TypeDefinitionIndex = 44497;

	class MNJFHFEFFGF : public ::System::Object
	{
	public:
		::MGHOGONCDLM BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimCrystalConfig* EABKOHGCHFP; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJFHFEFFGF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJFHFEFFGF_CLEAR_OFFSET))(this);
		}

	};
