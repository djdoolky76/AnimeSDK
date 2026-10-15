#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class NGLFOJKOKBH;

#define IJLOJGICLOM_CGFBHKOIDFG_OFFSET UNITYSDK_OFFSET(0x1646D450)
#define IJLOJGICLOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1646CA10)
#define IJLOJGICLOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1646C9B0)
#define IJLOJGICLOM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1646CBE0)
#define IJLOJGICLOM_DOBHNHGFMNA_OFFSET UNITYSDK_OFFSET(0x1646CD00)
#define IJLOJGICLOM_EAGFBOOHGPL_OFFSET UNITYSDK_OFFSET(0x1646D7B0)
#define IJLOJGICLOM_EPMOBIDHNFA_OFFSET UNITYSDK_OFFSET(0x1646CF70)
#define IJLOJGICLOM_GET_WEIGHT_OFFSET UNITYSDK_OFFSET(0x1646D7C0)
#define IJLOJGICLOM_HEEDAEAPGGF_OFFSET UNITYSDK_OFFSET(0x1646D7A0)
#define IJLOJGICLOM_ICGFEFNKKDD_OFFSET UNITYSDK_OFFSET(0x1646D310)
#define IJLOJGICLOM_JMJOIOKGBJI_OFFSET UNITYSDK_OFFSET(0x1646CCE0)
#define IJLOJGICLOM_MBFECCIOMGB_OFFSET UNITYSDK_OFFSET(0x1646CEB0)
#define IJLOJGICLOM_MEFDNEKFGFH_OFFSET UNITYSDK_OFFSET(0x1646D590)
#define IJLOJGICLOM_PAKJOMGBLNA_OFFSET UNITYSDK_OFFSET(0x1646CC80)
#define IJLOJGICLOM_PFHDNGHOACI_OFFSET UNITYSDK_OFFSET(0x1646CCF0)

inline static constexpr unsigned int IJLOJGICLOM_TypeDefinitionIndex = 48882;

	class IJLOJGICLOM : public ::System::Object
	{
	public:
		::FKDIDBGBGMF LKBJJPBLCLM; // 0x10
		::FKDIDBGBGMF LAPNHOKFPNN; // 0x20
		::System::Single _Weight_k__BackingField; // 0x30
		::UnityEngine::Vector3 LEGMIOCPBOM; // 0x34
		::UnityEngine::Vector3 ELGIKNAHKEE; // 0x40
		::System::Void _ctor(::FKDIDBGBGMF a1, ::FKDIDBGBGMF a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::FKDIDBGBGMF, ::FKDIDBGBGMF, ::System::Single))((::PBYTE)hIl2Cpp + IJLOJGICLOM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::NGLFOJKOKBH* a1, ::NGLFOJKOKBH* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::NGLFOJKOKBH*, ::NGLFOJKOKBH*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IJLOJGICLOM_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_DISPOSE_OFFSET))(this);
		}

		::System::Boolean PAKJOMGBLNA(::NGLFOJKOKBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGLFOJKOKBH*))((::PBYTE)hIl2Cpp + IJLOJGICLOM_PAKJOMGBLNA_OFFSET))(this, a1);
		}

		::System::Boolean DOBHNHGFMNA(::FKDIDBGBGMF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + IJLOJGICLOM_DOBHNHGFMNA_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF MBFECCIOMGB(::NGLFOJKOKBH* a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::NGLFOJKOKBH*))((::PBYTE)hIl2Cpp + IJLOJGICLOM_MBFECCIOMGB_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 EPMOBIDHNFA(::FKDIDBGBGMF a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + IJLOJGICLOM_EPMOBIDHNFA_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF MEFDNEKFGFH(::FKDIDBGBGMF a1)
		{
			return ((::FKDIDBGBGMF(*)(::PVOID, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + IJLOJGICLOM_MEFDNEKFGFH_OFFSET))(this, a1);
		}

		::FKDIDBGBGMF HEEDAEAPGGF()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_HEEDAEAPGGF_OFFSET))(this);
		}

		::FKDIDBGBGMF EAGFBOOHGPL()
		{
			return ((::FKDIDBGBGMF(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_EAGFBOOHGPL_OFFSET))(this);
		}

		::UnityEngine::Vector3 ICGFEFNKKDD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_ICGFEFNKKDD_OFFSET))(this);
		}

		::UnityEngine::Vector3 CGFBHKOIDFG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_CGFBHKOIDFG_OFFSET))(this);
		}

		::NGLFOJKOKBH* JMJOIOKGBJI()
		{
			return ((::NGLFOJKOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_JMJOIOKGBJI_OFFSET))(this);
		}

		::NGLFOJKOKBH* PFHDNGHOACI()
		{
			return ((::NGLFOJKOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_PFHDNGHOACI_OFFSET))(this);
		}

		::System::Single get_Weight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLOJGICLOM_GET_WEIGHT_OFFSET))(this);
		}

	};
