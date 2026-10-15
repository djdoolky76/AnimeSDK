#pragma once
#include "unitysdk/unitysdk.h"

#define EKOGGFMOBNK_CTOR_OFFSET UNITYSDK_OFFSET(0x2E734A0)
#define EKOGGFMOBNK_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0x2E73550)
#define EKOGGFMOBNK_FOIKFOHHADP_OFFSET UNITYSDK_OFFSET(0x2E73450)
#define EKOGGFMOBNK_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E734E0)

inline static constexpr unsigned int EKOGGFMOBNK_TypeDefinitionIndex = 74041;

	struct alignas(4) EKOGGFMOBNK
	{
		::System::Int32 HCDEOKNIGKG; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double NKAACMGNNPK; // 0x18
		::System::Double EFNAJMADAHM; // 0x20
		::System::Double HCELABHKPJD; // 0x28
		::System::Int32 GLEBPCFAPMP; // 0x30
		::System::Int32 COCBDJEDAJM; // 0x34
		::System::Int32 GOKAENLDALA; // 0x38
		::System::Int32 EFAFKFONJHP; // 0x3C
		::System::Int32 CLPNGEGJBBE; // 0x40
		::System::Int32 CJLLPFOCFFB; // 0x44
		::System::Int32 NGNKBNOADPG; // 0x48
		::System::Int32 JCJDJNEDOFB; // 0x4C
		::System::Int32 PHBJAEBBCCL; // 0x50
		::System::Int32 DBBHPLODDKK; // 0x54
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EKOGGFMOBNK_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Double FOIKFOHHADP()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOGGFMOBNK_FOIKFOHHADP_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKOGGFMOBNK_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void EIMIIHEDKFM(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + EKOGGFMOBNK_EIMIIHEDKFM_OFFSET))(this, a1);
		}

	};
