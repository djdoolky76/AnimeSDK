#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAPKINMFNIL;
class COPMGEHDGNP;
class EBGGEOGBOGN;
class ENKKAFPMDFL;
class NPLMMCGAJDF;
class OBJANKHLNGO;

#define DMHHMEOEDAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1063A4D0)
#define DMHHMEOEDAI_GACDPHBMHGC_OFFSET UNITYSDK_OFFSET(0x1063A7C0)
#define DMHHMEOEDAI_GELJOPBDIFH_OFFSET UNITYSDK_OFFSET(0x1063A890)
#define DMHHMEOEDAI_JMHECBBIEHM_OFFSET UNITYSDK_OFFSET(0x1063A5D0)
#define DMHHMEOEDAI_START_OFFSET UNITYSDK_OFFSET(0x1063A4E0)
#define DMHHMEOEDAI_STOP_OFFSET UNITYSDK_OFFSET(0x1063A570)

inline static constexpr unsigned int DMHHMEOEDAI_TypeDefinitionIndex = 84976;

	class DMHHMEOEDAI : public ::System::Object
	{
	public:
		::EBGGEOGBOGN* LBNAGLIGKIO; // 0x10
		::COPMGEHDGNP* NGKPKBEGEGG; // 0x18
		::OBJANKHLNGO* GJALMBBNNOF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_STOP_OFFSET))(this);
		}

		::System::Int32 JMHECBBIEHM(::CAPKINMFNIL* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CAPKINMFNIL*))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_JMHECBBIEHM_OFFSET))(this, a1);
		}

		static ::CAPKINMFNIL* GACDPHBMHGC(::NPLMMCGAJDF* a1)
		{
			return ((::CAPKINMFNIL*(*)(::NPLMMCGAJDF*))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_GACDPHBMHGC_OFFSET))(a1);
		}

		::System::Void GELJOPBDIFH(::ENKKAFPMDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENKKAFPMDFL*))((::PBYTE)hIl2Cpp + DMHHMEOEDAI_GELJOPBDIFH_OFFSET))(this, a1);
		}

	};
