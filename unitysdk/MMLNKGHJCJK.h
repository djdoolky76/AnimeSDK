#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define MMLNKGHJCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF110)

inline static constexpr unsigned int MMLNKGHJCJK_TypeDefinitionIndex = 43328;

	class MMLNKGHJCJK : public ::System::Object
	{
	public:
		::RPG::MVector3 KLDJPNDKLMI; // 0x10
		::System::Single IACOMELOOFP; // 0x1C
		::RPG::MVector3 FJBPOFJPFNP; // 0x20
		::System::Single KPCKFMICDED; // 0x2C
		::System::Single GCJMFBKLGHI; // 0x30
		::System::Single CFGBLAGHJKP; // 0x34
		::System::Int32 KOJFHFAKKFO; // 0x38
		::System::Single JBCFPAEELBL; // 0x3C
		::RPG::MVector3 NKDECDGECFL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNKGHJCJK_CTOR_OFFSET))(this);
		}

	};
