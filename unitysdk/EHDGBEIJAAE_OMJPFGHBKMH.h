#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLNGLIBJBID;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define EHDGBEIJAAE_OMJPFGHBKMH_CJECFABLEIH_OFFSET UNITYSDK_OFFSET(0x154B01B0)
#define EHDGBEIJAAE_OMJPFGHBKMH_NFKMPMFKFJC_OFFSET UNITYSDK_OFFSET(0x154B01A0)
#define EHDGBEIJAAE_OMJPFGHBKMH__CTOR_OFFSET UNITYSDK_OFFSET(0x154AE7F0)

inline static constexpr unsigned int EHDGBEIJAAE_OMJPFGHBKMH_TypeDefinitionIndex = 86506;

class EHDGBEIJAAE_OMJPFGHBKMH : public ::System::Object
{
public:
	::System::Action_1<::BLNGLIBJBID*>* IGAAKDOIPNN; // 0x10
	::System::Action* BLLNHDIDKPA; // 0x18
	::System::Int32 KLJNHMGMDNP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_OMJPFGHBKMH__CTOR_OFFSET))(this);
	}

	::System::Void NFKMPMFKFJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_OMJPFGHBKMH_NFKMPMFKFJC_OFFSET))(this);
	}

	::System::Void CJECFABLEIH(::BLNGLIBJBID* JBNBMFNNELP)
	{
		return ((::System::Void(*)(::PVOID, ::BLNGLIBJBID*))((::PBYTE)hIl2Cpp + EHDGBEIJAAE_OMJPFGHBKMH_CJECFABLEIH_OFFSET))(this, JBNBMFNNELP);
	}
};
