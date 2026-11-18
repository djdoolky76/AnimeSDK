#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PNJDGHBEMLK;
namespace UnityEngine { class Texture; }

#define MFPPANAELJJ_ODLIEIEEAAI_EGOBPHLGKEP_OFFSET UNITYSDK_OFFSET(0x17D21F50)
#define MFPPANAELJJ_ODLIEIEEAAI_GCPOCEAOGFI_OFFSET UNITYSDK_OFFSET(0x17D21EE0)
#define MFPPANAELJJ_ODLIEIEEAAI__CTOR_OFFSET UNITYSDK_OFFSET(0x17D21ED0)

inline static constexpr unsigned int MFPPANAELJJ_ODLIEIEEAAI_TypeDefinitionIndex = 77765;

class MFPPANAELJJ_ODLIEIEEAAI : public ::System::Object
{
public:
	::PNJDGHBEMLK* MCMCPFDOEDK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFPPANAELJJ_ODLIEIEEAAI__CTOR_OFFSET))(this);
	}

	::System::Void GCPOCEAOGFI(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + MFPPANAELJJ_ODLIEIEEAAI_GCPOCEAOGFI_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}

	::System::Void EGOBPHLGKEP(::UnityEngine::Texture* IMLLDOHDCNC, ::System::Int32 HBJOLKHGGDD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture*, ::System::Int32))((::PBYTE)hIl2Cpp + MFPPANAELJJ_ODLIEIEEAAI_EGOBPHLGKEP_OFFSET))(this, IMLLDOHDCNC, HBJOLKHGGDD);
	}
};
