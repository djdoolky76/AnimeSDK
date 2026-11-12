#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define LKEMGKOLBNG_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xBFCFF90)
#define LKEMGKOLBNG_CTOR_OFFSET UNITYSDK_OFFSET(0xBFCFE20)
#define LKEMGKOLBNG_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xBFCFFE0)
#define LKEMGKOLBNG_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xBFCFE30)

inline static constexpr unsigned int LKEMGKOLBNG_TypeDefinitionIndex = 65934;

	class LKEMGKOLBNG : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + LKEMGKOLBNG_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEMGKOLBNG_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEMGKOLBNG_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEMGKOLBNG_IDBHAGEDEIP_OFFSET))(this);
		}

	};
