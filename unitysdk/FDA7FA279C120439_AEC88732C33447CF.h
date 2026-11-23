#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
class A95DE8256EE91C35;
class FDA7FA279C120439;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FDA7FA279C120439_AEC88732C33447CF_EB1D715DEF4D4346_OFFSET UNITYSDK_OFFSET(0x1839450)
#define FDA7FA279C120439_AEC88732C33447CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FDA7FA279C120439_AEC88732C33447CF_TypeDefinitionIndex = 1150;

class FDA7FA279C120439_AEC88732C33447CF : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::A95DE8256EE91C35*>* E7E2FB3659AD787D; // 0x10
	::FDA7FA279C120439* A544919C800E2923; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDA7FA279C120439_AEC88732C33447CF__CTOR_OFFSET))(this);
	}

	::System::Void EB1D715DEF4D4346(::A04FB906869DCF3A* BA0E602D1845876C)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + FDA7FA279C120439_AEC88732C33447CF_EB1D715DEF4D4346_OFFSET))(this, BA0E602D1845876C);
	}
};
