#pragma once
#include "unitysdk/unitysdk.h"
class GELIALJDFBL;
class GPPCNHKCMNC;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define NPNMPFCFPKK_CTOR_OFFSET UNITYSDK_OFFSET(0x19D0C120)
#define NPNMPFCFPKK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19D0C5F0)
#define NPNMPFCFPKK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19D0C280)

inline static constexpr unsigned int NPNMPFCFPKK_TypeDefinitionIndex = 56231;

	class NPNMPFCFPKK
	{
	public:
		::KFELGAIGHAP* ECMFFNPIHGD; // 0x28
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GPPCNHKCMNC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GPPCNHKCMNC*))((::PBYTE)hIl2Cpp + NPNMPFCFPKK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNMPFCFPKK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPNMPFCFPKK_DISPOSE_OFFSET))(this);
		}

	};
