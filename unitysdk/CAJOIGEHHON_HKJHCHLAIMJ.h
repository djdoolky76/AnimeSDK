#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAJOIGEHHON_HKJHCHLAIMJ_GLILLKAHFOM_OFFSET UNITYSDK_OFFSET(0x1B997450)
#define CAJOIGEHHON_HKJHCHLAIMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9973C0)

inline static constexpr unsigned int CAJOIGEHHON_HKJHCHLAIMJ_TypeDefinitionIndex = 14344;

class CAJOIGEHHON_HKJHCHLAIMJ : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _NIADONLJABE_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_HKJHCHLAIMJ__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* GLILLKAHFOM()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_HKJHCHLAIMJ_GLILLKAHFOM_OFFSET))(this);
	}
};
