#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIAENAKKAAP.h"
#include "unitysdk/CNLEEFGEKFB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"

#define JJGBKDLGDFN_BOBEJIOLMJL_OFFSET UNITYSDK_OFFSET(0x1D881510)
#define JJGBKDLGDFN_CACOCMJHJIB_OFFSET UNITYSDK_OFFSET(0x1D881720)
#define JJGBKDLGDFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D881770)
#define JJGBKDLGDFN_NBNKMIMDLJB_OFFSET UNITYSDK_OFFSET(0x1D881560)
#define JJGBKDLGDFN_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0x1D8814A0)
#define JJGBKDLGDFN_PMMNBAJPPKG_OFFSET UNITYSDK_OFFSET(0x1D8815B0)

inline static constexpr unsigned int JJGBKDLGDFN_TypeDefinitionIndex = 38174;

	class JJGBKDLGDFN : public ::System::Object
	{
	public:
		::CIAENAKKAAP NLLDCIBKMJI; // 0x10
		::System::Int32 OOFOCLJKNCM; // 0x30
		::System::Boolean MOKNCFJICIC; // 0x34
		::System::Byte _padding0[0x3];
		::CNLEEFGEKFB PBLDEABLGHP; // 0x38
		::System::Int32 HBAMPJPOOLM; // 0x4C
		::System::Int32 EBJKJAGJGPK; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_CTOR_OFFSET))(this);
		}

		::System::Void PAFCMAMJENB(::RPG::MVector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Int32))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_PAFCMAMJENB_OFFSET))(this, a1, a2);
		}

		::System::Int32 BOBEJIOLMJL()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_BOBEJIOLMJL_OFFSET))(this);
		}

		::System::Int32 NBNKMIMDLJB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_NBNKMIMDLJB_OFFSET))(this);
		}

		::RPG::MVector3 PMMNBAJPPKG()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_PMMNBAJPPKG_OFFSET))(this);
		}

		::System::Single CACOCMJHJIB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGBKDLGDFN_CACOCMJHJIB_OFFSET))(this);
		}

	};
