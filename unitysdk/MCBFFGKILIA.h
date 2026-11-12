#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define MCBFFGKILIA_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xC0D9080)
#define MCBFFGKILIA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0D8FB0)
#define MCBFFGKILIA_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xC0D9140)
#define MCBFFGKILIA_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xC0D8FC0)

inline static constexpr unsigned int MCBFFGKILIA_TypeDefinitionIndex = 65928;

	class MCBFFGKILIA : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + MCBFFGKILIA_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBFFGKILIA_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBFFGKILIA_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCBFFGKILIA_IDBHAGEDEIP_OFFSET))(this);
		}

	};
