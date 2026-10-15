#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEDHDHCPNNP;
namespace RPG::Client { class MatchThreeGameProp; }
namespace System { class String; }

#define AEDHDHCPNNP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB14C4D0)
#define AEDHDHCPNNP_CTOR_OFFSET UNITYSDK_OFFSET(0xB14C560)
#define AEDHDHCPNNP_OKPLPEELPBC_OFFSET UNITYSDK_OFFSET(0xB14C590)
#define AEDHDHCPNNP__ISMEET_B__3_0_OFFSET UNITYSDK_OFFSET(0xB14C6A0)

inline static constexpr unsigned int AEDHDHCPNNP_TypeDefinitionIndex = 65991;

	class AEDHDHCPNNP : public ::System::Object
	{
	public:
		::System::UInt32 CACOADGJKLA; // 0x10
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AEDHDHCPNNP_CTOR_OFFSET))(this, a1);
		}

		static ::AEDHDHCPNNP* BPLPBPMEODA(::System::String* a1)
		{
			return ((::AEDHDHCPNNP*(*)(::System::String*))((::PBYTE)hIl2Cpp + AEDHDHCPNNP_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Boolean OKPLPEELPBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDHDHCPNNP_OKPLPEELPBC_OFFSET))(this);
		}

		::System::Boolean _IsMeet_b__3_0(::RPG::Client::MatchThreeGameProp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + AEDHDHCPNNP__ISMEET_B__3_0_OFFSET))(this, a1);
		}

	};
