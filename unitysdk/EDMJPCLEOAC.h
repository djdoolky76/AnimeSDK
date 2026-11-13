#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define EDMJPCLEOAC_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x186D0AC0)
#define EDMJPCLEOAC_CTOR_OFFSET UNITYSDK_OFFSET(0x186D09F0)
#define EDMJPCLEOAC_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x186D0B10)
#define EDMJPCLEOAC_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x186D0A00)

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
