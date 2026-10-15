#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class PGIOCLJPBOC;
namespace RPG::Client { class LuaUIController; }
namespace System { class Exception; }

#define PGIOCLJPBOC___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC2214D0)
#define PGIOCLJPBOC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET UNITYSDK_OFFSET(0xC221A40)
#define PGIOCLJPBOC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET UNITYSDK_OFFSET(0xC221C00)

inline static constexpr unsigned int PGIOCLJPBOC___c__DisplayClass2_0_TypeDefinitionIndex = 58481;

	class PGIOCLJPBOC___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::PGIOCLJPBOC* __4__this; // 0x10
		::System::Guid transID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGIOCLJPBOC___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnTaskBegin_b__0(::RPG::Client::LuaUIController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LuaUIController*))((::PBYTE)hIl2Cpp + PGIOCLJPBOC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__0_OFFSET))(this, a1);
		}

		::System::Void _OnTaskBegin_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + PGIOCLJPBOC___C__DISPLAYCLASS2_0__ONTASKBEGIN_B__1_OFFSET))(this, a1);
		}

	};
