#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define INMLOJBGLMH_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xB828EA0)
#define INMLOJBGLMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB828DD0)
#define INMLOJBGLMH_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xB828F60)
#define INMLOJBGLMH_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xB828DE0)

inline static constexpr unsigned int INMLOJBGLMH_TypeDefinitionIndex = 65933;

	class INMLOJBGLMH : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + INMLOJBGLMH_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLOJBGLMH_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLOJBGLMH_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INMLOJBGLMH_IDBHAGEDEIP_OFFSET))(this);
		}

	};
