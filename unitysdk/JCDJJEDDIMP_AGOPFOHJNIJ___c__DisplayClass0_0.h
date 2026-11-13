#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class LuaUIController; }

#define JCDJJEDDIMP_AGOPFOHJNIJ___C__DISPLAYCLASS0_0_CTOR_OFFSET UNITYSDK_OFFSET(0x19A86670)
#define JCDJJEDDIMP_AGOPFOHJNIJ___C__DISPLAYCLASS0_0__ONENTER_B__1_OFFSET UNITYSDK_OFFSET(0x19A86680)

inline static constexpr unsigned int JCDJJEDDIMP_AGOPFOHJNIJ___c__DisplayClass0_0_TypeDefinitionIndex = 66127;

	class JCDJJEDDIMP_AGOPFOHJNIJ___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::LuaUIController* portalBuffSelect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ___C__DISPLAYCLASS0_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnEnter_b__1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCDJJEDDIMP_AGOPFOHJNIJ___C__DISPLAYCLASS0_0__ONENTER_B__1_OFFSET))(this);
		}

	};
