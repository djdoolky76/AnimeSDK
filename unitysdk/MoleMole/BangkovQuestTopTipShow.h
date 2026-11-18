#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GeneralTopTipShow.h"

class PBJKEMDGJFN;

#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x163DA880)
#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x163DA860)
#define MOLEMOLE_BANGKOVQUESTTOPTIPSHOW___BASE_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x163DAA40)

namespace MoleMole
{
	inline static constexpr unsigned int BangkovQuestTopTipShow_TypeDefinitionIndex = 40609;

	class BangkovQuestTopTipShow : public ::MoleMole::GeneralTopTipShow
	{
	public:
		::PBJKEMDGJFN* _context; // 0x30

		::System::Void _ctor(::PBJKEMDGJFN* context)
		{
			return ((::System::Void(*)(::PVOID, ::PBJKEMDGJFN*))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW__CTOR_OFFSET))(this, context);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BANGKOVQUESTTOPTIPSHOW___BASE_ONPROCESS_OFFSET))(this);
		}
	};
}
