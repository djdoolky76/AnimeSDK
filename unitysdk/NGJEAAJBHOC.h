#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class OEAJACLOCAP;

#define NGJEAAJBHOC_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0xE197CE0)
#define NGJEAAJBHOC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE197A50)
#define NGJEAAJBHOC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE197CF0)
#define NGJEAAJBHOC_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0xE197CD0)
#define NGJEAAJBHOC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE197C40)
#define NGJEAAJBHOC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE197B20)
#define NGJEAAJBHOC__CCTOR_OFFSET UNITYSDK_OFFSET(0xE197AA0)
#define NGJEAAJBHOC__CTOR_OFFSET UNITYSDK_OFFSET(0xE197B80)

inline static constexpr unsigned int NGJEAAJBHOC_TypeDefinitionIndex = 50851;

class NGJEAAJBHOC : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x20E; // 0x0
	::OEAJACLOCAP* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGJEAAJBHOC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJEAAJBHOC__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJEAAJBHOC_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJEAAJBHOC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJEAAJBHOC_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void JFNBOIBNHPA(::OEAJACLOCAP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OEAJACLOCAP*))((::PBYTE)hIl2Cpp + NGJEAAJBHOC_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::OEAJACLOCAP* BLIOCCCNKDK()
	{
		return ((::OEAJACLOCAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJEAAJBHOC_BLIOCCCNKDK_OFFSET))(this);
	}

	static ::NGJEAAJBHOC* JFDOOELFAOA()
	{
		return ((::NGJEAAJBHOC*(*)())((::PBYTE)hIl2Cpp + NGJEAAJBHOC_JFDOOELFAOA_OFFSET))();
	}
};
