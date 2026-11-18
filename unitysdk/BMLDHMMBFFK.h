#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }

#define BMLDHMMBFFK_AOGDJIAKEKK_OFFSET UNITYSDK_OFFSET(0x14C50CF0)
#define BMLDHMMBFFK_BIJJADMGJOK_OFFSET UNITYSDK_OFFSET(0x14C50D80)
#define BMLDHMMBFFK_HEEPBDFCKNC_OFFSET UNITYSDK_OFFSET(0x14C50A40)
#define BMLDHMMBFFK_IJCALJEALHO_OFFSET UNITYSDK_OFFSET(0x14C50C40)
#define BMLDHMMBFFK_IPFMLLFIOHE_OFFSET UNITYSDK_OFFSET(0x14C508F0)
#define BMLDHMMBFFK_JEPJNIMGLMH_OFFSET UNITYSDK_OFFSET(0x14C50AF0)
#define BMLDHMMBFFK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C508E0)

inline static constexpr unsigned int BMLDHMMBFFK_TypeDefinitionIndex = 76601;

class BMLDHMMBFFK : public ::System::Object
{
public:
	// static const ::System::Int32 OFKLMFAKGCJ = 0x5; // 0x0
	::System::Action_2<::System::Boolean, ::System::Int32>* NNLNEFMGJOA; // 0x10
	::System::Int32 BOBNPODICGI; // 0x18
	::Foundation::Coroutine::CoroutineHandle LEDGDNEKOFK; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDHMMBFFK__CTOR_OFFSET))(this);
	}

	::System::Void IPFMLLFIOHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_IPFMLLFIOHE_OFFSET))(this);
	}

	::System::Void HEEPBDFCKNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_HEEPBDFCKNC_OFFSET))(this);
	}

	::System::Void JEPJNIMGLMH(::System::Action_2<::System::Boolean, ::System::Int32>* OEAOGFCJHMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_JEPJNIMGLMH_OFFSET))(this, OEAOGFCJHMA);
	}

	::System::Void IJCALJEALHO(::System::Action_2<::System::Boolean, ::System::Int32>* OEAOGFCJHMA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::Boolean, ::System::Int32>*))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_IJCALJEALHO_OFFSET))(this, OEAOGFCJHMA);
	}

	::System::Void AOGDJIAKEKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_AOGDJIAKEKK_OFFSET))(this);
	}

	::System::Void BIJJADMGJOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLDHMMBFFK_BIJJADMGJOK_OFFSET))(this);
	}
};
