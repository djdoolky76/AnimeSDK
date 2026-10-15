#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMJIDLCDFMI;
class FDPALAEIHPB;
class POHKBAILKGD;

#define CCFMKKBEGFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8DCD50)
#define CCFMKKBEGFH_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C8DCE60)
#define CCFMKKBEGFH_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C8DCD70)

	class CCFMKKBEGFH : public ::System::Object
	{
	public:
		::FDPALAEIHPB* MBKIEFPKECG; // 0x10
		::POHKBAILKGD* CNMOJJIJPOM; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::EMJIDLCDFMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::EMJIDLCDFMI*))((::PBYTE)hIl2Cpp + CCFMKKBEGFH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFMKKBEGFH_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCFMKKBEGFH_EXECUTE_OFFSET))(this);
		}

	};
