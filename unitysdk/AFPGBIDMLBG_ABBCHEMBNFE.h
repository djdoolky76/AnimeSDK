#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;

#define AFPGBIDMLBG_ABBCHEMBNFE_LPOLKNEIHCN_OFFSET UNITYSDK_OFFSET(0x1264BFC0)
#define AFPGBIDMLBG_ABBCHEMBNFE__CTOR_OFFSET UNITYSDK_OFFSET(0x1264BFB0)

inline static constexpr unsigned int AFPGBIDMLBG_ABBCHEMBNFE_TypeDefinitionIndex = 44041;

class AFPGBIDMLBG_ABBCHEMBNFE : public ::System::Object
{
public:
	::AOJKLCGGPAK* PLBEAIIJADM; // 0x10
	::CJIEIHEDMME* EEGPMJANHJL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_ABBCHEMBNFE__CTOR_OFFSET))(this);
	}

	::System::Void LPOLKNEIHCN(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFPGBIDMLBG_ABBCHEMBNFE_LPOLKNEIHCN_OFFSET))(this, ABHBKFJKINO);
	}
};
