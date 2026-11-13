#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define LJMDLKDFCEC_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0x18CC25F0)
#define LJMDLKDFCEC_CTOR_OFFSET UNITYSDK_OFFSET(0x18CC2520)
#define LJMDLKDFCEC_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0x18CC2640)
#define LJMDLKDFCEC_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0x18CC2530)

inline static constexpr unsigned int LJMDLKDFCEC_TypeDefinitionIndex = 65926;

	class LJMDLKDFCEC : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + LJMDLKDFCEC_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMDLKDFCEC_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMDLKDFCEC_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJMDLKDFCEC_IDBHAGEDEIP_OFFSET))(this);
		}

	};
