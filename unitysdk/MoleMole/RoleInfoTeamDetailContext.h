#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class DAEPFMAMMKE;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_ROLEINFOTEAMDETAILCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1810FF40)

namespace MoleMole
{
	inline static constexpr unsigned int RoleInfoTeamDetailContext_TypeDefinitionIndex = 72379;

	class RoleInfoTeamDetailContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::DAEPFMAMMKE*>* teams; // 0x28
		::System::String* title; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ROLEINFOTEAMDETAILCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
