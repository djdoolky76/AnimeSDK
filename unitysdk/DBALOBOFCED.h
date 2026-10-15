#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define DBALOBOFCED_CTOR_OFFSET UNITYSDK_OFFSET(0xDFD5470)
#define DBALOBOFCED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFD5950)
#define DBALOBOFCED_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xDFD5840)
#define DBALOBOFCED_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xDFD5900)
#define DBALOBOFCED_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0xDFD57D0)
#define DBALOBOFCED_NLKOAFJCKNP_OFFSET UNITYSDK_OFFSET(0xDFD5520)

	class DBALOBOFCED : public ::System::Object
	{
	public:
		::System::Action* LIOAPMDFLPL; // 0x10
		::System::UInt32 JNGJMNHJCKG; // 0x18
		::System::Void _ctor(::RPG::GameCore::IdleLiveCLTriggerRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + DBALOBOFCED_CTOR_OFFSET))(this, a1);
		}

		::System::Void NLKOAFJCKNP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBALOBOFCED_NLKOAFJCKNP_OFFSET))(this, a1);
		}

		::System::Void JEBDAFCDCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBALOBOFCED_JEBDAFCDCIO_OFFSET))(this);
		}

		::System::Void DLFDEMDCBAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBALOBOFCED_DLFDEMDCBAH_OFFSET))(this);
		}

		::System::Void IIOIMDJJEDG(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DBALOBOFCED_IIOIMDJJEDG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBALOBOFCED_DISPOSE_OFFSET))(this);
		}

	};
