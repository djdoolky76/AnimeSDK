#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LoopCGConfigRow; }
namespace System { class String; }

#define GPNMGGINMFC___C__DISPLAYCLASS24_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15B586D0)
#define GPNMGGINMFC___C__DISPLAYCLASS24_0__GETLOOPCGKEYBYPATH_B__0_OFFSET UNITYSDK_OFFSET(0x15B58B00)

inline static constexpr unsigned int GPNMGGINMFC___c__DisplayClass24_0_TypeDefinitionIndex = 73224;

	class GPNMGGINMFC___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::System::String* compareFileName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPNMGGINMFC___C__DISPLAYCLASS24_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetLoopCGKeyByPath_b__0(::RPG::GameCore::LoopCGConfigRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LoopCGConfigRow*))((::PBYTE)hIl2Cpp + GPNMGGINMFC___C__DISPLAYCLASS24_0__GETLOOPCGKEYBYPATH_B__0_OFFSET))(this, a1);
		}

	};
