#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOONMNPCCNF.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CIBGIHKAIEA__CTOR_OFFSET UNITYSDK_OFFSET(0x11547AE0)

inline static constexpr unsigned int CIBGIHKAIEA_TypeDefinitionIndex = 75010;

class CIBGIHKAIEA : public ::IOONMNPCCNF
{
public:
	::System::Single KMJFCKMHPBL; // 0x18
	::System::Single IEHIIHDIMOC; // 0x1C
	::System::Single PMMGHMAEJNH; // 0x20
	::System::Single AGBDJMJABPC; // 0x24
	::UnityEngine::Vector2 HELNLNAILBF; // 0x28
	::System::Single NLCLAJPHFDP; // 0x30
	::System::Single NPLKFLKMFNP; // 0x34
	::UnityEngine::Vector4 CEEHFPKHCPI; // 0x38
	::System::Single MDKFMIJCMNJ; // 0x48
	::System::Single DOLLMMPIIGI; // 0x4C
	::System::Single BJKGAGJGDIB; // 0x50
	::System::Single MNFOHAHIIBE; // 0x54
	::System::Single ALJNLBEFICL; // 0x58
	::UnityEngine::Vector2 GLALMNKBAJJ; // 0x5C
	::System::Single AJHIDHAHCKG; // 0x64
	::UnityEngine::Vector4 JMCMAEPPDLJ; // 0x68
	::UnityEngine::Vector2 OPBFEBIEBCI; // 0x78
	::System::Single DGJABNCMLFP; // 0x80
	::System::Single EGNKHCFHJOJ; // 0x84
	::System::Single AGHECGBKKNE; // 0x88
	::System::Single DKDIHEOCNIA; // 0x8C
	::System::Boolean AOOOFBLNAOD; // 0x90
	::System::Boolean MPPIMOHCGDC; // 0x91
	::System::Boolean LBPIPEAKPDG; // 0x92
	::System::Byte _padding0[0x1];
	::System::Single ICBBPMGNJED; // 0x94

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIBGIHKAIEA__CTOR_OFFSET))(this);
	}
};
