#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIBMJLOJLKD;
class POODDBJFAPA;
namespace MoleMole { class UIActivePropsPageController; }
namespace UnityEngine { class Transform; }

#define DJFILCFPGAE_ALMJJNEELII_OFFSET UNITYSDK_OFFSET(0x16BA2C00)
#define DJFILCFPGAE_DLJEAGFGEBN_OFFSET UNITYSDK_OFFSET(0x16BA2AE0)
#define DJFILCFPGAE_EBAAGGHDBEF_OFFSET UNITYSDK_OFFSET(0x16BA2AA0)
#define DJFILCFPGAE_JAJEJFJCKOA_OFFSET UNITYSDK_OFFSET(0x16BA2B20)
#define DJFILCFPGAE_JGHACMHKKBE_OFFSET UNITYSDK_OFFSET(0x16BA2BC0)
#define DJFILCFPGAE_OBOCGNMDENH_OFFSET UNITYSDK_OFFSET(0x16BA2B70)
#define DJFILCFPGAE_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x16BA2A30)
#define DJFILCFPGAE__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA2910)

inline static constexpr unsigned int DJFILCFPGAE_TypeDefinitionIndex = 79246;

class DJFILCFPGAE : public ::System::Object
{
public:
	::UnityEngine::Transform* IAPKABMDJNF; // 0x10
	::GIBMJLOJLKD* AEJAMJDBHAM; // 0x18
	::MoleMole::UIActivePropsPageController* JNLBPMKIFNK; // 0x20
	::POODDBJFAPA* IDACHHOOIDB; // 0x28

	::System::Void _ctor(::GIBMJLOJLKD* AEJAMJDBHAM, ::MoleMole::UIActivePropsPageController* JNLBPMKIFNK, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::GIBMJLOJLKD*, ::MoleMole::UIActivePropsPageController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DJFILCFPGAE__CTOR_OFFSET))(this, AEJAMJDBHAM, JNLBPMKIFNK, IAPKABMDJNF);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean EBFCACIEKBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DJFILCFPGAE_OKMEFGGMPFG_OFFSET))(this, EBFCACIEKBC);
	}

	::System::Void EBAAGGHDBEF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFILCFPGAE_EBAAGGHDBEF_OFFSET))(this);
	}

	::System::Void DLJEAGFGEBN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFILCFPGAE_DLJEAGFGEBN_OFFSET))(this);
	}

	::System::Void JAJEJFJCKOA(::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DJFILCFPGAE_JAJEJFJCKOA_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}

	::System::Void OBOCGNMDENH(::System::Int32 ABHBKFJKINO, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DJFILCFPGAE_OBOCGNMDENH_OFFSET))(this, ABHBKFJKINO, GKBJOPJKCLB);
	}

	::System::Void JGHACMHKKBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFILCFPGAE_JGHACMHKKBE_OFFSET))(this);
	}

	::System::Void ALMJJNEELII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFILCFPGAE_ALMJJNEELII_OFFSET))(this);
	}
};
