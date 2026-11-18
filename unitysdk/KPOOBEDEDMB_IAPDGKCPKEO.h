#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPOOBEDEDMB;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPOOBEDEDMB_IAPDGKCPKEO_ACNNINBMODO_OFFSET UNITYSDK_OFFSET(0x1864F960)
#define KPOOBEDEDMB_IAPDGKCPKEO_BDFPMIMMOIM_OFFSET UNITYSDK_OFFSET(0x1864F8B0)
#define KPOOBEDEDMB_IAPDGKCPKEO_CIEIGKLIHKO_OFFSET UNITYSDK_OFFSET(0x1864F910)
#define KPOOBEDEDMB_IAPDGKCPKEO_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1864F810)
#define KPOOBEDEDMB_IAPDGKCPKEO__CTOR_OFFSET UNITYSDK_OFFSET(0x1864F7A0)

inline static constexpr unsigned int KPOOBEDEDMB_IAPDGKCPKEO_TypeDefinitionIndex = 66378;

class KPOOBEDEDMB_IAPDGKCPKEO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::UInt32>* MELOLONBICP; // 0x10
	::KPOOBEDEDMB* MJJODGEJHGN; // 0x18
	::System::UInt32 OHMAFDDJJIB; // 0x20
	::System::UInt32 NIMOLNIJJFN; // 0x24
	::System::UInt32 NBOGCBLLCIF; // 0x28
	::System::UInt32 EEECNNMCHOI; // 0x2C

	::System::Void _ctor(::KPOOBEDEDMB* ELFGOGPHBJH)
	{
		return ((::System::Void(*)(::PVOID, ::KPOOBEDEDMB*))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IAPDGKCPKEO__CTOR_OFFSET))(this, ELFGOGPHBJH);
	}

	::System::Void OKLLFEIJKHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IAPDGKCPKEO_OKLLFEIJKHN_OFFSET))(this);
	}

	::System::Void BDFPMIMMOIM(::System::UInt32 MEHIKNLAGJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IAPDGKCPKEO_BDFPMIMMOIM_OFFSET))(this, MEHIKNLAGJF);
	}

	::System::Void CIEIGKLIHKO(::System::Boolean HPBFHALLHME)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IAPDGKCPKEO_CIEIGKLIHKO_OFFSET))(this, HPBFHALLHME);
	}

	::System::Void ACNNINBMODO(::System::UInt32 KBDJAMBKEMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPOOBEDEDMB_IAPDGKCPKEO_ACNNINBMODO_OFFSET))(this, KBDJAMBKEMK);
	}
};
