#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define MHKKDBFIBCF_CTOR_OFFSET UNITYSDK_OFFSET(0xC1F9C90)
#define MHKKDBFIBCF_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0xC1F9750)
#define MHKKDBFIBCF_JCFLHOGOBAP_OFFSET UNITYSDK_OFFSET(0xC1F9AC0)

inline static constexpr unsigned int MHKKDBFIBCF_TypeDefinitionIndex = 68118;

	class MHKKDBFIBCF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHKKDBFIBCF_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + MHKKDBFIBCF_HDILBJHMBMF_OFFSET))(this, a1);
		}

		::System::Boolean JCFLHOGOBAP(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + MHKKDBFIBCF_JCFLHOGOBAP_OFFSET))(this, a1);
		}

	};
