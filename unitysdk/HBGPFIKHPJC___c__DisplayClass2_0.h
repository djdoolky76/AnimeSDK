#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class HBGPFIKHPJC;
namespace RPG::Client { class LuaUIController; }
namespace System { class Exception; }

#define HBGPFIKHPJC___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15BF7070)
#define HBGPFIKHPJC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0x15BF75E0)
#define HBGPFIKHPJC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0x15BF77A0)

inline static constexpr unsigned int HBGPFIKHPJC___c__DisplayClass2_0_TypeDefinitionIndex = 58477;

	class HBGPFIKHPJC___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::HBGPFIKHPJC* __4__this; // 0x10
		::System::Guid transID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBGPFIKHPJC___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + HBGPFIKHPJC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + HBGPFIKHPJC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET))(this, a1);
		}

	};
