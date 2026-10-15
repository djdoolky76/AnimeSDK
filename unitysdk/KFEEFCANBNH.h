#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define KFEEFCANBNH_CTOR_OFFSET UNITYSDK_OFFSET(0xB3968F0)
#define KFEEFCANBNH_IJOONKNIDKI_OFFSET UNITYSDK_OFFSET(0xB396900)
#define KFEEFCANBNH_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB396960)

	class KFEEFCANBNH : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KFEEFCANBNH_CTOR_OFFSET))(this, a1);
		}

		::System::Object* IJOONKNIDKI()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEFCANBNH_IJOONKNIDKI_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint MNGGAOFNGIP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KFEEFCANBNH_MNGGAOFNGIP_OFFSET))(this);
		}

	};
