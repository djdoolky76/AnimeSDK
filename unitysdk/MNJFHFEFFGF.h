#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGHOGONCDLM.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FiveDimCrystalConfig; }

#define MNJFHFEFFGF_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C92DCF0)
#define MNJFHFEFFGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DD40)

	class MNJFHFEFFGF : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimCrystalConfig* EABKOHGCHFP; // 0x10
		::MGHOGONCDLM BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJFHFEFFGF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJFHFEFFGF_CLEAR_OFFSET))(this);
		}

	};
