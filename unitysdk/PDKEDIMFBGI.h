#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MainMissionData; }

#define PDKEDIMFBGI_CTOR_OFFSET UNITYSDK_OFFSET(0xC0170F0)
#define PDKEDIMFBGI_HDILBJHMBMF_OFFSET UNITYSDK_OFFSET(0xC016BE0)
#define PDKEDIMFBGI_LCKGCJLDOHL_OFFSET UNITYSDK_OFFSET(0xC016CC0)
#define PDKEDIMFBGI_NKMINGBFCKM_OFFSET UNITYSDK_OFFSET(0xC016F90)

inline static constexpr unsigned int PDKEDIMFBGI_TypeDefinitionIndex = 66184;

	class PDKEDIMFBGI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKEDIMFBGI_CTOR_OFFSET))(this);
		}

		::System::Boolean HDILBJHMBMF(::RPG::Client::MainMissionData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + PDKEDIMFBGI_HDILBJHMBMF_OFFSET))(this, a1);
		}

		::System::Boolean LCKGCJLDOHL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKEDIMFBGI_LCKGCJLDOHL_OFFSET))(this, a1);
		}

		::System::Boolean NKMINGBFCKM(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKEDIMFBGI_NKMINGBFCKM_OFFSET))(this, a1);
		}

	};
