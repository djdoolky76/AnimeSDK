#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Type; }

#define KOJFHENCLJG_AOPGMCNPPMO_OFFSET UNITYSDK_OFFSET(0xACE0)
#define KOJFHENCLJG_BALBKILPGHE_OFFSET UNITYSDK_OFFSET(0xEDD90)
#define KOJFHENCLJG_CFBPCPEMKBC_OFFSET UNITYSDK_OFFSET(0xE620)
#define KOJFHENCLJG_CTOR_OFFSET UNITYSDK_OFFSET(0x3C271A0)
#define KOJFHENCLJG_DCKFJCJDMIP_OFFSET UNITYSDK_OFFSET(0x211F0)
#define KOJFHENCLJG_FHBHLIEMEIH_OFFSET UNITYSDK_OFFSET(0xFE70)
#define KOJFHENCLJG_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x3C271D0)
#define KOJFHENCLJG_JBOINIJPMOF_OFFSET UNITYSDK_OFFSET(0x26290)

inline static constexpr unsigned int KOJFHENCLJG_TypeDefinitionIndex = 5640;

	struct alignas(4) KOJFHENCLJG
	{
		::System::Int32 JFHBPPCIODD; // 0x10
		::System::Int32 KBBIABPEIOI; // 0x14
		::System::Int32 AONHDFKKMAA; // 0x18
		::System::Int32 DFOABFEJLGF; // 0x1C
		::System::RuntimeTypeHandle BEGMJEHBDEA; // 0x20
		::System::Int32 ADGPCJBKEOP; // 0x28
		::System::Int32 AFFGLNIEODF; // 0x2C
		::System::Void _ctor(::System::RuntimeTypeHandle a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::RuntimeTypeHandle, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KOJFHENCLJG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Type* JBIOGKPHKKC()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Int32 FHBHLIEMEIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_FHBHLIEMEIH_OFFSET))(this);
		}

		::System::Int32 BALBKILPGHE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_BALBKILPGHE_OFFSET))(this);
		}

		::System::Int32 CFBPCPEMKBC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_CFBPCPEMKBC_OFFSET))(this);
		}

		::System::Int32 JBOINIJPMOF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_JBOINIJPMOF_OFFSET))(this);
		}

		::System::Int32 AOPGMCNPPMO()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_AOPGMCNPPMO_OFFSET))(this);
		}

		::System::Int32 DCKFJCJDMIP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJFHENCLJG_DCKFJCJDMIP_OFFSET))(this);
		}

	};
