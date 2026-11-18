#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class BoneAdjust;

#define EFHCCAKCCNI_AFPLBHHHILC_OFFSET UNITYSDK_OFFSET(0xF9C2420)
#define EFHCCAKCCNI_DEEBAANEMDL_OFFSET UNITYSDK_OFFSET(0xF9C2190)
#define EFHCCAKCCNI_ELGGHHFOOHB_OFFSET UNITYSDK_OFFSET(0xF9C2830)
#define EFHCCAKCCNI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xF9C26C0)
#define EFHCCAKCCNI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xF9C2DB0)
#define EFHCCAKCCNI_MEDIFGCIPGJ_OFFSET UNITYSDK_OFFSET(0xF9C2AE0)
#define EFHCCAKCCNI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xF9C27A0)
#define EFHCCAKCCNI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xF9C2130)
#define EFHCCAKCCNI__CCTOR_OFFSET UNITYSDK_OFFSET(0xF9C2710)
#define EFHCCAKCCNI__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C2790)

inline static constexpr unsigned int EFHCCAKCCNI_TypeDefinitionIndex = 38653;

class EFHCCAKCCNI : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0xA1; // 0x0
	::BoneAdjust* CPJECPKCMCD; // 0x48
	::Il2CppArray<::BoneAdjust*>* PFNIMDGAGLJ; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFHCCAKCCNI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHCCAKCCNI__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void AFPLBHHHILC(::System::Boolean FBILHHBPEHD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_AFPLBHHHILC_OFFSET))(this, FBILHHBPEHD);
	}

	::System::Void ELGGHHFOOHB(::System::Boolean DECIDLELLCP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_ELGGHHFOOHB_OFFSET))(this, DECIDLELLCP);
	}

	::System::Void MEDIFGCIPGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_MEDIFGCIPGJ_OFFSET))(this);
	}

	::System::Void DEEBAANEMDL(::System::Boolean ECCIENFOBJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EFHCCAKCCNI_DEEBAANEMDL_OFFSET))(this, ECCIENFOBJK);
	}

	static ::EFHCCAKCCNI* JFDOOELFAOA()
	{
		return ((::EFHCCAKCCNI*(*)())((::PBYTE)hIl2Cpp + EFHCCAKCCNI_JFDOOELFAOA_OFFSET))();
	}
};
