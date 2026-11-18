#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class AMMIEAEEEGB;
class IEFJGNHMHNJ_IJAJOCLGPCK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define IEFJGNHMHNJ_KPHMEOJBJOA_GLMKPPCONDA_OFFSET UNITYSDK_OFFSET(0x10138360)
#define IEFJGNHMHNJ_KPHMEOJBJOA__CTOR_OFFSET UNITYSDK_OFFSET(0x10138350)

inline static constexpr unsigned int IEFJGNHMHNJ_KPHMEOJBJOA_TypeDefinitionIndex = 48252;

class IEFJGNHMHNJ_KPHMEOJBJOA : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::UInt32>* NNHGCFGJCKC; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AMMIEAEEEGB*>* ILGJCBAOGKM; // 0x18
	::IEFJGNHMHNJ_IJAJOCLGPCK* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_KPHMEOJBJOA__CTOR_OFFSET))(this);
	}

	::System::Boolean GLMKPPCONDA(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::AMMIEAEEEGB*> NFFNEFLKPDG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::AMMIEAEEEGB*>))((::PBYTE)hIl2Cpp + IEFJGNHMHNJ_KPHMEOJBJOA_GLMKPPCONDA_OFFSET))(this, NFFNEFLKPDG);
	}
};
