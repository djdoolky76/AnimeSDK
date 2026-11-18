#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"
#include "unitysdk/PLICLFCMJAK.h"

class ILPFFAGMFLM;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NDHJFNPPMAN_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x115808A0)
#define NDHJFNPPMAN_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x11580980)
#define NDHJFNPPMAN_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x11580A00)
#define NDHJFNPPMAN_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x115806A0)
#define NDHJFNPPMAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x115808F0)
#define NDHJFNPPMAN__CTOR_OFFSET UNITYSDK_OFFSET(0x11580970)

inline static constexpr unsigned int NDHJFNPPMAN_TypeDefinitionIndex = 91352;

class NDHJFNPPMAN : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x38; // 0x0
	::System::Collections::Generic::Dictionary_2<::PLICLFCMJAK, ::ILPFFAGMFLM*>* BIFMJCFDJHH; // 0x48
	::System::Boolean BKPHFHEPOKB; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDHJFNPPMAN__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJFNPPMAN__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJFNPPMAN_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJFNPPMAN_GETCLASSID_OFFSET))(this);
	}

	static ::NDHJFNPPMAN* JFDOOELFAOA()
	{
		return ((::NDHJFNPPMAN*(*)())((::PBYTE)hIl2Cpp + NDHJFNPPMAN_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDHJFNPPMAN_MEFBHFEOKGH_OFFSET))(this);
	}
};
