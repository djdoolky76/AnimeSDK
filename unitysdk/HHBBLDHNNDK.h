#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define HHBBLDHNNDK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CB3FE0)
#define HHBBLDHNNDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15CB42D0)
#define HHBBLDHNNDK_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0x15CB4090)
#define HHBBLDHNNDK_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0x15CB4320)
#define HHBBLDHNNDK_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0x15CB4270)
#define HHBBLDHNNDK_OBGHNMKLOIB_OFFSET UNITYSDK_OFFSET(0x15CB4150)

inline static constexpr unsigned int HHBBLDHNNDK_TypeDefinitionIndex = 75452;

	class HHBBLDHNNDK : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::UInt32 IKOONPEBGLO; // 0x18
		::System::UInt32 HIIFNLNJBLE; // 0x1C
		::System::Boolean AFLGDFPEMNP; // 0x20
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void OBGHNMKLOIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_OBGHNMKLOIB_OFFSET))(this, a1);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HHBBLDHNNDK_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
