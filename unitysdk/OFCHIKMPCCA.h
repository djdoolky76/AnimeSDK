#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define OFCHIKMPCCA_GETCLASSID_OFFSET UNITYSDK_OFFSET(0xE0F53C0)
#define OFCHIKMPCCA_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0xE0F5530)
#define OFCHIKMPCCA_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0xE0F54A0)
#define OFCHIKMPCCA_ONCLEAN_OFFSET UNITYSDK_OFFSET(0xE0F5380)
#define OFCHIKMPCCA__CCTOR_OFFSET UNITYSDK_OFFSET(0xE0F5410)
#define OFCHIKMPCCA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F5490)

inline static constexpr unsigned int OFCHIKMPCCA_TypeDefinitionIndex = 75353;

class OFCHIKMPCCA : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x92; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFCHIKMPCCA__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCHIKMPCCA__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCHIKMPCCA_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCHIKMPCCA_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCHIKMPCCA_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::OFCHIKMPCCA* JFDOOELFAOA()
	{
		return ((::OFCHIKMPCCA*(*)())((::PBYTE)hIl2Cpp + OFCHIKMPCCA_JFDOOELFAOA_OFFSET))();
	}
};
