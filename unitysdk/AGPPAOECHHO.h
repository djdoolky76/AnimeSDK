#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LogicAxis3DInputType.h"
#include "unitysdk/PJKOCFFMLFB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AGPPAOECHHO_EEEDMPKKNHM.h"

class KBALNFBNAFI;
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::InputSystem { class Sensor; }

#define AGPPAOECHHO_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x144DA860)
#define AGPPAOECHHO_DLPAEPMPOFM_1_OFFSET UNITYSDK_OFFSET(0x144DC540)
#define AGPPAOECHHO_DLPAEPMPOFM_OFFSET UNITYSDK_OFFSET(0x144DC3B0)
#define AGPPAOECHHO_GOAOOJMMMNA_1_OFFSET UNITYSDK_OFFSET(0x144DB220)
#define AGPPAOECHHO_GOAOOJMMMNA_2_OFFSET UNITYSDK_OFFSET(0x144DB480)
#define AGPPAOECHHO_GOAOOJMMMNA_OFFSET UNITYSDK_OFFSET(0x144DACF0)
#define AGPPAOECHHO_ICDGBFCLPKK_OFFSET UNITYSDK_OFFSET(0x144DCB10)
#define AGPPAOECHHO_JBMHOGEDBLK_OFFSET UNITYSDK_OFFSET(0x144DB800)
#define AGPPAOECHHO_NDLFLHHLLJN_1_OFFSET UNITYSDK_OFFSET(0x144DC8F0)
#define AGPPAOECHHO_NDLFLHHLLJN_OFFSET UNITYSDK_OFFSET(0x144DC760)
#define AGPPAOECHHO__CCTOR_OFFSET UNITYSDK_OFFSET(0x144DBCF0)
#define AGPPAOECHHO__CTOR_OFFSET UNITYSDK_OFFSET(0x144DA7C0)

inline static constexpr unsigned int AGPPAOECHHO_TypeDefinitionIndex = 81960;

class AGPPAOECHHO : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::PJKOCFFMLFB>*>** StaticGet_BLMIPPFHJBF()
	{
		return (::System::Collections::Generic::Dictionary_2<::MoleMole::LogicAxis3DInputType, ::Il2CppArray<::PJKOCFFMLFB>*>**)Il2CppClass::FromTypeDefinitionIndex(AGPPAOECHHO_TypeDefinitionIndex)->GetStaticField(0x3D4C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::PJKOCFFMLFB, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>** StaticGet_JAKMFELFNOH()
	{
		return (::System::Collections::Generic::Dictionary_2<::PJKOCFFMLFB, ::System::Func_1<::UnityEngine::InputSystem::Sensor*>*>**)Il2CppClass::FromTypeDefinitionIndex(AGPPAOECHHO_TypeDefinitionIndex)->GetStaticField(0x3D4C8);
	}
	::System::Collections::Generic::Dictionary_2<::PJKOCFFMLFB, ::KBALNFBNAFI*>* ONAFKOEAOCD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGPPAOECHHO__CCTOR_OFFSET))();
	}

	::AGPPAOECHHO_EEEDMPKKNHM GOAOOJMMMNA(::PJKOCFFMLFB OGHBFBJFGIH, ::System::String* AELLPLBJELA)
	{
		return ((::AGPPAOECHHO_EEEDMPKKNHM(*)(::PVOID, ::PJKOCFFMLFB, ::System::String*))((::PBYTE)hIl2Cpp + AGPPAOECHHO_GOAOOJMMMNA_OFFSET))(this, OGHBFBJFGIH, AELLPLBJELA);
	}

	::AGPPAOECHHO_EEEDMPKKNHM GOAOOJMMMNA_1(::MoleMole::LogicAxis3DInputType PBHEAHIAGLM, ::System::String* AELLPLBJELA)
	{
		return ((::AGPPAOECHHO_EEEDMPKKNHM(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + AGPPAOECHHO_GOAOOJMMMNA_1_OFFSET))(this, PBHEAHIAGLM, AELLPLBJELA);
	}

	::AGPPAOECHHO_EEEDMPKKNHM GOAOOJMMMNA_2(::MoleMole::LogicAxis3DInputType JLLAAKLDJFA, ::MoleMole::LogicAxis3DInputType ECDHDJBEDAD, ::System::String* AELLPLBJELA)
	{
		return ((::AGPPAOECHHO_EEEDMPKKNHM(*)(::PVOID, ::MoleMole::LogicAxis3DInputType, ::MoleMole::LogicAxis3DInputType, ::System::String*))((::PBYTE)hIl2Cpp + AGPPAOECHHO_GOAOOJMMMNA_2_OFFSET))(this, JLLAAKLDJFA, ECDHDJBEDAD, AELLPLBJELA);
	}

	::System::Void JBMHOGEDBLK(::PJKOCFFMLFB OGHBFBJFGIH, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::PVOID, ::PJKOCFFMLFB, ::System::String*))((::PBYTE)hIl2Cpp + AGPPAOECHHO_JBMHOGEDBLK_OFFSET))(this, OGHBFBJFGIH, AELLPLBJELA);
	}

	::System::Void DLPAEPMPOFM(::MoleMole::LogicAxis3DInputType PBHEAHIAGLM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + AGPPAOECHHO_DLPAEPMPOFM_OFFSET))(this, PBHEAHIAGLM);
	}

	::System::Void NDLFLHHLLJN(::MoleMole::LogicAxis3DInputType PBHEAHIAGLM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LogicAxis3DInputType))((::PBYTE)hIl2Cpp + AGPPAOECHHO_NDLFLHHLLJN_OFFSET))(this, PBHEAHIAGLM);
	}

	::System::Void BBOMJDBNHIC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO_BBOMJDBNHIC_OFFSET))(this);
	}

	::System::Void DLPAEPMPOFM_1(::PJKOCFFMLFB OGHBFBJFGIH)
	{
		return ((::System::Void(*)(::PVOID, ::PJKOCFFMLFB))((::PBYTE)hIl2Cpp + AGPPAOECHHO_DLPAEPMPOFM_1_OFFSET))(this, OGHBFBJFGIH);
	}

	::System::Void ICDGBFCLPKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGPPAOECHHO_ICDGBFCLPKK_OFFSET))(this);
	}

	::System::Void NDLFLHHLLJN_1(::PJKOCFFMLFB OGHBFBJFGIH)
	{
		return ((::System::Void(*)(::PVOID, ::PJKOCFFMLFB))((::PBYTE)hIl2Cpp + AGPPAOECHHO_NDLFLHHLLJN_1_OFFSET))(this, OGHBFBJFGIH);
	}
};
