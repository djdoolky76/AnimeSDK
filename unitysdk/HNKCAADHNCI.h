#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System { class String; }

#define HNKCAADHNCI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x10124720)
#define HNKCAADHNCI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x10124890)
#define HNKCAADHNCI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x10124800)
#define HNKCAADHNCI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x101246C0)
#define HNKCAADHNCI__CCTOR_OFFSET UNITYSDK_OFFSET(0x10124770)
#define HNKCAADHNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x101247F0)

inline static constexpr unsigned int HNKCAADHNCI_TypeDefinitionIndex = 74958;

class HNKCAADHNCI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xC2; // 0x0
	::System::String* AEAFLLDMMPH; // 0x48
	::System::Single CIIPCCLOHLH; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNKCAADHNCI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCAADHNCI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCAADHNCI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCAADHNCI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKCAADHNCI_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::HNKCAADHNCI* JFDOOELFAOA()
	{
		return ((::HNKCAADHNCI*(*)())((::PBYTE)hIl2Cpp + HNKCAADHNCI_JFDOOELFAOA_OFFSET))();
	}
};
