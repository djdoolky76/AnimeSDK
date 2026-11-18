#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define IMMPDFEMEOI_CJJKFAPLOEE_OFFSET UNITYSDK_OFFSET(0x1FBDB700)
#define IMMPDFEMEOI_EMGAMHPJLAE_OFFSET UNITYSDK_OFFSET(0x1FBDB710)
#define IMMPDFEMEOI_FKLFANDBDEI_OFFSET UNITYSDK_OFFSET(0x1FBDB720)
#define IMMPDFEMEOI_ONDOLFDLECP_OFFSET UNITYSDK_OFFSET(0x1FBDB6F0)
#define IMMPDFEMEOI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBDB6E0)
#define IMMPDFEMEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBDB6D0)

inline static constexpr unsigned int IMMPDFEMEOI_TypeDefinitionIndex = 28651;

class IMMPDFEMEOI : public ::System::Attribute
{
public:
	::System::String* _JIGBKKMIFMA_k__BackingField; // 0x10
	::System::String* _HMMGBGKENCI_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMPDFEMEOI__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::String* EOGEINIILHO, ::System::String* BADLEKCCCGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + IMMPDFEMEOI__CTOR_1_OFFSET))(this, EOGEINIILHO, BADLEKCCCGC);
	}

	::System::Void ONDOLFDLECP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMMPDFEMEOI_ONDOLFDLECP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CJJKFAPLOEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMPDFEMEOI_CJJKFAPLOEE_OFFSET))(this);
	}

	::System::String* EMGAMHPJLAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMPDFEMEOI_EMGAMHPJLAE_OFFSET))(this);
	}

	::System::Void FKLFANDBDEI(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IMMPDFEMEOI_FKLFANDBDEI_OFFSET))(this, EGEGIMGMJHN);
	}
};
