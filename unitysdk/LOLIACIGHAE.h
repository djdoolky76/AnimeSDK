#pragma once
#include "unitysdk/unitysdk.h"
class APFIHNDDPIO;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }

#define LOLIACIGHAE_CTOR_OFFSET UNITYSDK_OFFSET(0xC06CF90)
#define LOLIACIGHAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC06D0B0)
#define LOLIACIGHAE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC06D210)

inline static constexpr unsigned int LOLIACIGHAE_TypeDefinitionIndex = 56212;

	class LOLIACIGHAE
	{
	public:
		::KFELGAIGHAP* IOJBMHGLOFP; // 0x28
		::KFELGAIGHAP* HGJLJCFHOIH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::APFIHNDDPIO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::APFIHNDDPIO*))((::PBYTE)hIl2Cpp + LOLIACIGHAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLIACIGHAE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOLIACIGHAE_ONTASKBEGIN_OFFSET))(this);
		}

	};
