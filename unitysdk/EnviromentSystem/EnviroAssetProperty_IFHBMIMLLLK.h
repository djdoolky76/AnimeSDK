#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Object; }

#define ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_IFHBMIMLLLK_CTOR_OFFSET UNITYSDK_OFFSET(0x155E6AA0)

namespace EnviromentSystem
{
	class EnviroAssetProperty_IFHBMIMLLLK : public ::System::Object
	{
	public:
		::UnityEngine::Object* JLMLMKIEMKA; // 0x10
		::System::String* CDMFNHJGGKF; // 0x18
		::System::Int32 DBDIHPKHGGE; // 0x20
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROASSETPROPERTY_IFHBMIMLLLK_CTOR_OFFSET))(this, a1);
		}

	};
}
