#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataBind { class AsyncDestroyTrigger; }

#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_BHOLMAOEEOG_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CEABEE0)
#define MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_BHOLMAOEEOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEABDE0)

namespace MoleMole::DataBind
{
	inline static constexpr unsigned int AsyncDestroyTrigger_BHOLMAOEEOG_TypeDefinitionIndex = 34796;

	class AsyncDestroyTrigger_BHOLMAOEEOG : public ::System::Object
	{
	public:
		::MoleMole::DataBind::AsyncDestroyTrigger* LDNCGMNHANO; // 0x10

		::System::Void _ctor(::MoleMole::DataBind::AsyncDestroyTrigger* LDNCGMNHANO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::DataBind::AsyncDestroyTrigger*))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_BHOLMAOEEOG__CTOR_OFFSET))(this, LDNCGMNHANO);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DATABIND_ASYNCDESTROYTRIGGER_BHOLMAOEEOG_MOVENEXT_OFFSET))(this);
		}
	};
}
