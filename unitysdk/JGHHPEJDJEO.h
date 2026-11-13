#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDDEGIKOPMA;
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define JGHHPEJDJEO_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x1934E0A0)
#define JGHHPEJDJEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1934DE50)
#define JGHHPEJDJEO_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x1934E1F0)
#define JGHHPEJDJEO_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x1934DF50)

inline static constexpr unsigned int JGHHPEJDJEO_TypeDefinitionIndex = 65925;

	class JGHHPEJDJEO : public ::System::Object
	{
	public:
		::PDDEGIKOPMA* MDOBEIPOEON; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + JGHHPEJDJEO_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHPEJDJEO_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHPEJDJEO_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGHHPEJDJEO_IDBHAGEDEIP_OFFSET))(this);
		}

	};
