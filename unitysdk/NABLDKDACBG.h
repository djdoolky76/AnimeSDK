#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }

#define NABLDKDACBG_DBFBCEFJHNA_OFFSET UNITYSDK_OFFSET(0x18C47410)
#define NABLDKDACBG_FIOIBOCIHJE_OFFSET UNITYSDK_OFFSET(0x18C47420)
#define NABLDKDACBG_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x18C47280)
#define NABLDKDACBG__CTOR_OFFSET UNITYSDK_OFFSET(0x18C47270)

inline static constexpr unsigned int NABLDKDACBG_TypeDefinitionIndex = 51131;

class NABLDKDACBG : public ::System::Object
{
public:
	::System::Func_1<::MoleMole::EntityHandle>* _LOMMACNIMIB_k__BackingField; // 0x10

	::System::Void _ctor(::System::Func_1<::MoleMole::EntityHandle>* DNNJPPJHDKK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + NABLDKDACBG__CTOR_OFFSET))(this, DNNJPPJHDKK);
	}

	::System::Boolean GPKMPDHNCGL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NABLDKDACBG_GPKMPDHNCGL_OFFSET))(this);
	}

	::System::Func_1<::MoleMole::EntityHandle>* DBFBCEFJHNA()
	{
		return ((::System::Func_1<::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NABLDKDACBG_DBFBCEFJHNA_OFFSET))(this);
	}

	::System::Void FIOIBOCIHJE(::System::Func_1<::MoleMole::EntityHandle>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + NABLDKDACBG_FIOIBOCIHJE_OFFSET))(this, EGEGIMGMJHN);
	}
};
