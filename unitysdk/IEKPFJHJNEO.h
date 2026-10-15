#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEEKHELGHKF.h"
class NDDFLGNNMDK;
class PEEDLCHFAFL;

#define IEKPFJHJNEO_CTOR_OFFSET UNITYSDK_OFFSET(0x15F01850)
#define IEKPFJHJNEO_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15F01860)
#define IEKPFJHJNEO_LLDIACFIFAB_OFFSET UNITYSDK_OFFSET(0x15F01900)

	class IEKPFJHJNEO : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_INITIALIZE_OFFSET))(this);
		}

		::System::Void LLDIACFIFAB(::OEEKHELGHKF a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEEKHELGHKF))((::PBYTE)hIl2Cpp + IEKPFJHJNEO_LLDIACFIFAB_OFFSET))(this, a1);
		}

	};
