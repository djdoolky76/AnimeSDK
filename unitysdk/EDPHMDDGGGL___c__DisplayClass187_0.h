#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDPHMDDGGGL;
namespace System { class Action; }

#define EDPHMDDGGGL___C__DISPLAYCLASS187_0_CTOR_OFFSET UNITYSDK_OFFSET(0x13340850)
#define EDPHMDDGGGL___C__DISPLAYCLASS187_0___RELOADINVISIBLERESOURCE_B__0_OFFSET UNITYSDK_OFFSET(0x1334C380)

inline static constexpr unsigned int EDPHMDDGGGL___c__DisplayClass187_0_TypeDefinitionIndex = 60723;

	class EDPHMDDGGGL___c__DisplayClass187_0 : public ::System::Object
	{
	public:
		::EDPHMDDGGGL* __4__this; // 0x10
		::System::Action* onAllFinish; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS187_0_CTOR_OFFSET))(this);
		}

		::System::Void __ReloadInvisibleResource_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDPHMDDGGGL___C__DISPLAYCLASS187_0___RELOADINVISIBLERESOURCE_B__0_OFFSET))(this);
		}

	};
