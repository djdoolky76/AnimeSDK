#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

#define ILCBHHGLBFF_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x16584230)
#define ILCBHHGLBFF_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x165843A0)
#define ILCBHHGLBFF_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x16584310)
#define ILCBHHGLBFF_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x165841F0)
#define ILCBHHGLBFF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16584280)
#define ILCBHHGLBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16584300)

inline static constexpr unsigned int ILCBHHGLBFF_TypeDefinitionIndex = 64914;

class ILCBHHGLBFF : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x30; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILCBHHGLBFF__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBHHGLBFF__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBHHGLBFF_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBHHGLBFF_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCBHHGLBFF_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::ILCBHHGLBFF* JFDOOELFAOA()
	{
		return ((::ILCBHHGLBFF*(*)())((::PBYTE)hIl2Cpp + ILCBHHGLBFF_JFDOOELFAOA_OFFSET))();
	}
};
