#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define GBLJEAJCJMH_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13DB4490)
#define GBLJEAJCJMH_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13DB4570)
#define GBLJEAJCJMH_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13DB45F0)
#define GBLJEAJCJMH_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13DB4450)
#define GBLJEAJCJMH__CCTOR_OFFSET UNITYSDK_OFFSET(0x13DB44E0)
#define GBLJEAJCJMH__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB4560)

inline static constexpr unsigned int GBLJEAJCJMH_TypeDefinitionIndex = 92644;

class GBLJEAJCJMH : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8D; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBLJEAJCJMH__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLJEAJCJMH__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLJEAJCJMH_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLJEAJCJMH_GETCLASSID_OFFSET))(this);
	}

	static ::GBLJEAJCJMH* JFDOOELFAOA()
	{
		return ((::GBLJEAJCJMH*(*)())((::PBYTE)hIl2Cpp + GBLJEAJCJMH_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBLJEAJCJMH_MEFBHFEOKGH_OFFSET))(this);
	}
};
