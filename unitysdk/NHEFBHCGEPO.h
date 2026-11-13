#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class HJNDPHEDAGM;

#define NHEFBHCGEPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0426C0)
#define NHEFBHCGEPO_DLEPGGKBAMD_OFFSET UNITYSDK_OFFSET(0x1E045DA0)
#define NHEFBHCGEPO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E0426D0)
#define NHEFBHCGEPO_GJGPAEHKAOK_OFFSET UNITYSDK_OFFSET(0x1E044610)
#define NHEFBHCGEPO_ICFAMGKIDJD_OFFSET UNITYSDK_OFFSET(0x1E043310)
#define NHEFBHCGEPO_IHBKIDGKGDF_OFFSET UNITYSDK_OFFSET(0x1E044980)
#define NHEFBHCGEPO_KBFGNOJEPCE_OFFSET UNITYSDK_OFFSET(0x1E044E10)
#define NHEFBHCGEPO_LALKBMCFIHE_OFFSET UNITYSDK_OFFSET(0x1E0458D0)
#define NHEFBHCGEPO_OMAPGIPNKBM_OFFSET UNITYSDK_OFFSET(0x1E045180)

inline static constexpr unsigned int NHEFBHCGEPO_TypeDefinitionIndex = 43185;

	class NHEFBHCGEPO : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::HJNDPHEDAGM* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::HJNDPHEDAGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::HJNDPHEDAGM*))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_EXECUTE_OFFSET))(this);
		}

		::System::Void KBFGNOJEPCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_KBFGNOJEPCE_OFFSET))(this);
		}

		::System::Void ICFAMGKIDJD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_ICFAMGKIDJD_OFFSET))(this, a1);
		}

		::System::Void OMAPGIPNKBM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_OMAPGIPNKBM_OFFSET))(this, a1);
		}

		::System::Void LALKBMCFIHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_LALKBMCFIHE_OFFSET))(this);
		}

		::System::Void DLEPGGKBAMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_DLEPGGKBAMD_OFFSET))(this);
		}

		::System::Void IHBKIDGKGDF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_IHBKIDGKGDF_OFFSET))(this, a1);
		}

		::System::Void GJGPAEHKAOK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NHEFBHCGEPO_GJGPAEHKAOK_OFFSET))(this, a1);
		}

	};
