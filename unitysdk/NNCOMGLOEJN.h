#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define NNCOMGLOEJN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1067B650)
#define NNCOMGLOEJN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1067B730)
#define NNCOMGLOEJN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1067B7B0)
#define NNCOMGLOEJN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1067B610)
#define NNCOMGLOEJN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1067B6A0)
#define NNCOMGLOEJN__CTOR_OFFSET UNITYSDK_OFFSET(0x1067B720)

inline static constexpr unsigned int NNCOMGLOEJN_TypeDefinitionIndex = 89791;

class NNCOMGLOEJN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8F; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCOMGLOEJN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCOMGLOEJN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCOMGLOEJN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCOMGLOEJN_GETCLASSID_OFFSET))(this);
	}

	static ::NNCOMGLOEJN* JFDOOELFAOA()
	{
		return ((::NNCOMGLOEJN*(*)())((::PBYTE)hIl2Cpp + NNCOMGLOEJN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCOMGLOEJN_MEFBHFEOKGH_OFFSET))(this);
	}
};
