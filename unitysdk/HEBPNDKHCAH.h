#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define HEBPNDKHCAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15C43FF0)
#define HEBPNDKHCAH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x15C44050)
#define HEBPNDKHCAH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x15C44000)

	class HEBPNDKHCAH : public ::System::Object
	{
	public:
		::System::String* IEMJLAKHBJJ; // 0x10
		::System::String* EALNBEBALJM; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HEBPNDKHCAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPNDKHCAH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + HEBPNDKHCAH_GETEVENTTYPE_OFFSET))(this);
		}

	};
