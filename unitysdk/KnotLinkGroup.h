#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KnotReference;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KNOTLINKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x3DCC810)

inline static constexpr unsigned int KnotLinkGroup_TypeDefinitionIndex = 21611;

class KnotLinkGroup : public ::System::Object
{
public:
	::System::Int32 InitiatorIdx; // 0x10
	::System::Byte _padding0[0x4];
	::System::Collections::Generic::List_1<::KnotReference*>* Knots; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOTLINKGROUP__CTOR_OFFSET))(this);
	}
};
