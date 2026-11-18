#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDEHNBMOHMG.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;
namespace MoleMole { class UIFriendDetailContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define GPPMPHICDEA_KCHALBOLACN_CFIGKMLMNBM_OFFSET UNITYSDK_OFFSET(0x15D921D0)
#define GPPMPHICDEA_KCHALBOLACN_FKNNIKILBOE_OFFSET UNITYSDK_OFFSET(0x15D923E0)
#define GPPMPHICDEA_KCHALBOLACN__CTOR_OFFSET UNITYSDK_OFFSET(0x15D921C0)

inline static constexpr unsigned int GPPMPHICDEA_KCHALBOLACN_TypeDefinitionIndex = 42633;

class GPPMPHICDEA_KCHALBOLACN : public ::System::Object
{
public:
	::MoleMole::UIFriendDetailContext* AAOCANGHBDG; // 0x10
	::System::Collections::Generic::List_1<::BDEHNBMOHMG>* HMDJFIGCALM; // 0x18
	::UnityEngine::Events::UnityAction* HFBCCJCAJIM; // 0x20
	::System::Int32 FCMFPIHALEO; // 0x28
	::System::Boolean ENEILOANKLG; // 0x2C
	::System::Byte _padding0[0x3];
	::EFIFKJHLKCF GNBMLHONKOK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KCHALBOLACN__CTOR_OFFSET))(this);
	}

	::System::Void CFIGKMLMNBM(::JGBMOOJHMBF* DDEALMIKFMF)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KCHALBOLACN_CFIGKMLMNBM_OFFSET))(this, DDEALMIKFMF);
	}

	::System::Void FKNNIKILBOE(::JGBMOOJHMBF* DDEALMIKFMF)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KCHALBOLACN_FKNNIKILBOE_OFFSET))(this, DDEALMIKFMF);
	}
};
