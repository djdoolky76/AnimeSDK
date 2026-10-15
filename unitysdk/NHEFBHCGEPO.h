#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;
class HJNDPHEDAGM;

#define NHEFBHCGEPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C933FF0)
#define NHEFBHCGEPO_DLEPGGKBAMD_OFFSET UNITYSDK_OFFSET(0x1C937750)
#define NHEFBHCGEPO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C934000)
#define NHEFBHCGEPO_GJGPAEHKAOK_OFFSET UNITYSDK_OFFSET(0x1C935FB0)
#define NHEFBHCGEPO_ICFAMGKIDJD_OFFSET UNITYSDK_OFFSET(0x1C934C60)
#define NHEFBHCGEPO_IHBKIDGKGDF_OFFSET UNITYSDK_OFFSET(0x1C936320)
#define NHEFBHCGEPO_KBFGNOJEPCE_OFFSET UNITYSDK_OFFSET(0x1C9367B0)
#define NHEFBHCGEPO_LALKBMCFIHE_OFFSET UNITYSDK_OFFSET(0x1C937280)
#define NHEFBHCGEPO_OMAPGIPNKBM_OFFSET UNITYSDK_OFFSET(0x1C936B30)

inline static constexpr unsigned int NHEFBHCGEPO_TypeDefinitionIndex = 42210;

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
