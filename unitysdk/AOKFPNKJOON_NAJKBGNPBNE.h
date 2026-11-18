#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class KJPPANPJBOJ;
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AOKFPNKJOON_NAJKBGNPBNE_NIGKNAOALFN_OFFSET UNITYSDK_OFFSET(0x13600E80)
#define AOKFPNKJOON_NAJKBGNPBNE__CTOR_OFFSET UNITYSDK_OFFSET(0x13600E70)

inline static constexpr unsigned int AOKFPNKJOON_NAJKBGNPBNE_TypeDefinitionIndex = 51456;

class AOKFPNKJOON_NAJKBGNPBNE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKFPNKJOON_NAJKBGNPBNE__CTOR_OFFSET))(this);
	}

	::System::Void NIGKNAOALFN(::KJPPANPJBOJ* GLAOEHCGCFO, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>* POLEBKEFMFL)
	{
		return ((::System::Void(*)(::PVOID, ::KJPPANPJBOJ*, ::System::Collections::Generic::List_1<::CFMGIKJLMBJ*>*))((::PBYTE)hIl2Cpp + AOKFPNKJOON_NAJKBGNPBNE_NIGKNAOALFN_OFFSET))(this, GLAOEHCGCFO, POLEBKEFMFL);
	}
};
