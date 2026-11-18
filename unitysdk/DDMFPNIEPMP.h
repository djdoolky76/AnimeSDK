#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class SlidingSubsystem; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define DDMFPNIEPMP_ABJDOEBDOAN_OFFSET UNITYSDK_OFFSET(0x12404620)
#define DDMFPNIEPMP_AOIOCCCJEHO_OFFSET UNITYSDK_OFFSET(0x12404480)
#define DDMFPNIEPMP_BFGDJHLIDBC_OFFSET UNITYSDK_OFFSET(0x12404840)
#define DDMFPNIEPMP_CGCINLPBNDI_OFFSET UNITYSDK_OFFSET(0x124049A0)
#define DDMFPNIEPMP_CNCNEALEIJH_OFFSET UNITYSDK_OFFSET(0x12403F40)
#define DDMFPNIEPMP_CPCOGCDGKEC_OFFSET UNITYSDK_OFFSET(0x12404920)
#define DDMFPNIEPMP_CPFIOPKICLF_OFFSET UNITYSDK_OFFSET(0x12404410)
#define DDMFPNIEPMP_DOMAEKJGGKK_OFFSET UNITYSDK_OFFSET(0x12403D20)
#define DDMFPNIEPMP_EEFJPFNJKCA_OFFSET UNITYSDK_OFFSET(0x12404020)
#define DDMFPNIEPMP_EJOLOFCLGAD_OFFSET UNITYSDK_OFFSET(0x12404680)
#define DDMFPNIEPMP_FNGNGFCHBIB_OFFSET UNITYSDK_OFFSET(0x12404A90)
#define DDMFPNIEPMP_FNNNNOBKNPM_OFFSET UNITYSDK_OFFSET(0x12403E90)
#define DDMFPNIEPMP_FONJKAEHFFI_OFFSET UNITYSDK_OFFSET(0x12404090)
#define DDMFPNIEPMP_GOKGHHGNPDK_OFFSET UNITYSDK_OFFSET(0x124046D0)
#define DDMFPNIEPMP_HIBLGJPNEBD_OFFSET UNITYSDK_OFFSET(0x12403E10)
#define DDMFPNIEPMP_HIDONJNEPNK_OFFSET UNITYSDK_OFFSET(0x12404AF0)
#define DDMFPNIEPMP_HIONJFAHJFF_OFFSET UNITYSDK_OFFSET(0x12404A20)
#define DDMFPNIEPMP_IKFHMJGMKNH_OFFSET UNITYSDK_OFFSET(0x124044E0)
#define DDMFPNIEPMP_IMNEKCLPJCH_OFFSET UNITYSDK_OFFSET(0x124048C0)
#define DDMFPNIEPMP_IOHIGGPFDED_OFFSET UNITYSDK_OFFSET(0x12403DB0)
#define DDMFPNIEPMP_JEDMNOEBDON_OFFSET UNITYSDK_OFFSET(0x12403FA0)
#define DDMFPNIEPMP_JOBNIAONODF_OFFSET UNITYSDK_OFFSET(0x12404730)
#define DDMFPNIEPMP_KBBCDAFMPCF_OFFSET UNITYSDK_OFFSET(0x124047C0)
#define DDMFPNIEPMP_KIPFFGKIKGK_OFFSET UNITYSDK_OFFSET(0x12404250)
#define DDMFPNIEPMP_LEPAMNJODCC_OFFSET UNITYSDK_OFFSET(0x12404330)
#define DDMFPNIEPMP_MNEOEMEEBBK_OFFSET UNITYSDK_OFFSET(0x12403EE0)
#define DDMFPNIEPMP_NFFGPGNMJDK_OFFSET UNITYSDK_OFFSET(0x12404110)

inline static constexpr unsigned int DDMFPNIEPMP_TypeDefinitionIndex = 59504;

class DDMFPNIEPMP : public ::System::Object
{
public:
	static ::MoleMole::SlidingSubsystem** StaticGet_EDJJBCELNPK()
	{
		return (::MoleMole::SlidingSubsystem**)Il2CppClass::FromTypeDefinitionIndex(DDMFPNIEPMP_TypeDefinitionIndex)->GetStaticField(0x50700);
	}

	static ::System::Void DOMAEKJGGKK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_DOMAEKJGGKK_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::System::Void IOHIGGPFDED(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_IOHIGGPFDED_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HIBLGJPNEBD(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_HIBLGJPNEBD_OFFSET))(KECKGDFIALJ, MDPPNMIPDMP);
	}

	static ::System::Void FNNNNOBKNPM()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDMFPNIEPMP_FNNNNOBKNPM_OFFSET))();
	}

	static ::System::Void MNEOEMEEBBK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_MNEOEMEEBBK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean CNCNEALEIJH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_CNCNEALEIJH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean JEDMNOEBDON(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3& EGEGIMGMJHN)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_JEDMNOEBDON_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::System::Void EEFJPFNJKCA(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_EEFJPFNJKCA_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::System::Void FONJKAEHFFI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Battle::Entity* PNJNAAHKAIB, ::System::String* FDCGJNLIJMH)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_FONJKAEHFFI_OFFSET))(KECKGDFIALJ, PNJNAAHKAIB, FDCGJNLIJMH);
	}

	static ::System::Void NFFGPGNMJDK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_NFFGPGNMJDK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void KIPFFGKIKGK(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_KIPFFGKIKGK_OFFSET))(KECKGDFIALJ, AELLPLBJELA, EGEGIMGMJHN);
	}

	static ::System::Void LEPAMNJODCC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_LEPAMNJODCC_OFFSET))(KECKGDFIALJ, AELLPLBJELA, EGEGIMGMJHN);
	}

	static ::System::Void CPFIOPKICLF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* AELLPLBJELA)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_CPFIOPKICLF_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::System::Void AOIOCCCJEHO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_AOIOCCCJEHO_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void IKFHMJGMKNH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_IKFHMJGMKNH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void ABJDOEBDOAN(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_ABJDOEBDOAN_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void EJOLOFCLGAD(::MoleMole::SlidingSubsystem* OMPHGGCEIBD)
	{
		return ((::System::Void(*)(::MoleMole::SlidingSubsystem*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_EJOLOFCLGAD_OFFSET))(OMPHGGCEIBD);
	}

	static ::System::Void GOKGHHGNPDK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_GOKGHHGNPDK_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void JOBNIAONODF()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDMFPNIEPMP_JOBNIAONODF_OFFSET))();
	}

	static ::System::Void KBBCDAFMPCF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single LPEFECLJHJN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_KBBCDAFMPCF_OFFSET))(KECKGDFIALJ, LPEFECLJHJN);
	}

	static ::System::Void BFGDJHLIDBC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_BFGDJHLIDBC_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::System::Boolean IMNEKCLPJCH(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_IMNEKCLPJCH_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void CPCOGCDGKEC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_CPCOGCDGKEC_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::System::Void CGCINLPBNDI(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_CGCINLPBNDI_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::System::Void HIONJFAHJFF(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Battle::Entity* PNJNAAHKAIB)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_HIONJFAHJFF_OFFSET))(KECKGDFIALJ, PNJNAAHKAIB);
	}

	static ::System::Void FNGNGFCHBIB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_FNGNGFCHBIB_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void HIDONJNEPNK(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DDMFPNIEPMP_HIDONJNEPNK_OFFSET))(KECKGDFIALJ);
	}
};
