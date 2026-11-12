#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MOAAMGJICCD;
class NGLFOJKOKBH;

#define MOAAMGJICCD_AFDBBOJNFHI_OFFSET UNITYSDK_OFFSET(0xC2D8BA0)
#define MOAAMGJICCD_ALBHMMIKJCB_OFFSET UNITYSDK_OFFSET(0xC2D8960)
#define MOAAMGJICCD_COMPARETO_OFFSET UNITYSDK_OFFSET(0xC2D89C0)
#define MOAAMGJICCD_CTOR_OFFSET UNITYSDK_OFFSET(0xC2D89A0)
#define MOAAMGJICCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC2D8B10)
#define MOAAMGJICCD_EQUALS_OFFSET UNITYSDK_OFFSET(0xC2D8AC0)
#define MOAAMGJICCD_HIHJBDCMEIP_OFFSET UNITYSDK_OFFSET(0xC2D8C60)

inline static constexpr unsigned int MOAAMGJICCD_TypeDefinitionIndex = 49972;

	class MOAAMGJICCD : public ::System::Object
	{
	public:
		::FKDIDBGBGMF DBIIPEEDBHI; // 0x10
		::MOAAMGJICCD* BNLCCCCMABF; // 0x20
		::System::Single JEPIMGJBIKL; // 0x28
		::System::Single FDCJBJHCAJJ; // 0x2C
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x30
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::FKDIDBGBGMF a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::FKDIDBGBGMF))((::PBYTE)hIl2Cpp + MOAAMGJICCD_CTOR_OFFSET))(this, a1, a2);
		}

		::NGLFOJKOKBH* ALBHMMIKJCB()
		{
			return ((::NGLFOJKOKBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAAMGJICCD_ALBHMMIKJCB_OFFSET))(this);
		}

		::System::Int32 CompareTo(::MOAAMGJICCD* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MOAAMGJICCD*))((::PBYTE)hIl2Cpp + MOAAMGJICCD_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::MOAAMGJICCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOAAMGJICCD*))((::PBYTE)hIl2Cpp + MOAAMGJICCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOAAMGJICCD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean AFDBBOJNFHI(::MOAAMGJICCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MOAAMGJICCD*))((::PBYTE)hIl2Cpp + MOAAMGJICCD_AFDBBOJNFHI_OFFSET))(this, a1);
		}

		::System::Single HIHJBDCMEIP(::MOAAMGJICCD* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MOAAMGJICCD*))((::PBYTE)hIl2Cpp + MOAAMGJICCD_HIHJBDCMEIP_OFFSET))(this, a1);
		}

	};
