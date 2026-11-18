#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HENCJHMEDDK_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1408B1F0)
#define HENCJHMEDDK_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1408B2D0)
#define HENCJHMEDDK_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1408B350)
#define HENCJHMEDDK_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1408B1A0)
#define HENCJHMEDDK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1408B240)
#define HENCJHMEDDK__CTOR_OFFSET UNITYSDK_OFFSET(0x1408B2C0)

inline static constexpr unsigned int HENCJHMEDDK_TypeDefinitionIndex = 38844;

class HENCJHMEDDK : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x17; // 0x0
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* FNAGDOBBPLH; // 0x48
	::System::Collections::Generic::List_1<::System::Int32>* PIENBEPFNCO; // 0x50

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HENCJHMEDDK__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENCJHMEDDK__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENCJHMEDDK_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENCJHMEDDK_GETCLASSID_OFFSET))(this);
	}

	static ::HENCJHMEDDK* JFDOOELFAOA()
	{
		return ((::HENCJHMEDDK*(*)())((::PBYTE)hIl2Cpp + HENCJHMEDDK_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HENCJHMEDDK_MEFBHFEOKGH_OFFSET))(this);
	}
};
