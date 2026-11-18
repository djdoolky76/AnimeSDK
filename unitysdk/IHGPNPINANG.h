#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DDJDDPMDDGH.h"
#include "unitysdk/IFNCGEHFDLK.h"
#include "unitysdk/KNPMCIAOJPL.h"
#include "unitysdk/MJNJAOOMAHK.h"
#include "unitysdk/MoleMole/Config/AidAttackType.h"
#include "unitysdk/MoleMole/Config/RelayAttackType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHGPNPINANG__CTOR_OFFSET UNITYSDK_OFFSET(0x15C0F660)

inline static constexpr unsigned int IHGPNPINANG_TypeDefinitionIndex = 83110;

class IHGPNPINANG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* FDPAMICJHOA; // 0x10
	::MoleMole::Battle::Entity* EGPJMOHOKME; // 0x18
	::DDJDDPMDDGH NBFLJDONJJL; // 0x20
	::System::Int32 CBNBLGOJHCB; // 0x24
	::IFNCGEHFDLK FKFLAFCGLAO; // 0x28
	::System::Single DCEOBAPNGIK; // 0x2C
	::System::Single GMCDKIIIGHI; // 0x30
	::UnityEngine::Vector3 CHJCBPAHKIJ; // 0x34
	::MoleMole::Config::AidAttackType ONLHMFMOEDH; // 0x40
	::System::Single JECNMAGBIEF; // 0x44
	::System::Boolean NEBFIIOIOIE; // 0x48
	::System::Boolean CBIFPLCDEEL; // 0x49
	::System::Byte _padding0[0x2];
	::MoleMole::Config::RelayAttackType CLMONGBBPFA; // 0x4C
	::KNPMCIAOJPL KIAKFOGFCAK; // 0x50
	::MJNJAOOMAHK CJGGCLDEBNK; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGPNPINANG__CTOR_OFFSET))(this);
	}
};
