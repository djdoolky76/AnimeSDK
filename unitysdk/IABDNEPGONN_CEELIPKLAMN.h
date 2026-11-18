#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define IABDNEPGONN_CEELIPKLAMN_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x141ABF00)
#define IABDNEPGONN_CEELIPKLAMN_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x141ABE70)
#define IABDNEPGONN_CEELIPKLAMN_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x141AC000)
#define IABDNEPGONN_CEELIPKLAMN_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x141ABF40)
#define IABDNEPGONN_CEELIPKLAMN_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x141ABEC0)
#define IABDNEPGONN_CEELIPKLAMN_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x141ABF50)
#define IABDNEPGONN_CEELIPKLAMN_PMLILGDNPPC_OFFSET UNITYSDK_OFFSET(0x141AC050)
#define IABDNEPGONN_CEELIPKLAMN__CTOR_OFFSET UNITYSDK_OFFSET(0x141AC040)

inline static constexpr unsigned int IABDNEPGONN_CEELIPKLAMN_TypeDefinitionIndex = 42904;

class IABDNEPGONN_CEELIPKLAMN : public ::System::Object
{
public:
	::System::Int32 OKEPGOMHOMM; // 0x10
	::System::Single LIIIDCCHKEP; // 0x14
	::System::Boolean _OHOMBEILHNF_k__BackingField; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single GPDCBHEPDGL; // 0x1C

	::System::Void _ctor(::System::Single DBOOIOLEPOJ, ::System::Int32 DKOFFFNEFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN__CTOR_OFFSET))(this, DBOOIOLEPOJ, DKOFFFNEFJC);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void PMLILGDNPPC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IABDNEPGONN_CEELIPKLAMN_PMLILGDNPPC_OFFSET))(this, EGEGIMGMJHN);
	}
};
