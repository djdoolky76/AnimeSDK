#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A2BCFAF1F52E1CA7.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;
class F1A311F7DE3DEBDE;
class F9CAFB277AB63AE0;
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class FA9B773E8C9B97E9;

#define A152C8B3238F2872__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A152C8B3238F2872_TypeDefinitionIndex = 668;

class A152C8B3238F2872 : public ::System::Object
{
public:
	::System::UInt32 A5E9A61B8A23886C; // 0x10
	::System::Byte _padding0[0x4];
	::FA9B773E8C9B97E9<::F9CAFB277AB63AE0*>* AEF12029E4BE5C46; // 0x18
	::F1A311F7DE3DEBDE* A19F6DDD0D29254E; // 0x20
	::E68AA4EB51923C98::A2BCFAF1F52E1CA7 ED37E17B94D866BE; // 0x28
	::System::Byte _padding1[0x4];
	::System::Collections::Generic::List_1<::AB642D1382756991*>* A82B5D8E6593BEB1; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A152C8B3238F2872__CTOR_OFFSET))(this);
	}
};
