#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GBIJOMCECNK_COGGCDBOHAP_OFFSET UNITYSDK_OFFSET(0x15950EF0)
#define GBIJOMCECNK_CTOR_OFFSET UNITYSDK_OFFSET(0x15951100)
#define GBIJOMCECNK_GFEGBKDDDNM_OFFSET UNITYSDK_OFFSET(0x15951060)
#define GBIJOMCECNK_JJCNGHLNDJC_OFFSET UNITYSDK_OFFSET(0x15951000)

	class GBIJOMCECNK : public ::System::Object
	{
	public:
		::System::Int64 KLKMBODEDDP; // 0x10
		::System::Int64 AKNJBPANGMD; // 0x18
		::System::Double KBDPMBDJIOF; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBIJOMCECNK_CTOR_OFFSET))(this);
		}

		static ::System::Double COGGCDBOHAP()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + GBIJOMCECNK_COGGCDBOHAP_OFFSET))();
		}

		::System::Void JJCNGHLNDJC(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GBIJOMCECNK_JJCNGHLNDJC_OFFSET))(this, a1);
		}

		::System::Int64 GFEGBKDDDNM(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GBIJOMCECNK_GFEGBKDDDNM_OFFSET))(this, a1);
		}

	};
