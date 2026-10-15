#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define IJLIGGBIDBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB77800)

	class IJLIGGBIDBA : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* PBLPLDJKPEI; // 0x10
		::System::String* GINFOPOAKHK; // 0x18
		::System::UInt32 BOKJJKFCFME; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJLIGGBIDBA_CTOR_OFFSET))(this);
		}

	};
