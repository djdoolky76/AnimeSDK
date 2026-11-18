#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define CJDIPGBFMGM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1686B560)
#define CJDIPGBFMGM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1686B6D0)
#define CJDIPGBFMGM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1686B640)
#define CJDIPGBFMGM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1686B520)
#define CJDIPGBFMGM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1686B5B0)
#define CJDIPGBFMGM__CTOR_OFFSET UNITYSDK_OFFSET(0x1686B630)

inline static constexpr unsigned int CJDIPGBFMGM_TypeDefinitionIndex = 82442;

class CJDIPGBFMGM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x91; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJDIPGBFMGM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIPGBFMGM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIPGBFMGM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIPGBFMGM_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJDIPGBFMGM_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::CJDIPGBFMGM* JFDOOELFAOA()
	{
		return ((::CJDIPGBFMGM*(*)())((::PBYTE)hIl2Cpp + CJDIPGBFMGM_JFDOOELFAOA_OFFSET))();
	}
};
