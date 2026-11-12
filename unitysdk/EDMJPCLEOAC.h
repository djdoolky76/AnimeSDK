#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define EDMJPCLEOAC_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x140E99C0)
#define EDMJPCLEOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x140E98F0)
#define EDMJPCLEOAC_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x140E9A10)
#define EDMJPCLEOAC_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x140E9900)

inline static constexpr unsigned int EDMJPCLEOAC_TypeDefinitionIndex = 65924;

	class EDMJPCLEOAC : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + EDMJPCLEOAC_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMJPCLEOAC_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMJPCLEOAC_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMJPCLEOAC_IDBHAGEDEIP_OFFSET))(this);
		}

	};
