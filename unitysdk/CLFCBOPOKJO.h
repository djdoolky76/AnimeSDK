#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace System { class String; }

#define CLFCBOPOKJO_CTOR_OFFSET UNITYSDK_OFFSET(0xD77BD40)
#define CLFCBOPOKJO_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xD77BCF0)

	class CLFCBOPOKJO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFCBOPOKJO_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP(::System::String* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLFCBOPOKJO_MNGGAOFNGIP_OFFSET))(this, a1);
		}

	};
