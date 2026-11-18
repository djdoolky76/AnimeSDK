#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CKOMBDCNEHB.h"
#include "unitysdk/OJJBIJLCNMK.h"

namespace UnityEngine { class Transform; }

#define NLHBKGIIDGP_DABGFBDHOGD_OFFSET UNITYSDK_OFFSET(0xE1A8FC0)
#define NLHBKGIIDGP_FEFPAEFEKFF_OFFSET UNITYSDK_OFFSET(0xE1A9010)
#define NLHBKGIIDGP_IGIANGJONFD_OFFSET UNITYSDK_OFFSET(0xE1A8E40)
#define NLHBKGIIDGP__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A8DF0)

inline static constexpr unsigned int NLHBKGIIDGP_TypeDefinitionIndex = 92262;

class NLHBKGIIDGP : public ::CKOMBDCNEHB
{
public:
	::System::Void _ctor(::UnityEngine::Transform* LFJAEIBHLOP, ::UnityEngine::Transform* NCDCDPOBDHF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NLHBKGIIDGP__CTOR_OFFSET))(this, LFJAEIBHLOP, NCDCDPOBDHF);
	}

	::System::Void IGIANGJONFD(::OJJBIJLCNMK BIKDMCCCMKC)
	{
		return ((::System::Void(*)(::PVOID, ::OJJBIJLCNMK))((::PBYTE)hIl2Cpp + NLHBKGIIDGP_IGIANGJONFD_OFFSET))(this, BIKDMCCCMKC);
	}

	::System::Void DABGFBDHOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHBKGIIDGP_DABGFBDHOGD_OFFSET))(this);
	}

	::System::Void FEFPAEFEKFF(::System::Int32 KANDGOGIJCF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLHBKGIIDGP_FEFPAEFEKFF_OFFSET))(this, KANDGOGIJCF);
	}
};
