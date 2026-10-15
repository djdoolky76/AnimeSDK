#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FKDIDBGBGMF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MOAAMGJICCD;
class NGLFOJKOKBH;

#define MOAAMGJICCD_AFDBBOJNFHI_OFFSET UNITYSDK_OFFSET(0xBA1A820)
#define MOAAMGJICCD_ALBHMMIKJCB_OFFSET UNITYSDK_OFFSET(0xBA1A5E0)
#define MOAAMGJICCD_COMPARETO_OFFSET UNITYSDK_OFFSET(0xBA1A640)
#define MOAAMGJICCD_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1A620)
#define MOAAMGJICCD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA1A790)
#define MOAAMGJICCD_EQUALS_OFFSET UNITYSDK_OFFSET(0xBA1A740)
#define MOAAMGJICCD_HIHJBDCMEIP_OFFSET UNITYSDK_OFFSET(0xBA1A8E0)

inline static constexpr unsigned int MOAAMGJICCD_TypeDefinitionIndex = 48915;

	class MOAAMGJICCD : public ::System::Object
	{
	public:
		::MOAAMGJICCD* BNLCCCCMABF; // 0x10
		::FKDIDBGBGMF DBIIPEEDBHI; // 0x18
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x28
		::System::Single JEPIMGJBIKL; // 0x34
		::System::Single FDCJBJHCAJJ; // 0x38
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
