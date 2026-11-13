#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChatMessageData; }
namespace RPG::Client { class OnlinePlayRoomModule; }

#define CGPJCPKCPHC_CTOR_OFFSET UNITYSDK_OFFSET(0x17861F90)
#define CGPJCPKCPHC_HCGPKOHODNP_OFFSET UNITYSDK_OFFSET(0x17861CD0)
#define CGPJCPKCPHC_LBBLIMMEMCO_OFFSET UNITYSDK_OFFSET(0x178617C0)
#define CGPJCPKCPHC_MMIIPFEMLED_OFFSET UNITYSDK_OFFSET(0x17861C40)

inline static constexpr unsigned int CGPJCPKCPHC_TypeDefinitionIndex = 68332;

	class CGPJCPKCPHC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPJCPKCPHC_CTOR_OFFSET))(this);
		}

		::System::Boolean LBBLIMMEMCO(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CGPJCPKCPHC_LBBLIMMEMCO_OFFSET))(this, a1);
		}

		::System::Void HCGPKOHODNP(::RPG::Client::ChatMessageData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChatMessageData*))((::PBYTE)hIl2Cpp + CGPJCPKCPHC_HCGPKOHODNP_OFFSET))(this, a1);
		}

		::RPG::Client::OnlinePlayRoomModule* MMIIPFEMLED()
		{
			return ((::RPG::Client::OnlinePlayRoomModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGPJCPKCPHC_MMIIPFEMLED_OFFSET))(this);
		}

	};
