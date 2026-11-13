#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define FOKIDMGMBIM_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x18756990)
#define FOKIDMGMBIM_CTOR_OFFSET UNITYSDK_OFFSET(0x187568C0)
#define FOKIDMGMBIM_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x187569E0)
#define FOKIDMGMBIM_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x187568D0)

inline static constexpr unsigned int FOKIDMGMBIM_TypeDefinitionIndex = 65922;

	class FOKIDMGMBIM : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + FOKIDMGMBIM_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKIDMGMBIM_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKIDMGMBIM_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOKIDMGMBIM_IDBHAGEDEIP_OFFSET))(this);
		}

	};
