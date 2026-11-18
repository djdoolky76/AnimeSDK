#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KODEBDFMIIK;
namespace MoleMole::Battle { class Entity; }

#define FGICJINDMPD_AGAPMDPNNFJ_OFFSET UNITYSDK_OFFSET(0x116AFFB0)
#define FGICJINDMPD_FCMIEMNNHCE_OFFSET UNITYSDK_OFFSET(0x116AFF60)
#define FGICJINDMPD_FHMLMPAKAFJ_OFFSET UNITYSDK_OFFSET(0x116B0040)
#define FGICJINDMPD_HPDIJCKCDLM_OFFSET UNITYSDK_OFFSET(0x116AFEB0)
#define FGICJINDMPD_IOEKALCPACP_OFFSET UNITYSDK_OFFSET(0x116AFFF0)
#define FGICJINDMPD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x116AFF10)
#define FGICJINDMPD__CTOR_OFFSET UNITYSDK_OFFSET(0x116B0030)

inline static constexpr unsigned int FGICJINDMPD_TypeDefinitionIndex = 84999;

class FGICJINDMPD : public ::System::Object
{
public:
	::KODEBDFMIIK* FJDECJDDHNA; // 0x10
	::MoleMole::Battle::Entity* EONLLNLBEJA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGICJINDMPD__CTOR_OFFSET))(this);
	}

	::System::Void HPDIJCKCDLM(::KODEBDFMIIK* BEGCPGCFPJD, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::KODEBDFMIIK*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + FGICJINDMPD_HPDIJCKCDLM_OFFSET))(this, BEGCPGCFPJD, KECKGDFIALJ);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGICJINDMPD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void FCMIEMNNHCE(::System::Boolean OBGBAOOJKAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGICJINDMPD_FCMIEMNNHCE_OFFSET))(this, OBGBAOOJKAG);
	}

	::System::Void AGAPMDPNNFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGICJINDMPD_AGAPMDPNNFJ_OFFSET))(this);
	}

	::System::Void IOEKALCPACP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGICJINDMPD_IOEKALCPACP_OFFSET))(this);
	}

	::System::Void FHMLMPAKAFJ(::System::Boolean OBGBAOOJKAG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGICJINDMPD_FHMLMPAKAFJ_OFFSET))(this, OBGBAOOJKAG);
	}
};
