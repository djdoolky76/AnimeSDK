#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEBJBODDHCN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CAJOIGEHHON_ILDHHAKOPPG_PBLFMDLIPOI_OFFSET UNITYSDK_OFFSET(0x19AC9430)
#define CAJOIGEHHON_ILDHHAKOPPG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AC93A0)

inline static constexpr unsigned int CAJOIGEHHON_ILDHHAKOPPG_TypeDefinitionIndex = 14346;

class CAJOIGEHHON_ILDHHAKOPPG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Byte, ::PEBJBODDHCN*>* _CEODCADIHFE_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_ILDHHAKOPPG__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::Byte, ::PEBJBODDHCN*>* PBLFMDLIPOI()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Byte, ::PEBJBODDHCN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJOIGEHHON_ILDHHAKOPPG_PBLFMDLIPOI_OFFSET))(this);
	}
};
