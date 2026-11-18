#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APNCODNOFLH_IOLGAFLHBCM.h"
#include "unitysdk/PDKLKACMPHA_LMCEBBIJHNB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define PDKLKACMPHA_AMMOAKKJIED_OFFSET UNITYSDK_OFFSET(0x11B60C80)
#define PDKLKACMPHA_HOMAKBICCDD_OFFSET UNITYSDK_OFFSET(0x11B60B20)
#define PDKLKACMPHA__CCTOR_OFFSET UNITYSDK_OFFSET(0x11B60B10)

inline static constexpr unsigned int PDKLKACMPHA_TypeDefinitionIndex = 39738;

class PDKLKACMPHA : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_PEDANHBGIGE()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PDKLKACMPHA_TypeDefinitionIndex)->GetStaticField(0x14370);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKLKACMPHA__CCTOR_OFFSET))();
	}

	static ::System::Single HOMAKBICCDD(::MoleMole::EntityHandle KECKGDFIALJ, ::PDKLKACMPHA_LMCEBBIJHNB MHPNHKJPIEH, ::APNCODNOFLH_IOLGAFLHBCM CCIHLEDKGGD)
	{
		return ((::System::Single(*)(::MoleMole::EntityHandle, ::PDKLKACMPHA_LMCEBBIJHNB, ::APNCODNOFLH_IOLGAFLHBCM))((::PBYTE)hIl2Cpp + PDKLKACMPHA_HOMAKBICCDD_OFFSET))(KECKGDFIALJ, MHPNHKJPIEH, CCIHLEDKGGD);
	}

	static ::System::Boolean AMMOAKKJIED(::MoleMole::EntityHandle KECKGDFIALJ, ::PDKLKACMPHA_LMCEBBIJHNB MHPNHKJPIEH)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle, ::PDKLKACMPHA_LMCEBBIJHNB))((::PBYTE)hIl2Cpp + PDKLKACMPHA_AMMOAKKJIED_OFFSET))(KECKGDFIALJ, MHPNHKJPIEH);
	}
};
