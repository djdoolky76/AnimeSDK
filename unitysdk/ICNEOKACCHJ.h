#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEGCOEBBCCC;
namespace UnityEngine { class Material; }

#define ICNEOKACCHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15E5C770)
#define ICNEOKACCHJ_EFJMLNDJJDG_OFFSET UNITYSDK_OFFSET(0x15E5BC50)
#define ICNEOKACCHJ_EPODBFKCPHH_OFFSET UNITYSDK_OFFSET(0x15E5C630)
#define ICNEOKACCHJ_FMHMBLIAFDA_OFFSET UNITYSDK_OFFSET(0x15E5BC00)
#define ICNEOKACCHJ_IDHFENOGGAP_OFFSET UNITYSDK_OFFSET(0x15E5C4B0)

	class ICNEOKACCHJ : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* ABAJIOEFDFB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNEOKACCHJ_CTOR_OFFSET))(this);
		}

		::System::Void FMHMBLIAFDA(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + ICNEOKACCHJ_FMHMBLIAFDA_OFFSET))(this, a1);
		}

		::System::Void EFJMLNDJJDG(::FEGCOEBBCCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEGCOEBBCCC*))((::PBYTE)hIl2Cpp + ICNEOKACCHJ_EFJMLNDJJDG_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* IDHFENOGGAP()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNEOKACCHJ_IDHFENOGGAP_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* EPODBFKCPHH()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNEOKACCHJ_EPODBFKCPHH_OFFSET))(this);
		}

	};
