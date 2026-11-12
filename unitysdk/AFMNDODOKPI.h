#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define AFMNDODOKPI_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xD5CD0D0)
#define AFMNDODOKPI_CTOR_OFFSET UNITYSDK_OFFSET(0xD5CD000)
#define AFMNDODOKPI_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xD5CD190)
#define AFMNDODOKPI_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xD5CD010)

inline static constexpr unsigned int AFMNDODOKPI_TypeDefinitionIndex = 65931;

	class AFMNDODOKPI : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + AFMNDODOKPI_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNDODOKPI_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNDODOKPI_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFMNDODOKPI_IDBHAGEDEIP_OFFSET))(this);
		}

	};
