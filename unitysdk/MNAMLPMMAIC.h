#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

class AMKBMMJBOAD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNAMLPMMAIC_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1217A210)
#define MNAMLPMMAIC_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1217A400)
#define MNAMLPMMAIC_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1217A370)
#define MNAMLPMMAIC_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1217A1A0)
#define MNAMLPMMAIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1217A260)
#define MNAMLPMMAIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1217A2E0)

inline static constexpr unsigned int MNAMLPMMAIC_TypeDefinitionIndex = 41283;

class MNAMLPMMAIC : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x8A; // 0x0
	::System::Collections::Generic::List_1<::AMKBMMJBOAD*>* CIAIMEJMBLO; // 0x48
	::System::Boolean JBLPJNADFIN; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNAMLPMMAIC__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAMLPMMAIC__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAMLPMMAIC_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAMLPMMAIC_GETCLASSID_OFFSET))(this);
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNAMLPMMAIC_MEFBHFEOKGH_OFFSET))(this);
	}

	static ::MNAMLPMMAIC* JFDOOELFAOA()
	{
		return ((::MNAMLPMMAIC*(*)())((::PBYTE)hIl2Cpp + MNAMLPMMAIC_JFDOOELFAOA_OFFSET))();
	}
};
