#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class AlleyPackGoodItemConfig; }

#define JLBNMIJCNNI_CTOR_OFFSET UNITYSDK_OFFSET(0xB233FF0)

inline static constexpr unsigned int JLBNMIJCNNI_TypeDefinitionIndex = 74106;

	class JLBNMIJCNNI : public ::System::Object
	{
	public:
		::RPG::GameCore::AlleyPackGoodItemConfig* EABKOHGCHFP; // 0x10
		::System::UInt32 BDCHMHLNAMH; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JLBNMIJCNNI_CTOR_OFFSET))(this, a1);
		}

	};
