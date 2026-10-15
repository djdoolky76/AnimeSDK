#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class NJGDIEAIHPD;

#define KHHKILFAKMI_ANOGKEGBNJE_OFFSET UNITYSDK_OFFSET(0xB4095E0)
#define KHHKILFAKMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB409640)
#define KHHKILFAKMI_IIHFPKJNAHP_OFFSET UNITYSDK_OFFSET(0xB409580)

	class KHHKILFAKMI : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHHKILFAKMI_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint IIHFPKJNAHP(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + KHHKILFAKMI_IIHFPKJNAHP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint ANOGKEGBNJE(::RPG::GameCore::FixPoint a1, ::NJGDIEAIHPD* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::NJGDIEAIHPD*))((::PBYTE)hIl2Cpp + KHHKILFAKMI_ANOGKEGBNJE_OFFSET))(this, a1, a2);
		}

	};
