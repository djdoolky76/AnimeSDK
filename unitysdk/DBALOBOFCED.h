#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class Action; }
namespace System { class Object; }

#define DBALOBOFCED_CTOR_OFFSET UNITYSDK_OFFSET(0xDFCB770)
#define DBALOBOFCED_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDFCBC50)
#define DBALOBOFCED_DLFDEMDCBAH_OFFSET UNITYSDK_OFFSET(0xDFCBB40)
#define DBALOBOFCED_IIOIMDJJEDG_OFFSET UNITYSDK_OFFSET(0xDFCBC00)
#define DBALOBOFCED_JEBDAFCDCIO_OFFSET UNITYSDK_OFFSET(0xDFCBAD0)
#define DBALOBOFCED_NLKOAFJCKNP_OFFSET UNITYSDK_OFFSET(0xDFCB820)

inline static constexpr unsigned int DBALOBOFCED_TypeDefinitionIndex = 75453;

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
