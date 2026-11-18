#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LIIKMAHEEEJ_JNCEIFEPNGO_OFFSET UNITYSDK_OFFSET(0x1518C980)
#define LIIKMAHEEEJ_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1518CBE0)
#define LIIKMAHEEEJ_OAIDALAOKAI_OFFSET UNITYSDK_OFFSET(0x1518CA10)
#define LIIKMAHEEEJ_PEGOPCACELO_OFFSET UNITYSDK_OFFSET(0x1518CCE0)
#define LIIKMAHEEEJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1518CAD0)
#define LIIKMAHEEEJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1518C810)

inline static constexpr unsigned int LIIKMAHEEEJ_TypeDefinitionIndex = 71510;

class LIIKMAHEEEJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* FKNLFJIHKNJ; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* NFODHOCPEGG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ__CTOR_OFFSET))(this);
	}

	::System::UInt32 JNCEIFEPNGO(::System::UInt32 HBPFIEJJBGA)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ_JNCEIFEPNGO_OFFSET))(this, HBPFIEJJBGA);
	}

	::System::Void OAIDALAOKAI(::System::UInt32 HBPFIEJJBGA)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ_OAIDALAOKAI_OFFSET))(this, HBPFIEJJBGA);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::System::UInt32 HBPFIEJJBGA, ::System::UInt32 MOODEOPMFLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ_KDGMEFEJMGJ_OFFSET))(this, HBPFIEJJBGA, MOODEOPMFLB);
	}

	::System::UInt32 PEGOPCACELO(::System::UInt32 MOODEOPMFLB)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LIIKMAHEEEJ_PEGOPCACELO_OFFSET))(this, MOODEOPMFLB);
	}
};
