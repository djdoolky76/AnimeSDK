#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define MMLNKGHJCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C92DC10)

	class MMLNKGHJCJK : public ::System::Object
	{
	public:
		::RPG::MVector3 NKDECDGECFL; // 0x10
		::System::Single JBCFPAEELBL; // 0x1C
		::System::Single GCJMFBKLGHI; // 0x20
		::RPG::MVector3 FJBPOFJPFNP; // 0x24
		::RPG::MVector3 KLDJPNDKLMI; // 0x30
		::System::Single IACOMELOOFP; // 0x3C
		::System::Single KPCKFMICDED; // 0x40
		::System::Int32 KOJFHFAKKFO; // 0x44
		::System::Single CFGBLAGHJKP; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNKGHJCJK_CTOR_OFFSET))(this);
		}

	};
