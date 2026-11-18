#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MJHDNMKGLBJ.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }

#define LIPCGHAKGMM_FBBMFGKDFNF_OFFSET UNITYSDK_OFFSET(0x1A60D990)
#define LIPCGHAKGMM_GALGFCPKMGC_OFFSET UNITYSDK_OFFSET(0x1A60DBC0)
#define LIPCGHAKGMM_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x1A60D870)
#define LIPCGHAKGMM_JFDOOELFAOA_OFFSET UNITYSDK_OFFSET(0x1A60DA80)
#define LIPCGHAKGMM_MEFBHFEOKGH_OFFSET UNITYSDK_OFFSET(0x1A60DB30)
#define LIPCGHAKGMM_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1A60D7F0)
#define LIPCGHAKGMM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A60D8C0)
#define LIPCGHAKGMM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A60D940)

inline static constexpr unsigned int LIPCGHAKGMM_TypeDefinitionIndex = 71088;

class LIPCGHAKGMM : public ::MJHDNMKGLBJ
{
public:
	// static const ::System::Int32 IPAPPCOIEIF = 0x37; // 0x0
	::MoleMole::Battle::Entity* NCIFALAELJN; // 0x48
	::UnityEngine::MeshRenderer* EIGBLHEPLJO; // 0x50
	::UnityEngine::MaterialPropertyBlock* GDHJCAIOBHN; // 0x58
	::System::Int32 JEMGMDHJHBO; // 0x60
	::System::Single IAGMIECOHMC; // 0x64
	::System::Single PEIEOKBLNPI; // 0x68
	::System::Boolean DIPEJOLJANN; // 0x6C
	::System::Boolean FPPPCIHOFBE; // 0x6D
	::System::Boolean NGJMKJNOGJN; // 0x6E
	::System::Byte _padding0[0x1];
	::System::Single NNGKABDJDLI; // 0x70

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LIPCGHAKGMM__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCGHAKGMM__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCGHAKGMM_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCGHAKGMM_GETCLASSID_OFFSET))(this);
	}

	::UnityEngine::GameObject* FBBMFGKDFNF()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCGHAKGMM_FBBMFGKDFNF_OFFSET))(this);
	}

	static ::LIPCGHAKGMM* JFDOOELFAOA()
	{
		return ((::LIPCGHAKGMM*(*)())((::PBYTE)hIl2Cpp + LIPCGHAKGMM_JFDOOELFAOA_OFFSET))();
	}

	::System::Int32 MEFBHFEOKGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LIPCGHAKGMM_MEFBHFEOKGH_OFFSET))(this);
	}

	::System::Void GALGFCPKMGC(::MoleMole::Battle::Entity* HBKBNNKEEIA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LIPCGHAKGMM_GALGFCPKMGC_OFFSET))(this, HBKBNNKEEIA);
	}
};
