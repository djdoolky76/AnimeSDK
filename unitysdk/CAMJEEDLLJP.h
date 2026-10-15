#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;

#define CAMJEEDLLJP_CPPKCJJBLIB_OFFSET UNITYSDK_OFFSET(0x1C8AE0A0)
#define CAMJEEDLLJP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ADDF0)
#define CAMJEEDLLJP_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8ADEC0)
#define CAMJEEDLLJP_KINJMINKEEI_OFFSET UNITYSDK_OFFSET(0x1C8AE900)

inline static constexpr unsigned int CAMJEEDLLJP_TypeDefinitionIndex = 42309;

	class CAMJEEDLLJP : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x18
		::System::UInt32 CDBPBFBMKPP; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*))((::PBYTE)hIl2Cpp + CAMJEEDLLJP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMJEEDLLJP_EXECUTE_OFFSET))(this);
		}

		::System::Void CPPKCJJBLIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAMJEEDLLJP_CPPKCJJBLIB_OFFSET))(this);
		}

		::System::Boolean KINJMINKEEI(::System::ValueTuple_2<::System::UInt32, ::System::UInt32> a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::UInt32))((::PBYTE)hIl2Cpp + CAMJEEDLLJP_KINJMINKEEI_OFFSET))(this, a1, a2);
		}

	};
