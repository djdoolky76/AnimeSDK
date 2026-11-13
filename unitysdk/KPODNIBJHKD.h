#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define KPODNIBJHKD_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x1913A770)
#define KPODNIBJHKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1913A6B0)
#define KPODNIBJHKD_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x1913A7F0)
#define KPODNIBJHKD_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x1913A6C0)

inline static constexpr unsigned int KPODNIBJHKD_TypeDefinitionIndex = 65920;

	class KPODNIBJHKD : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + KPODNIBJHKD_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPODNIBJHKD_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPODNIBJHKD_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPODNIBJHKD_IDBHAGEDEIP_OFFSET))(this);
		}

	};
