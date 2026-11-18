#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIJGGGANLLD.h"
#include "unitysdk/System/Object.h"

#define BLKJNCIDIND_DLKOAAGJGBJ_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1857C220)
#define BLKJNCIDIND_DLKOAAGJGBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1857C210)

inline static constexpr unsigned int BLKJNCIDIND_DLKOAAGJGBJ_TypeDefinitionIndex = 40753;

class BLKJNCIDIND_DLKOAAGJGBJ : public ::System::Object
{
public:
	::AIJGGGANLLD BCILAIPOMFI; // 0x10
	::System::Int32 OMHKJDKFLDF; // 0x30
	::System::Boolean MCJCCJOEKGN; // 0x34
	::System::Byte _padding0[0x3];
	::System::Int32 ECEMPEHGMDH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJNCIDIND_DLKOAAGJGBJ__CTOR_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLKJNCIDIND_DLKOAAGJGBJ_CHCGMACMJLD_OFFSET))(this);
	}
};
