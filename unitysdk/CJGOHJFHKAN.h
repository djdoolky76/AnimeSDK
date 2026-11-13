#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::ActivityIdleLive { class IdleLiveNode; }
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define CJGOHJFHKAN_CTOR_OFFSET UNITYSDK_OFFSET(0x177D5EB0)
#define CJGOHJFHKAN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x177D64B0)
#define CJGOHJFHKAN_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0x177D63F0)
#define CJGOHJFHKAN_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0x177D6510)
#define CJGOHJFHKAN_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0x177D6380)
#define CJGOHJFHKAN_OBGHNMKLOIB_OFFSET UNITYSDK_OFFSET(0x177D6060)

inline static constexpr unsigned int CJGOHJFHKAN_TypeDefinitionIndex = 77787;

	class CJGOHJFHKAN : public ::System::Object
	{
	public:
		::RPG::Client::ActivityIdleLive::IdleLiveNode* BECOOHALAFM; // 0x10
		::System::Action* LIOAPMDFLPL; // 0x18
		::System::Int32 JOEONHECOGJ; // 0x20
		::System::Int32 KDPKBMKBPIG; // 0x24
		::System::Boolean AFLGDFPEMNP; // 0x28
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_CTOR_OFFSET))(this, a1);
		}

		::System::Void OBGHNMKLOIB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_OBGHNMKLOIB_OFFSET))(this, a1);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_DISPOSE_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CJGOHJFHKAN_IIOIMDJJEDG_OFFSET))(this, a1);
		}

	};
