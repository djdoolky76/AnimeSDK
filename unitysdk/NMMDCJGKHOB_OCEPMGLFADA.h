#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NMMDCJGKHOB_OCEPMGLFADA_FJNMJNHEBKI_OFFSET UNITYSDK_OFFSET(0x11F894F0)
#define NMMDCJGKHOB_OCEPMGLFADA_JPIIJFKOEID_OFFSET UNITYSDK_OFFSET(0x11F89390)
#define NMMDCJGKHOB_OCEPMGLFADA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89380)

inline static constexpr unsigned int NMMDCJGKHOB_OCEPMGLFADA_TypeDefinitionIndex = 54811;

class NMMDCJGKHOB_OCEPMGLFADA : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18
	::System::Int32 KKGGACLGGPN; // 0x20
	::System::Int32 BABIHDEGHAB; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_OCEPMGLFADA__CTOR_OFFSET))(this);
	}

	::System::Void JPIIJFKOEID(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_OCEPMGLFADA_JPIIJFKOEID_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FJNMJNHEBKI(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_OCEPMGLFADA_FJNMJNHEBKI_OFFSET))(this, DJCNCELJPOM);
	}
};
