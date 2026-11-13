#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define LEPMKKLGDID_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x18C3BFB0)
#define LEPMKKLGDID_CTOR_OFFSET UNITYSDK_OFFSET(0x18C3BE70)
#define LEPMKKLGDID_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x18C3C000)
#define LEPMKKLGDID_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x18C3BE80)

inline static constexpr unsigned int LEPMKKLGDID_TypeDefinitionIndex = 65923;

	class LEPMKKLGDID : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + LEPMKKLGDID_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPMKKLGDID_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPMKKLGDID_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEPMKKLGDID_IDBHAGEDEIP_OFFSET))(this);
		}

	};
