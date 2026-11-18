#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAMHFBEPBED.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class MGBBDIIJPFJ;
namespace MoleMole::Battle { class Entity; }

#define BCCBCEMEMHB_PAGEBHBEOPD_1_OFFSET UNITYSDK_OFFSET(0x727640)
#define BCCBCEMEMHB_PAGEBHBEOPD_OFFSET UNITYSDK_OFFSET(0x7275D0)

inline static constexpr unsigned int BCCBCEMEMHB_TypeDefinitionIndex = 91930;

struct alignas(8) BCCBCEMEMHB
{
	::MoleMole::Battle::Entity* JLEDCCADKIN; // 0x10
	::MGBBDIIJPFJ* KAPMNBNFOEB; // 0x18
	::FAMHFBEPBED MHJMABNLFJP; // 0x20
	::System::Byte _padding0[0x4];
	::MoleMole::Battle::Entity* DIGDOJFEBNJ; // 0x28
	::MGBBDIIJPFJ* JKLBIIEGEJC; // 0x30
	::FAMHFBEPBED KANJNPJGEPM; // 0x38
	::System::Boolean OFLAMIBCAAL; // 0x3C
	::System::Boolean FFAPMJGEFOE; // 0x3D
	::System::Boolean ANADOLJDIPD; // 0x3E
	::System::Boolean DMFJOMALADN; // 0x3F
	::System::Boolean GDFDGOLFGPO; // 0x40
	::System::Boolean KDINEALPACN; // 0x41
	::System::Boolean ELCDODINDCE; // 0x42
	::System::Boolean NJFAIMBNDKM; // 0x43
	::UnityEngine::Vector3 KEADIBAIKEN; // 0x44
	::UnityEngine::Vector3 DEIPJONPFNG; // 0x50
	::UnityEngine::Vector3 HPKJDCJEJCD; // 0x5C
	::UnityEngine::Vector3 HEGJFOBJCDD; // 0x68
	::UnityEngine::Vector3 JBFNBEECNLL; // 0x74
	::UnityEngine::Vector3 EIABLHCMGIB; // 0x80

	/*
	::System::Boolean PAGEBHBEOPD(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::LMFHKFOKACD& AEJAMJDBHAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::LMFHKFOKACD&))((::PBYTE)hIl2Cpp + BCCBCEMEMHB_PAGEBHBEOPD_OFFSET))(this, CBCNBLOFPLO, AEJAMJDBHAM);
	}
	*/

	/*
	::System::Boolean PAGEBHBEOPD_1(::System::UInt32 BEDODAFECEE, ::LMFHKFOKACD& AEJAMJDBHAM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::LMFHKFOKACD&))((::PBYTE)hIl2Cpp + BCCBCEMEMHB_PAGEBHBEOPD_1_OFFSET))(this, BEDODAFECEE, AEJAMJDBHAM);
	}
	*/
};
