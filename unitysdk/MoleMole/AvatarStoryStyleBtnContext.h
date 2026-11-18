#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JIDCGMLKKJP.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class PPDNMFONAEH;

#define MOLEMOLE_AVATARSTORYSTYLEBTNCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x177DFC30)

namespace MoleMole
{
	inline static constexpr unsigned int AvatarStoryStyleBtnContext_TypeDefinitionIndex = 45131;

	class AvatarStoryStyleBtnContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PPDNMFONAEH* data; // 0x28
		::System::Int32 CurrencyID; // 0x30
		::System::Int32 ID; // 0x34
		::JIDCGMLKKJP StyleType; // 0x38

		::System::Void _ctor(::PPDNMFONAEH* data, ::System::Int32 currencyID)
		{
			return ((::System::Void(*)(::PVOID, ::PPDNMFONAEH*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_AVATARSTORYSTYLEBTNCONTEXT__CTOR_OFFSET))(this, data, currencyID);
		}
	};
}
