#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define OEAKPHDBPJM_BDEHPCDADFK_OFFSET UNITYSDK_OFFSET(0x1843BA00)
#define OEAKPHDBPJM_EACOHCPFGAE_OFFSET UNITYSDK_OFFSET(0x1843B9F0)
#define OEAKPHDBPJM_FNKOBPPBGOM_OFFSET UNITYSDK_OFFSET(0x1843C5D0)
#define OEAKPHDBPJM_NGELJIJDHLJ_OFFSET UNITYSDK_OFFSET(0x1843C5C0)
#define OEAKPHDBPJM_NOPKFGPAINE_OFFSET UNITYSDK_OFFSET(0x1843B7B0)
#define OEAKPHDBPJM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1843C0E0)
#define OEAKPHDBPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1843B710)

inline static constexpr unsigned int OEAKPHDBPJM_TypeDefinitionIndex = 87135;

class OEAKPHDBPJM : public ::System::Object
{
public:
	::FluffyUnderware::Curvy::CurvySpline* DLMCBOCAGFE; // 0x10
	::MoleMole::EntityHandle PCHMHIOFNMF; // 0x18
	::System::Single MCMFNMNFMKH; // 0x28
	::UnityEngine::Vector3 NKJONGAKFFF; // 0x2C
	::System::Single EGOCBPPDAPJ; // 0x38
	::System::Single CNCCEBPMCLG; // 0x3C
	::UnityEngine::Vector3 FGLJFCBCNIP; // 0x40
	::UnityEngine::Vector3 LDIKJMBANOL; // 0x4C
	::System::Boolean EJCFEBANKPG; // 0x58
	::System::Boolean _HLKOIMLGOHH_k__BackingField; // 0x59
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 PIHMMBDPMHL; // 0x5C
	::System::Single LKAIDKALODG; // 0x68
	::System::ValueTuple_2<::System::Single, ::System::Single> MGMAIBJOAKH; // 0x6C

	::System::Void _ctor(::MoleMole::EntityHandle BDHOILPIGKB, ::UnityEngine::Vector3 AKAGDEFAGJA, ::FluffyUnderware::Curvy::CurvySpline* FAJHPKBELMF, ::System::Single IJKOLMELBBC, ::System::Single IMLLDOHDCNC, ::System::Single DCPAIJPEIDO, ::System::Single NKINLLEHHOO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::UnityEngine::Vector3, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OEAKPHDBPJM__CTOR_OFFSET))(this, BDHOILPIGKB, AKAGDEFAGJA, FAJHPKBELMF, IJKOLMELBBC, IMLLDOHDCNC, DCPAIJPEIDO, NKINLLEHHOO);
	}

	::System::Void EACOHCPFGAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_EACOHCPFGAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDEHPCDADFK(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_BDEHPCDADFK_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void NOPKFGPAINE(::FluffyUnderware::Curvy::CurvySpline* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_NOPKFGPAINE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NGELJIJDHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_NGELJIJDHLJ_OFFSET))(this);
	}

	::FluffyUnderware::Curvy::CurvySpline* FNKOBPPBGOM()
	{
		return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPHDBPJM_FNKOBPPBGOM_OFFSET))(this);
	}
};
