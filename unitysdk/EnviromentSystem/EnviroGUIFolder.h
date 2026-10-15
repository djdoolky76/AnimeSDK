#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroProperty.h"
namespace System { class String; }

#define ENVIROMENTSYSTEM_ENVIROGUIFOLDER_CTOR_OFFSET UNITYSDK_OFFSET(0x155F4B30)

namespace EnviromentSystem
{
	class EnviroGUIFolder : public ::EnviromentSystem::EnviroProperty
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROGUIFOLDER_CTOR_OFFSET))(this, a1);
		}

	};
}
