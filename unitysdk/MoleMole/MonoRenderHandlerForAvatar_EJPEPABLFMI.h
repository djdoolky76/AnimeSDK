#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/MaterialPropertyType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_MONORENDERHANDLERFORAVATAR_EJPEPABLFMI__CTOR_OFFSET UNITYSDK_OFFSET(0x131082F0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoRenderHandlerForAvatar_EJPEPABLFMI_TypeDefinitionIndex = 52704;

	class MonoRenderHandlerForAvatar_EJPEPABLFMI : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* MGMEOOEENEC; // 0x10
		::System::String* OMACLKGLLJH; // 0x18
		::MoleMole::Config::MaterialPropertyType JOPGMOJBMCH; // 0x20
		::System::Int32 DFJAGCHIIHD; // 0x24

		::System::Void _ctor(::MoleMole::Config::MaterialPropertyType JOPGMOJBMCH, ::System::String* OMACLKGLLJH, ::System::Int32 DFIGIONBMAL, ::Il2CppArray<::System::Object*>* MGMEOOEENEC)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MaterialPropertyType, ::System::String*, ::System::Int32, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONORENDERHANDLERFORAVATAR_EJPEPABLFMI__CTOR_OFFSET))(this, JOPGMOJBMCH, OMACLKGLLJH, DFIGIONBMAL, MGMEOOEENEC);
		}
	};
}
