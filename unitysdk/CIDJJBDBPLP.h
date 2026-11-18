#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDIFHHEMPHF.h"

class LCOPOAIFNGL;
namespace MoleMole { class UIPushFaceV1PopWindowController; }
namespace UnityEngine { class GameObject; }

#define CIDJJBDBPLP_ACLGCONHPEF_OFFSET UNITYSDK_OFFSET(0x18DD2810)
#define CIDJJBDBPLP_AFNHMJPHPCA_OFFSET UNITYSDK_OFFSET(0x18DD25D0)
#define CIDJJBDBPLP_CPGOLEEGHIN_OFFSET UNITYSDK_OFFSET(0x18DD2B70)
#define CIDJJBDBPLP_DIGPPHLAIEC_OFFSET UNITYSDK_OFFSET(0x18DD2C00)
#define CIDJJBDBPLP_KEJNGFOKLMK_OFFSET UNITYSDK_OFFSET(0x18DD2AE0)
#define CIDJJBDBPLP_KKHGLKGIDMA_OFFSET UNITYSDK_OFFSET(0x18DD22D0)
#define CIDJJBDBPLP__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD2AD0)

inline static constexpr unsigned int CIDJJBDBPLP_TypeDefinitionIndex = 82957;

class CIDJJBDBPLP : public ::JDIFHHEMPHF
{
public:
	::LCOPOAIFNGL* KMMKMGDHCOI; // 0x18
	::UnityEngine::GameObject* JPJHOGEHNBG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDJJBDBPLP__CTOR_OFFSET))(this);
	}

	::System::Void KKHGLKGIDMA(::MoleMole::UIPushFaceV1PopWindowController* JGFKBBFIPJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIPushFaceV1PopWindowController*))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_KKHGLKGIDMA_OFFSET))(this, JGFKBBFIPJF);
	}

	::System::Void ACLGCONHPEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_ACLGCONHPEF_OFFSET))(this);
	}

	::System::Void KEJNGFOKLMK(::MoleMole::UIPushFaceV1PopWindowController* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIPushFaceV1PopWindowController*))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_KEJNGFOKLMK_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void CPGOLEEGHIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_CPGOLEEGHIN_OFFSET))(this);
	}

	::System::Void DIGPPHLAIEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_DIGPPHLAIEC_OFFSET))(this);
	}

	::System::Void AFNHMJPHPCA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDJJBDBPLP_AFNHMJPHPCA_OFFSET))(this);
	}
};
