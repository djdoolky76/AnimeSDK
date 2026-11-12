#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define PCMHEPFFIMO_AOLBPOLCJGJ_OFFSET UNITYSDK_OFFSET(0xC90DE90)
#define PCMHEPFFIMO_CTOR_OFFSET UNITYSDK_OFFSET(0xC90DF50)
#define PCMHEPFFIMO_PJLGNEPKOGE_OFFSET UNITYSDK_OFFSET(0xC90DF00)

inline static constexpr unsigned int PCMHEPFFIMO_TypeDefinitionIndex = 55442;

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
