#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define AELMFEJLHNA_CTOR_OFFSET UNITYSDK_OFFSET(0xCF02CC0)
#define AELMFEJLHNA_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0xCF02AC0)

inline static constexpr unsigned int AELMFEJLHNA_TypeDefinitionIndex = 66183;

	class AELMFEJLHNA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AELMFEJLHNA_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + AELMFEJLHNA_HDILBJHMBMF_OFFSET))(this, a1);
		}

	};
