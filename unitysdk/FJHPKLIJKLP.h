#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace System { class String; }

#define FJHPKLIJKLP_FEDPDPAJCDJ_OFFSET UNITYSDK_OFFSET(0x156C0FC0)
#define FJHPKLIJKLP_FJJPMJKDMLM_OFFSET UNITYSDK_OFFSET(0x156C1150)
#define FJHPKLIJKLP_FNLCAJONLLD_OFFSET UNITYSDK_OFFSET(0x156C10D0)
#define FJHPKLIJKLP_JDGCPGHEABB_OFFSET UNITYSDK_OFFSET(0x156C1050)
#define FJHPKLIJKLP_JNJHDMCOILJ_OFFSET UNITYSDK_OFFSET(0x156C11E0)

inline static constexpr unsigned int FJHPKLIJKLP_TypeDefinitionIndex = 76125;

class FJHPKLIJKLP : public ::System::Object
{
public:
	static ::System::Boolean FEDPDPAJCDJ(::System::Boolean BHHJMMFHADF)
	{
		return ((::System::Boolean(*)(::System::Boolean))((::PBYTE)hIl2Cpp + FJHPKLIJKLP_FEDPDPAJCDJ_OFFSET))(BHHJMMFHADF);
	}

	static ::System::Boolean JDGCPGHEABB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJHPKLIJKLP_JDGCPGHEABB_OFFSET))();
	}

	static ::System::Boolean FNLCAJONLLD()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJHPKLIJKLP_FNLCAJONLLD_OFFSET))();
	}

	static ::System::Boolean FJJPMJKDMLM()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FJHPKLIJKLP_FJJPMJKDMLM_OFFSET))();
	}

	static ::System::String* JNJHDMCOILJ(::Foundation::ViewObject::ViewObjectHandle MALDMFHCPFI)
	{
		return ((::System::String*(*)(::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + FJHPKLIJKLP_JNJHDMCOILJ_OFFSET))(MALDMFHCPFI);
	}
};
