#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class InteractEntry; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define PHKAIPMLKNJ_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x1D627990)
#define PHKAIPMLKNJ_CAFEDKLEJJM_OFFSET UNITYSDK_OFFSET(0x1D627B50)
#define PHKAIPMLKNJ_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x1D626F20)
#define PHKAIPMLKNJ_EBAAGGHDBEF_OFFSET UNITYSDK_OFFSET(0x1D627A70)
#define PHKAIPMLKNJ_JOGEPELGJGO_OFFSET UNITYSDK_OFFSET(0x1D627B90)
#define PHKAIPMLKNJ_MNEJHDIKCGJ_OFFSET UNITYSDK_OFFSET(0x1D6279E0)
#define PHKAIPMLKNJ_OPGHDNMABCP_OFFSET UNITYSDK_OFFSET(0x1D627010)
#define PHKAIPMLKNJ_PLCJNBHECGC_OFFSET UNITYSDK_OFFSET(0x1D6275B0)
#define PHKAIPMLKNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1D626F00)

inline static constexpr unsigned int PHKAIPMLKNJ_TypeDefinitionIndex = 89036;

class PHKAIPMLKNJ : public ::IJLOBIGIEDO
{
public:
	::UnityEngine::Transform* MGDILBONGBE; // 0x50
	::UnityEngine::Vector3 BLKBBEJNLGJ; // 0x58
	::System::Boolean EOPKGAEDCEG; // 0x64
	::System::Boolean JHHGNJHIKBL; // 0x65
	::System::Byte _padding0[0x2];
	::System::Single GMABMANCDMM; // 0x68
	::UnityEngine::Vector2 BHFNDCPPHOL; // 0x6C
	::System::UInt32 BKLGNCBNEGM; // 0x74
	::System::UInt32 EKIBIPOBBAH; // 0x78
	::System::Single HNGEPGHNONC; // 0x7C

	::System::Void _ctor(::MoleMole::Config::InteractEntry* AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::InteractEntry*))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ__CTOR_OFFSET))(this, AAIJGGIEOGK);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void PLCJNBHECGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_PLCJNBHECGC_OFFSET))(this);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Void OPGHDNMABCP(::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_OPGHDNMABCP_OFFSET))(this, DJHFOGHIFEJ);
	}

	::System::Void MNEJHDIKCGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_MNEJHDIKCGJ_OFFSET))(this);
	}

	::System::Void EBAAGGHDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_EBAAGGHDBEF_OFFSET))(this);
	}

	::System::Void CAFEDKLEJJM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_CAFEDKLEJJM_OFFSET))(this);
	}

	::System::Void JOGEPELGJGO(::UnityEngine::Vector2 NAEIGGOBNCG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PHKAIPMLKNJ_JOGEPELGJGO_OFFSET))(this, NAEIGGOBNCG);
	}
};
