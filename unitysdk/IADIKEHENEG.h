#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CPOKNCNNLAL_LKNAOLJKIMO.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define IADIKEHENEG_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x772040)

inline static constexpr unsigned int IADIKEHENEG_TypeDefinitionIndex = 59182;

struct alignas(4) IADIKEHENEG
{
	::System::Single NLKIDCPALMD; // 0x10
	::System::Boolean ADKMIFGKKIP; // 0x14
	::System::Boolean MKKBCEHEJEP; // 0x15
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector2 NFFKFGFHCPF; // 0x18
	::System::Boolean MNLNMIMGOEH; // 0x20
	::System::Boolean DHPHFOHJMLI; // 0x21
	::System::Boolean BNDEKOJFBAP; // 0x22
	::System::Boolean NBLACOGFGJB; // 0x23
	::System::Single EBEHHPKBCBJ; // 0x24
	::System::Single AMOANCFJALL; // 0x28
	::System::Single GHGMCIBEECI; // 0x2C
	::System::Boolean NMICLOJKMKG; // 0x30
	::System::Boolean KGGHAPGLHFO; // 0x31
	::System::Boolean DGNCEIANPML; // 0x32
	::System::Boolean JGOACBPFPJK; // 0x33
	::System::Single EKHAHJNPGKN; // 0x34
	::CPOKNCNNLAL_LKNAOLJKIMO HCKHAIJOALL; // 0x38
	::System::Boolean MKHGEDNAGDE; // 0x3C
	::System::Boolean KBGHFIPDIBH; // 0x3D
	::System::Byte _padding1[0x2];
	::System::Int32 IGBGODKLMPB; // 0x40
	::System::Boolean AIGFCNIKHNM; // 0x44

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADIKEHENEG_NPOLNFDBOOD_OFFSET))(this);
	}
};
