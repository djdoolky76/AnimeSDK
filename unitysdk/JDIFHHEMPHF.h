#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FPBOLBNCDIP;
namespace MoleMole { class UIPushFaceV1PopWindowController; }

#define JDIFHHEMPHF_ACLGCONHPEF_OFFSET UNITYSDK_OFFSET(0x198A11E0)
#define JDIFHHEMPHF_KKHGLKGIDMA_OFFSET UNITYSDK_OFFSET(0x198A1190)
#define JDIFHHEMPHF__CTOR_OFFSET UNITYSDK_OFFSET(0x198A1220)

inline static constexpr unsigned int JDIFHHEMPHF_TypeDefinitionIndex = 49738;

class JDIFHHEMPHF : public ::System::Object
{
public:
	::FPBOLBNCDIP* JAHEDLAAHJJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIFHHEMPHF__CTOR_OFFSET))(this);
	}

	::System::Void KKHGLKGIDMA(::MoleMole::UIPushFaceV1PopWindowController* JGFKBBFIPJF)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIPushFaceV1PopWindowController*))((::PBYTE)hIl2Cpp + JDIFHHEMPHF_KKHGLKGIDMA_OFFSET))(this, JGFKBBFIPJF);
	}

	::System::Void ACLGCONHPEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDIFHHEMPHF_ACLGCONHPEF_OFFSET))(this);
	}
};
