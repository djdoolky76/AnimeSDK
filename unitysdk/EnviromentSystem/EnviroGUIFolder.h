#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROGUIFOLDER_CTOR_OFFSET UNITYSDK_OFFSET(0x16505B00)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroGUIFolder_TypeDefinitionIndex = 50698;

	class EnviroGUIFolder : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIFOLDER_CTOR_OFFSET))(this, a1);
		}

	};
}
