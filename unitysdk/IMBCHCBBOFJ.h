#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IMBCHCBBOFJ_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x19888A10)
#define IMBCHCBBOFJ_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x19888AF0)
#define IMBCHCBBOFJ_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x19888B70)
#define IMBCHCBBOFJ_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x19888980)
#define IMBCHCBBOFJ__CCTOR_OFFSET UNITYSDK_OFFSET(0x19888A60)
#define IMBCHCBBOFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19888AE0)

inline static constexpr unsigned int IMBCHCBBOFJ_TypeDefinitionIndex = 49537;

class IMBCHCBBOFJ : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x48; // 0x0
	::System::Collections::Generic::HashSet_1<::System::UInt32>* GNLBEOGIKEK; // 0x48
	::System::Boolean GKMMJKLLAKA; // 0x50
	::System::Boolean HAOJJGBJNOB; // 0x51

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMBCHCBBOFJ__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBCHCBBOFJ__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBCHCBBOFJ_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBCHCBBOFJ_GETCLASSID_OFFSET))(this);
	}

	static ::IMBCHCBBOFJ* JFDOOELFAOA()
	{
		return ((::IMBCHCBBOFJ*(*)())((::PBYTE)hIl2Cpp + IMBCHCBBOFJ_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMBCHCBBOFJ_MEFBHFEOKGH_OFFSET))(this);
	}
};
