#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GHODJENKHNE.h"
#include "unitysdk/MNHBKGOGEIA.h"
class KNAKIBHJLFN;
namespace RPG::Client { class UIController; }

#define GGDNEBLCPPH_CTOR_OFFSET UNITYSDK_OFFSET(0x159F7850)
#define GGDNEBLCPPH_HDMBIMBAKFB_OFFSET UNITYSDK_OFFSET(0x159F7770)

inline static constexpr unsigned int GGDNEBLCPPH_TypeDefinitionIndex = 66080;

	class GGDNEBLCPPH : public ::GHODJENKHNE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGDNEBLCPPH_CTOR_OFFSET))(this);
		}

		::System::Void HDMBIMBAKFB(::MNHBKGOGEIA a1, ::KNAKIBHJLFN* a2, ::RPG::Client::UIController* a3, ::RPG::Client::UIController* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MNHBKGOGEIA, ::KNAKIBHJLFN*, ::RPG::Client::UIController*, ::RPG::Client::UIController*))((::PBYTE)hIl2Cpp + GGDNEBLCPPH_HDMBIMBAKFB_OFFSET))(this, a1, a2, a3, a4);
		}

	};
