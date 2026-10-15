#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GlobalMainIntensityEffectAutoRevert; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections { class IEnumerator; }

#define EEHOPOMHBKE_CTOR_OFFSET UNITYSDK_OFFSET(0x13A2D6F0)
#define EEHOPOMHBKE_NCMDKPIKDOH_OFFSET UNITYSDK_OFFSET(0x13A2DE20)
#define EEHOPOMHBKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x13A2D720)

	class EEHOPOMHBKE
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::GlobalMainIntensityEffectAutoRevert*))((::PBYTE)hIl2Cpp + EEHOPOMHBKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* NCMDKPIKDOH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEHOPOMHBKE_NCMDKPIKDOH_OFFSET))(this);
		}

	};
