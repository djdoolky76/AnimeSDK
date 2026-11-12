#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKHHFIJCHEP;

#define EFNJLACKEDH_CTOR_OFFSET UNITYSDK_OFFSET(0x14809810)
#define EFNJLACKEDH_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0x14821A80)
#define EFNJLACKEDH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x14821B20)
#define EFNJLACKEDH_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x14821AC0)

inline static constexpr unsigned int EFNJLACKEDH_TypeDefinitionIndex = 61618;

	class EFNJLACKEDH : public ::System::Object
	{
	public:
		::BKHHFIJCHEP* FLMODBLFAGD; // 0x10
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + EFNJLACKEDH_CTOR_OFFSET))(this, a1);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNJLACKEDH_EEBFMFBOIHN_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFNJLACKEDH_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFNJLACKEDH_HCOFMFKFMDK_OFFSET))(this);
		}

	};
