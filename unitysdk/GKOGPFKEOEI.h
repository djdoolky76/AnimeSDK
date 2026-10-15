#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsInterviewContentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class EPOIGLEBNCB;
class GKOGPFKEOEI;
namespace System { class String; }

#define GKOGPFKEOEI_AJOPEKGIJFO_OFFSET UNITYSDK_OFFSET(0x15A9C560)
#define GKOGPFKEOEI_ALMFNFOJLOA_OFFSET UNITYSDK_OFFSET(0x15A9C720)
#define GKOGPFKEOEI_ANHPMNDJJJK_OFFSET UNITYSDK_OFFSET(0x15A9C660)
#define GKOGPFKEOEI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15A9C4D0)
#define GKOGPFKEOEI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9C550)
#define GKOGPFKEOEI_FOMBGPKEGHK_OFFSET UNITYSDK_OFFSET(0x15A9C7D0)
#define GKOGPFKEOEI_GET_INTERVIEWCONTENTID_OFFSET UNITYSDK_OFFSET(0x15A9C880)
#define GKOGPFKEOEI_JOAOAGOBMPG_OFFSET UNITYSDK_OFFSET(0x15A9C770)
#define GKOGPFKEOEI_PPGMPEMDMHC_OFFSET UNITYSDK_OFFSET(0x15A9C600)
#define GKOGPFKEOEI_SET_INTERVIEWCONTENTID_OFFSET UNITYSDK_OFFSET(0x15A9C890)

inline static constexpr unsigned int GKOGPFKEOEI_TypeDefinitionIndex = 80283;

	class GKOGPFKEOEI : public ::System::Object
	{
	public:
		::System::UInt32 _InterviewContentID_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_CTOR_OFFSET))(this);
		}

		static ::GKOGPFKEOEI* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::GKOGPFKEOEI*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_BPLPBPMEODA_OFFSET))(a1);
		}

		::RPG::GameCore::LimaoNewsInterviewContentType AJOPEKGIJFO()
		{
			return ((::RPG::GameCore::LimaoNewsInterviewContentType(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_AJOPEKGIJFO_OFFSET))(this);
		}

		::RPG::Client::TextID ANHPMNDJJJK()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_ANHPMNDJJJK_OFFSET))(this);
		}

		::System::Boolean ALMFNFOJLOA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_ALMFNFOJLOA_OFFSET))(this);
		}

		::System::Boolean JOAOAGOBMPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_JOAOAGOBMPG_OFFSET))(this);
		}

		::System::String* FOMBGPKEGHK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_FOMBGPKEGHK_OFFSET))(this);
		}

		::System::UInt32 get_InterviewContentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_GET_INTERVIEWCONTENTID_OFFSET))(this);
		}

		::System::Void set_InterviewContentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_SET_INTERVIEWCONTENTID_OFFSET))(this, a1);
		}

		::EPOIGLEBNCB* PPGMPEMDMHC()
		{
			return ((::EPOIGLEBNCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKOGPFKEOEI_PPGMPEMDMHC_OFFSET))(this);
		}

	};
