#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define GDLNHBJAIPO_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x17CA72F0)
#define GDLNHBJAIPO_CTOR_OFFSET UNITYSDK_OFFSET(0x17CA7220)
#define GDLNHBJAIPO_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x17CA73B0)
#define GDLNHBJAIPO_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x17CA7230)

inline static constexpr unsigned int GDLNHBJAIPO_TypeDefinitionIndex = 65932;

	class GDLNHBJAIPO : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + GDLNHBJAIPO_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLNHBJAIPO_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLNHBJAIPO_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLNHBJAIPO_IDBHAGEDEIP_OFFSET))(this);
		}

	};
