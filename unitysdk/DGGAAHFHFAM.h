#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHKOPDIHKJK.h"

#define DGGAAHFHFAM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x13E4B7C0)
#define DGGAAHFHFAM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x13E4B8E0)
#define DGGAAHFHFAM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x13E4B960)
#define DGGAAHFHFAM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x13E4B890)
#define DGGAAHFHFAM__CCTOR_OFFSET UNITYSDK_OFFSET(0x13E4B810)
#define DGGAAHFHFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x13E4B8D0)

inline static constexpr unsigned int DGGAAHFHFAM_TypeDefinitionIndex = 59262;

class DGGAAHFHFAM : public ::JHKOPDIHKJK
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x22D; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGGAAHFHFAM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGAAHFHFAM__CTOR_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGAAHFHFAM_GETCLASSID_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGAAHFHFAM_ONCLEAN_OFFSET))(this);
	}

	static ::DGGAAHFHFAM* JFDOOELFAOA()
	{
		return ((::DGGAAHFHFAM*(*)())((::PBYTE)hIl2Cpp + DGGAAHFHFAM_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGAAHFHFAM_MEFBHFEOKGH_OFFSET))(this);
	}
};
