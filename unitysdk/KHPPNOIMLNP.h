#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PAEJPMJPMFA;

#define KHPPNOIMLNP_DLFICPCEECN_OFFSET UNITYSDK_OFFSET(0x1862A6E0)
#define KHPPNOIMLNP_KCDCADLCOPL_OFFSET UNITYSDK_OFFSET(0x1862AA60)
#define KHPPNOIMLNP_MJPFODJDPOB_OFFSET UNITYSDK_OFFSET(0x1862A6A0)
#define KHPPNOIMLNP_OKHAIMPEOKC_OFFSET UNITYSDK_OFFSET(0x1862ACB0)

inline static constexpr unsigned int KHPPNOIMLNP_TypeDefinitionIndex = 74312;

class KHPPNOIMLNP : public ::System::Object
{
public:
	static ::System::Boolean MJPFODJDPOB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + KHPPNOIMLNP_MJPFODJDPOB_OFFSET))();
	}

	static ::System::Void DLFICPCEECN()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHPPNOIMLNP_DLFICPCEECN_OFFSET))();
	}

	static ::System::Void KCDCADLCOPL(::System::Int32 AMCNCFDFMEM)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + KHPPNOIMLNP_KCDCADLCOPL_OFFSET))(AMCNCFDFMEM);
	}

	static ::System::Int32 OKHAIMPEOKC(::PAEJPMJPMFA* PJBLJNCCDJO)
	{
		return ((::System::Int32(*)(::PAEJPMJPMFA*))((::PBYTE)hIl2Cpp + KHPPNOIMLNP_OKHAIMPEOKC_OFFSET))(PJBLJNCCDJO);
	}
};
