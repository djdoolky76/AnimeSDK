#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"
#include "unitysdk/MoleMole/Config/ValueCompareType.h"

class GECKFNANGKB;
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CHEBOFCBIDD_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x14F28E40)
#define CHEBOFCBIDD_ALIIJEEGAIN_OFFSET UNITYSDK_OFFSET(0x14F29380)
#define CHEBOFCBIDD_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x14F292F0)
#define CHEBOFCBIDD_GPOHLEFFNHE_OFFSET UNITYSDK_OFFSET(0x14F29260)
#define CHEBOFCBIDD_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x14F290A0)
#define CHEBOFCBIDD__CTOR_OFFSET UNITYSDK_OFFSET(0x14F28D00)

inline static constexpr unsigned int CHEBOFCBIDD_TypeDefinitionIndex = 51377;

class CHEBOFCBIDD : public ::KBGGKIJMICI
{
public:
	::GECKFNANGKB* LFJGGMHMFGA; // 0x38
	::MoleMole::Config::ValueCompareType LLDMOGGEDOD; // 0x40

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CHEBOFCBIDD__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEBOFCBIDD_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEBOFCBIDD_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void GPOHLEFFNHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEBOFCBIDD_GPOHLEFFNHE_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEBOFCBIDD_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void ALIIJEEGAIN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CHEBOFCBIDD_ALIIJEEGAIN_OFFSET))(this, KOIBHLHLMFC);
	}
};
