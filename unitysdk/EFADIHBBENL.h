#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IPGHPLEKLGJ;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EFADIHBBENL_JCFJOKPIFPL_OFFSET UNITYSDK_OFFSET(0x1353E9C0)
#define EFADIHBBENL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1353E920)
#define EFADIHBBENL__CTOR_OFFSET UNITYSDK_OFFSET(0x1353E840)

inline static constexpr unsigned int EFADIHBBENL_TypeDefinitionIndex = 90278;

class EFADIHBBENL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IPGHPLEKLGJ*>* HKMALCMHJCM; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GIIHGNJNLKC; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* DCBBOJCFFHF; // 0x20
	::System::Boolean BIEGFCOBOMI; // 0x28
	::System::Boolean APHLPCJPOOI; // 0x29
	::System::Byte _padding0[0x2];
	::System::Single KPDADOEKDKE; // 0x2C
	::System::Int32 COMPJNIPMOG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFADIHBBENL__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFADIHBBENL_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void JCFJOKPIFPL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFADIHBBENL_JCFJOKPIFPL_OFFSET))(this);
	}
};
