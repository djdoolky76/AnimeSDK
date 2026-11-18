#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BNFFIGFFCLN_ANEEAODLDAI_OFFSET UNITYSDK_OFFSET(0x1692E950)
#define BNFFIGFFCLN_CPLLHJKENNN_1_OFFSET UNITYSDK_OFFSET(0x1692EA10)
#define BNFFIGFFCLN_CPLLHJKENNN_OFFSET UNITYSDK_OFFSET(0x1692E8B0)
#define BNFFIGFFCLN_DBDCGBDNJPI_OFFSET UNITYSDK_OFFSET(0x1692E870)
#define BNFFIGFFCLN_GMMNBKFIGIB_OFFSET UNITYSDK_OFFSET(0x1692E700)
#define BNFFIGFFCLN_IJFOJIPBOND_OFFSET UNITYSDK_OFFSET(0x1692E430)
#define BNFFIGFFCLN_IMEMOFKDJJI_OFFSET UNITYSDK_OFFSET(0x1692E660)
#define BNFFIGFFCLN_LECCDHEGFLK_OFFSET UNITYSDK_OFFSET(0x1692E4A0)
#define BNFFIGFFCLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1692E300)

inline static constexpr unsigned int BNFFIGFFCLN_TypeDefinitionIndex = 88910;

class BNFFIGFFCLN : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Vector3>* FLBCICEBIKN; // 0x10
	::System::Boolean AHJAAHBFICB; // 0x18
	::System::Byte _padding0[0x3];
	::System::Single FPJHAFHNHHI; // 0x1C
	::UnityEngine::Vector3 PHLNJNLHJNG; // 0x20
	::System::Single COMPEJOJPOF; // 0x2C
	::System::Single PDDCPKPDADB; // 0x30
	::System::Single JDFGDEINACP; // 0x34
	::UnityEngine::Vector3 BIEGLMBBONJ; // 0x38
	::System::Single LJBDIFOIOLM; // 0x44
	::System::Single OAIDHHLPNHB; // 0x48

	::System::Void _ctor(::UnityEngine::Vector3 KKLKJNPFNNP, ::UnityEngine::Vector3 NNBPDLFCOJN, ::System::Single NOGFFHKCMDM, ::System::Single BGHFCKCANCH, ::System::Single AJDJFHLKDHC, ::System::Single PDCHLMDCOHP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BNFFIGFFCLN__CTOR_OFFSET))(this, KKLKJNPFNNP, NNBPDLFCOJN, NOGFFHKCMDM, BGHFCKCANCH, AJDJFHLKDHC, PDCHLMDCOHP);
	}

	::UnityEngine::Vector3 IJFOJIPBOND(::System::Single LBAGEIAJLDL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_IJFOJIPBOND_OFFSET))(this, LBAGEIAJLDL);
	}

	::System::Void LECCDHEGFLK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_LECCDHEGFLK_OFFSET))(this);
	}

	::System::Void IMEMOFKDJJI(::UnityEngine::Vector3 MHHLFFGIONH, ::System::Single LBAGEIAJLDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_IMEMOFKDJJI_OFFSET))(this, MHHLFFGIONH, LBAGEIAJLDL);
	}

	::System::Void GMMNBKFIGIB(::UnityEngine::Vector3 MHHLFFGIONH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_GMMNBKFIGIB_OFFSET))(this, MHHLFFGIONH);
	}

	::System::Void DBDCGBDNJPI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_DBDCGBDNJPI_OFFSET))(this);
	}

	::System::Void CPLLHJKENNN(::UnityEngine::Vector3 MHHLFFGIONH, ::System::Single LBAGEIAJLDL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_CPLLHJKENNN_OFFSET))(this, MHHLFFGIONH, LBAGEIAJLDL);
	}

	::System::Void ANEEAODLDAI(::UnityEngine::Vector3 BLOCDLJBKHJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_ANEEAODLDAI_OFFSET))(this, BLOCDLJBKHJ);
	}

	::System::Void CPLLHJKENNN_1(::UnityEngine::Vector3 MHHLFFGIONH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BNFFIGFFCLN_CPLLHJKENNN_1_OFFSET))(this, MHHLFFGIONH);
	}
};
