#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class MNKBBMJPIGA;

#define GCFIHKDLPKJ_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x15702AB0)
#define GCFIHKDLPKJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x15702820)
#define GCFIHKDLPKJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x15702AC0)
#define GCFIHKDLPKJ_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x15702A10)
#define GCFIHKDLPKJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x15702A20)
#define GCFIHKDLPKJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x157028F0)
#define GCFIHKDLPKJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x15702870)
#define GCFIHKDLPKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15702950)

inline static constexpr unsigned int GCFIHKDLPKJ_TypeDefinitionIndex = 70096;

class GCFIHKDLPKJ : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x209; // 0x0
	::MNKBBMJPIGA* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCFIHKDLPKJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_ONCLEAN_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::MNKBBMJPIGA* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MNKBBMJPIGA*))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_MEFBHFEOKGH_OFFSET))(this);
	}

	::MNKBBMJPIGA* BLIOCCCNKDK()
	{
		return ((::MNKBBMJPIGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::GCFIHKDLPKJ* JFDOOELFAOA()
	{
		return ((::GCFIHKDLPKJ*(*)())((::PBYTE)hIl2Cpp + GCFIHKDLPKJ_JFDOOELFAOA_OFFSET))();
	}
};
