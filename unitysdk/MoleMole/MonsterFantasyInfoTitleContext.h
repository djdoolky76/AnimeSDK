#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_MONSTERFANTASYINFOTITLECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14B0B5D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterFantasyInfoTitleContext_TypeDefinitionIndex = 58193;

	class MonsterFantasyInfoTitleContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Il2CppArray<::System::Object*>* TextArgs; // 0x28
		::System::String* TextKey; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYINFOTITLECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
