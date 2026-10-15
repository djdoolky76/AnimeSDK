#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ENHOPAHGCMA;
namespace System { class String; }

#define IPDJEKLHILE_CTOR_OFFSET UNITYSDK_OFFSET(0x1651E530)
#define IPDJEKLHILE_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x1651E3E0)

	class IPDJEKLHILE : public ::System::Object
	{
	public:
		::System::String* EBCFEAHLKPM; // 0x10
		::System::UInt32 MEPFOEEGBEA; // 0x18
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPDJEKLHILE_CTOR_OFFSET))(this);
		}

		::System::Void OHCJOIANPFG(::ENHOPAHGCMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENHOPAHGCMA*))((::PBYTE)hIl2Cpp + IPDJEKLHILE_OHCJOIANPFG_OFFSET))(this, a1);
		}

	};
