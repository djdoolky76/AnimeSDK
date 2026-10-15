#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayItemViewModel; }
namespace System { class Object; }

#define MMIFIJBCHNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D0BA0)

	class MMIFIJBCHNH : public ::System::Object
	{
	public:
		::RPG::Client::ChenLingFes::ChenLingFesGameplayItemViewModel* JCCKNKAFHAJ; // 0x10
		::System::Boolean GNDCCBNILML; // 0x18
		::System::Void _ctor(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMIFIJBCHNH_CTOR_OFFSET))(this, a1);
		}

	};
