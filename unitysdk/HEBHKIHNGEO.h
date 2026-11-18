#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPPCLJMLCL.h"
#include "unitysdk/System/Object.h"

#define HEBHKIHNGEO_FMIGKIMIBJD_OFFSET UNITYSDK_OFFSET(0x15B41D30)
#define HEBHKIHNGEO_HCJIDPGLDDH_OFFSET UNITYSDK_OFFSET(0x15B41D70)
#define HEBHKIHNGEO_HLJPINPGIJN_OFFSET UNITYSDK_OFFSET(0x15B41E00)
#define HEBHKIHNGEO_IJEEIGODPCE_OFFSET UNITYSDK_OFFSET(0x15B41DB0)

inline static constexpr unsigned int HEBHKIHNGEO_TypeDefinitionIndex = 78730;

class HEBHKIHNGEO : public ::System::Object
{
public:
	static ::System::Boolean FMIGKIMIBJD(::LPPPCLJMLCL JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::LPPPCLJMLCL))((::PBYTE)hIl2Cpp + HEBHKIHNGEO_FMIGKIMIBJD_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean HCJIDPGLDDH(::LPPPCLJMLCL JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::LPPPCLJMLCL))((::PBYTE)hIl2Cpp + HEBHKIHNGEO_HCJIDPGLDDH_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean IJEEIGODPCE(::LPPPCLJMLCL JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::LPPPCLJMLCL))((::PBYTE)hIl2Cpp + HEBHKIHNGEO_IJEEIGODPCE_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Boolean HLJPINPGIJN(::LPPPCLJMLCL JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::LPPPCLJMLCL))((::PBYTE)hIl2Cpp + HEBHKIHNGEO_HLJPINPGIJN_OFFSET))(JKBLDFBGBPK);
	}
};
