#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAPKINMFNIL;
class COPMGEHDGNP;
class EBGGEOGBOGN;
class ENKKAFPMDFL;
class NPLMMCGAJDF;
class OBJANKHLNGO;

#define DMHHMEOEDAI_CTOR_OFFSET UNITYSDK_OFFSET(0x186991E0)
#define DMHHMEOEDAI_GACDPHBMHGC_OFFSET UNITYSDK_OFFSET(0x186994D0)
#define DMHHMEOEDAI_GELJOPBDIFH_OFFSET UNITYSDK_OFFSET(0x186995B0)
#define DMHHMEOEDAI_JMHECBBIEHM_OFFSET UNITYSDK_OFFSET(0x186992E0)
#define DMHHMEOEDAI_START_OFFSET UNITYSDK_OFFSET(0x186991F0)
#define DMHHMEOEDAI_STOP_OFFSET UNITYSDK_OFFSET(0x18699280)

inline static constexpr unsigned int DMHHMEOEDAI_TypeDefinitionIndex = 84975;

	class DMHHMEOEDAI : public ::System::Object
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x10
		::EBGGEOGBOGN* LBNAGLIGKIO; // 0x18
		::COPMGEHDGNP* NGKPKBEGEGG; // 0x20
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
