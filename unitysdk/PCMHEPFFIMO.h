#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define PCMHEPFFIMO_AOLBPOLCJGJ_OFFSET UNITYSDK_OFFSET(0xC000D80)
#define PCMHEPFFIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC000E40)
#define PCMHEPFFIMO_PJLGNEPKOGE_OFFSET UNITYSDK_OFFSET(0xC000DF0)

inline static constexpr unsigned int PCMHEPFFIMO_TypeDefinitionIndex = 54278;

	class PCMHEPFFIMO : public ::System::Object
	{
	public:
		::System::Double CHHDAKCOACO; // 0x10
		::System::UInt32 JIDLKIHJLFL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMHEPFFIMO_CTOR_OFFSET))(this);
		}

		::System::Void AOLBPOLCJGJ(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + PCMHEPFFIMO_AOLBPOLCJGJ_OFFSET))(this, a1);
		}

		::System::Int64 PJLGNEPKOGE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMHEPFFIMO_PJLGNEPKOGE_OFFSET))(this);
		}

	};
