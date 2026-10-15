#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define MMLNKGHJCJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8FF820)

inline static constexpr unsigned int MMLNKGHJCJK_TypeDefinitionIndex = 42353;

	class MMLNKGHJCJK : public ::System::Object
	{
	public:
		::System::Single JBCFPAEELBL; // 0x10
		::System::Int32 KOJFHFAKKFO; // 0x14
		::System::Single KPCKFMICDED; // 0x18
		::System::Single CFGBLAGHJKP; // 0x1C
		::System::Single GCJMFBKLGHI; // 0x20
		::RPG::MVector3 NKDECDGECFL; // 0x24
		::System::Single IACOMELOOFP; // 0x30
		::RPG::MVector3 FJBPOFJPFNP; // 0x34
		::RPG::MVector3 KLDJPNDKLMI; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMLNKGHJCJK_CTOR_OFFSET))(this);
		}

	};
