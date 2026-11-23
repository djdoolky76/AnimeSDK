#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class ED4768D175EFE6C9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EF9A3F691105DA80__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EF9A3F691105DA80_TypeDefinitionIndex = 6890;

class EF9A3F691105DA80 : public ::E379DE61A548837D
{
public:
	::System::Collections::Generic::List_1<::ED4768D175EFE6C9*>* EF41AE5B24E9F0E1; // 0x38
	::System::Boolean FFA3A26F9BE03A17; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EF9A3F691105DA80__CTOR_OFFSET))(this);
	}
};
