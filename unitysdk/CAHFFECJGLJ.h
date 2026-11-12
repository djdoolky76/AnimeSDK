#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightBonusDropData; }
namespace System { class String; }

#define CAHFFECJGLJ_CGHBELIKMGJ_OFFSET UNITYSDK_OFFSET(0xCB6B210)
#define CAHFFECJGLJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCB6B050)
#define CAHFFECJGLJ_IDBHAGEDEIP_OFFSET UNITYSDK_OFFSET(0xCB6B3A0)
#define CAHFFECJGLJ_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xCB6B060)

inline static constexpr unsigned int CAHFFECJGLJ_TypeDefinitionIndex = 65927;

	class CAHFFECJGLJ : public ::System::Object
	{
	public:
		::RPG::Client::GridFightBonusDropData* MOJNEAEIHAB; // 0x10
		::System::Void _ctor(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + CAHFFECJGLJ_CTOR_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHFFECJGLJ_JNACBACPDEM_OFFSET))(this);
		}

		::System::String* CGHBELIKMGJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHFFECJGLJ_CGHBELIKMGJ_OFFSET))(this);
		}

		::System::String* IDBHAGEDEIP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAHFFECJGLJ_IDBHAGEDEIP_OFFSET))(this);
		}

	};
