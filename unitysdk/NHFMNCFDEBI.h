#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

class AJDFHEJCJHG;

#define NHFMNCFDEBI_BLIOCCCNKDK_OFFSET UNITYSDK_OFFSET(0xE199220)
#define NHFMNCFDEBI_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE198EE0)
#define NHFMNCFDEBI_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE1990B0)
#define NHFMNCFDEBI_JFNBOIBNHPA_OFFSET UNITYSDK_OFFSET(0xE199180)
#define NHFMNCFDEBI_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE199190)
#define NHFMNCFDEBI_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE198FB0)
#define NHFMNCFDEBI__CCTOR_OFFSET UNITYSDK_OFFSET(0xE198F30)
#define NHFMNCFDEBI__CTOR_OFFSET UNITYSDK_OFFSET(0xE198FF0)

inline static constexpr unsigned int NHFMNCFDEBI_TypeDefinitionIndex = 71193;

class NHFMNCFDEBI : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x208; // 0x0
	::AJDFHEJCJHG* _FJAAAAACINE_k__BackingField; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHFMNCFDEBI__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFMNCFDEBI__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFMNCFDEBI_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFMNCFDEBI_ONCLEAN_OFFSET))(this);
	}

	static ::NHFMNCFDEBI* JFDOOELFAOA()
	{
		return ((::NHFMNCFDEBI*(*)())((::PBYTE)hIl2Cpp + NHFMNCFDEBI_JFDOOELFAOA_OFFSET))();
	}

	::System::Void JFNBOIBNHPA(::AJDFHEJCJHG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AJDFHEJCJHG*))((::PBYTE)hIl2Cpp + NHFMNCFDEBI_JFNBOIBNHPA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFMNCFDEBI_MEFBHFEOKGH_OFFSET))(this);
	}

	::AJDFHEJCJHG* BLIOCCCNKDK()
	{
		return ((::AJDFHEJCJHG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFMNCFDEBI_BLIOCCCNKDK_OFFSET))(this);
	}
};
