#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_MoveType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class PJGGDJJPPJP;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KDDJALBGMBL_AHJEHFHACHD_OFFSET UNITYSDK_OFFSET(0x178F2410)
#define KDDJALBGMBL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x178F3A80)
#define KDDJALBGMBL_HLPBHJFFJKP_OFFSET UNITYSDK_OFFSET(0x178F34E0)
#define KDDJALBGMBL_INHFHBGLPDF_OFFSET UNITYSDK_OFFSET(0x178F29F0)
#define KDDJALBGMBL_MLJLMEHBFJM_OFFSET UNITYSDK_OFFSET(0x178F3290)
#define KDDJALBGMBL_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x178F2330)
#define KDDJALBGMBL_ODJKMIKELED_OFFSET UNITYSDK_OFFSET(0x178F3190)
#define KDDJALBGMBL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x178F31F0)
#define KDDJALBGMBL__CTOR_OFFSET UNITYSDK_OFFSET(0x178F22A0)

inline static constexpr unsigned int KDDJALBGMBL_TypeDefinitionIndex = 70053;

class KDDJALBGMBL : public ::System::Object
{
public:
	// static const ::System::Single HCGEEEFKNLH; // 0x0
	// static const ::System::Single FHCOAODCANG; // 0x0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* GJHPIIMINGH; // 0x10
	::PJGGDJJPPJP* LALCOGDBPMO; // 0x18
	::GEIHCPAOKKK* NBPOBAMBMCD; // 0x20
	::System::Collections::Generic::List_1<::System::Single>* BLKCDKHACFO; // 0x28
	::System::Single PINEIPABFBK; // 0x30
	::System::Single NHLCCIEKEPD; // 0x34
	::UnityEngine::Vector3 DAIJGEBKEPB; // 0x38
	::System::Single HACJFKBLODH; // 0x44
	::System::Boolean OCPPJGIDPDM; // 0x48
	::System::Boolean GINNLEKDPHF; // 0x49
	::System::Boolean AGNEHFPNIFM; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 IEAKFLJJJEO; // 0x4C
	::System::Single GABPLKDBDGJ; // 0x50
	::MoleMole::Config::LevelShootGameConfig_MoveType OINOPLGMNDE; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void AHJEHFHACHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_AHJEHFHACHD_OFFSET))(this);
	}

	::System::Boolean ODJKMIKELED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_ODJKMIKELED_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KDDJALBGMBL_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HLPBHJFFJKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_HLPBHJFFJKP_OFFSET))(this);
	}

	::System::Void INHFHBGLPDF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_INHFHBGLPDF_OFFSET))(this);
	}

	::System::Boolean MLJLMEHBFJM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KDDJALBGMBL_MLJLMEHBFJM_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* FINEANOLAPH, ::System::Int32 BPBJKAPOMJO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + KDDJALBGMBL_BBOMJDBNHIC_OFFSET))(this, FINEANOLAPH, BPBJKAPOMJO);
	}
};
