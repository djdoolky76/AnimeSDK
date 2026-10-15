#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMJIDLCDFMI;
class FDPALAEIHPB;
class KFJGDFIDKOI;

#define PFJDJKBHBHG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A4C10)
#define PFJDJKBHBHG_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C9E7B30)
#define PFJDJKBHBHG_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C9E7AE0)

	class PFJDJKBHBHG : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::KFJGDFIDKOI* MPKKKBKBMKF; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::EMJIDLCDFMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::EMJIDLCDFMI*))((::PBYTE)hIl2Cpp + PFJDJKBHBHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJDJKBHBHG_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFJDJKBHBHG_EXECUTE_OFFSET))(this);
		}

	};
