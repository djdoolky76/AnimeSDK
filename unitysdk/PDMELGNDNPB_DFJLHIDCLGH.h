#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigEntityJoystickOrder;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDMELGNDNPB_DFJLHIDCLGH__CTOR_OFFSET UNITYSDK_OFFSET(0x11962640)

inline static constexpr unsigned int PDMELGNDNPB_DFJLHIDCLGH_TypeDefinitionIndex = 54783;

class PDMELGNDNPB_DFJLHIDCLGH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>* OCOPNLLNMFA; // 0x10
	::System::Collections::Generic::Dictionary_2<::ConfigEntityJoystickOrder*, ::System::Int32>* EBNDLOLLMJN; // 0x18
	::System::Int32 DGIMHMMPMFK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB_DFJLHIDCLGH__CTOR_OFFSET))(this);
	}
};
