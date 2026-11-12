#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKAAHMNPJPA.h"
class KCJNGDLDKFG;
namespace System { class Action; }

#define AEEJEFKGHKG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7B2170)
#define AEEJEFKGHKG_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0xB7B2180)

inline static constexpr unsigned int AEEJEFKGHKG_TypeDefinitionIndex = 82485;

	class AEEJEFKGHKG : public ::CKAAHMNPJPA
	{
	public:
		::System::Void _ctor(::KCJNGDLDKFG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCJNGDLDKFG*))((::PBYTE)hIl2Cpp + AEEJEFKGHKG_CTOR_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AEEJEFKGHKG_DMKJAJLNEBK_OFFSET))(this, a1);
		}

	};
