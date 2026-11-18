#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIZipLineHintChildWindowController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define BOCHOPIENMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x14C537A0)
#define BOCHOPIENMA_FEBMOGHGOJH_OFFSET UNITYSDK_OFFSET(0x14C54220)
#define BOCHOPIENMA_GIMECMPCOLI_OFFSET UNITYSDK_OFFSET(0x14C543D0)
#define BOCHOPIENMA_GNNEIKLPNKJ_OFFSET UNITYSDK_OFFSET(0x14C540D0)
#define BOCHOPIENMA_JHMEMBDCEED_OFFSET UNITYSDK_OFFSET(0x14C53F50)
#define BOCHOPIENMA_MLEPPHBMPJJ_OFFSET UNITYSDK_OFFSET(0x14C53EA0)
#define BOCHOPIENMA__CTOR_OFFSET UNITYSDK_OFFSET(0x14C53DC0)

inline static constexpr unsigned int BOCHOPIENMA_TypeDefinitionIndex = 85575;

class BOCHOPIENMA : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MoleMole::UIZipLineHintChildWindowController*>* EFLPOEMHGLO; // 0x10
	::System::Collections::Generic::Queue_1<::MoleMole::UIZipLineHintChildWindowController*>* KOIGEMMFCCD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MLEPPHBMPJJ(::System::UInt32 PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOCHOPIENMA_MLEPPHBMPJJ_OFFSET))(this, PHHDHIBOCKA);
	}

	::System::Void JHMEMBDCEED(::System::UInt32 DAFMBHHBOKF, ::MoleMole::UIZipLineHintChildWindowController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIZipLineHintChildWindowController*))((::PBYTE)hIl2Cpp + BOCHOPIENMA_JHMEMBDCEED_OFFSET))(this, DAFMBHHBOKF, NCIMBHDKIJM);
	}

	::System::Void GNNEIKLPNKJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA_GNNEIKLPNKJ_OFFSET))(this);
	}

	::System::Void FEBMOGHGOJH(::System::UInt32 DAFMBHHBOKF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOCHOPIENMA_FEBMOGHGOJH_OFFSET))(this, DAFMBHHBOKF);
	}

	::MoleMole::UIZipLineHintChildWindowController* GIMECMPCOLI()
	{
		return ((::MoleMole::UIZipLineHintChildWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOCHOPIENMA_GIMECMPCOLI_OFFSET))(this);
	}
};
