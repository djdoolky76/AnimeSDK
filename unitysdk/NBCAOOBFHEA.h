#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define NBCAOOBFHEA_ALJJDGONFDD_OFFSET UNITYSDK_OFFSET(0xBAB71F0)
#define NBCAOOBFHEA_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define NBCAOOBFHEA_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0xBAB72B0)
#define NBCAOOBFHEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F000)
#define NBCAOOBFHEA_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0xBAB7260)
#define NBCAOOBFHEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EFB0)
#define NBCAOOBFHEA_GIAOOPPHODF_OFFSET UNITYSDK_OFFSET(0xBAB7180)

inline static constexpr unsigned int NBCAOOBFHEA_TypeDefinitionIndex = 78610;

	struct alignas(4) NBCAOOBFHEA
	{
		::System::Int32 GAOAMKBNDPN; // 0x10
		::System::Int32 EBJKJAGJGPK; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		static ::NBCAOOBFHEA GIAOOPPHODF(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::NBCAOOBFHEA(*)(::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_GIAOOPPHODF_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::NBCAOOBFHEA ALJJDGONFDD(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::NBCAOOBFHEA(*)(::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_ALJJDGONFDD_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean FEIIDFFOICL(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::System::Boolean(*)(::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::NBCAOOBFHEA a1, ::NBCAOOBFHEA a2)
		{
			return ((::System::Boolean(*)(::NBCAOOBFHEA, ::NBCAOOBFHEA))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBCAOOBFHEA_EQUALS_OFFSET))(this, a1);
		}

	};
