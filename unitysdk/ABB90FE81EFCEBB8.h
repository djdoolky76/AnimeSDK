#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class A3A9E5BBC2D811BD;
template <typename T> class BF99F5374C2D4358;

#define ABB90FE81EFCEBB8__CTOR_OFFSET UNITYSDK_OFFSET(0x4094FA0)

inline static constexpr unsigned int ABB90FE81EFCEBB8_TypeDefinitionIndex = 18226;

class ABB90FE81EFCEBB8 : public ::System::Object
{
public:
	::BF99F5374C2D4358<::System::Action*>* A1204C1A2A44B5D2; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Action*, ::A3A9E5BBC2D811BD<::System::Action*>*>* B842F32F08DACAF2; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABB90FE81EFCEBB8__CTOR_OFFSET))(this);
	}
};
