#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define EPIKNKHCEDO_CTOR_OFFSET UNITYSDK_OFFSET(0x155D51B0)
#define EPIKNKHCEDO_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x155D52E0)
#define EPIKNKHCEDO_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x155D51D0)

inline static constexpr unsigned int EPIKNKHCEDO_TypeDefinitionIndex = 60363;

	class EPIKNKHCEDO : public ::EFNJLACKEDH
	{
	public:
		::System::Int32 BPILJHOEGJB; // 0x18
		::System::Boolean KHMOBLGNNOD; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 PEBIINOIIMP; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::System::Boolean a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + EPIKNKHCEDO_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIKNKHCEDO_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIKNKHCEDO_HCOFMFKFMDK_OFFSET))(this);
		}

	};
