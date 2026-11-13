#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHJPMDPJPEC.h"
class JMOHKKCNCMA;
namespace RPG::GameCore { class MarbleByDefenderFeature; }

#define DMLKDGEHEKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB32B40)
#define DMLKDGEHEKO_KHNFOOKHOJF_OFFSET UNITYSDK_OFFSET(0x1DB32B60)

inline static constexpr unsigned int DMLKDGEHEKO_TypeDefinitionIndex = 44124;

	class DMLKDGEHEKO : public ::LHJPMDPJPEC
	{
	public:
		::RPG::GameCore::MarbleByDefenderFeature* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::MarbleByDefenderFeature* a1, ::JMOHKKCNCMA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleByDefenderFeature*, ::JMOHKKCNCMA*))((::PBYTE)hIl2Cpp + DMLKDGEHEKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KHNFOOKHOJF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMLKDGEHEKO_KHNFOOKHOJF_OFFSET))(this);
		}

	};
