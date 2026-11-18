#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class NCJABLONOJL;

#define FDCFBFCLEPD_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0x169C8080)
#define FDCFBFCLEPD_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x169C7EB0)
#define FDCFBFCLEPD_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x169C8090)
#define FDCFBFCLEPD_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0x169C8160)
#define FDCFBFCLEPD_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x169C8170)
#define FDCFBFCLEPD_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x169C7F80)
#define FDCFBFCLEPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x169C7F00)
#define FDCFBFCLEPD__CTOR_OFFSET UNITYSDK_OFFSET(0x169C7FC0)

inline static constexpr unsigned int FDCFBFCLEPD_TypeDefinitionIndex = 47405;

class FDCFBFCLEPD : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20B; // 0x0
	::NCJABLONOJL* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDCFBFCLEPD__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFBFCLEPD__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFBFCLEPD_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFBFCLEPD_ONCLEAN_OFFSET))(this);
	}

	::NCJABLONOJL* BLIOCCCNKDK()
	{
		return ((::NCJABLONOJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFBFCLEPD_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::FDCFBFCLEPD* JFDOOELFAOA()
	{
		return ((::FDCFBFCLEPD*(*)())((::PBYTE)hIl2Cpp + FDCFBFCLEPD_JFDOOELFAOA_OFFSET))();
	}

	::System::Void JFNBOIBNHPA(::NCJABLONOJL* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NCJABLONOJL*))((::PBYTE)hIl2Cpp + FDCFBFCLEPD_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCFBFCLEPD_MEFBHFEOKGH_OFFSET))(this);
	}
};
