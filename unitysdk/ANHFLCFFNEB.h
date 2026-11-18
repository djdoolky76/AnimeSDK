#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DIJLAMNGAPO.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ANHFLCFFNEB_ABHHIOPBNPG_OFFSET UNITYSDK_OFFSET(0x17DE1B90)
#define ANHFLCFFNEB_DOFNAJEKOGO_OFFSET UNITYSDK_OFFSET(0x17DE1CF0)
#define ANHFLCFFNEB_GPJLONFMPEN_OFFSET UNITYSDK_OFFSET(0x17DE2060)
#define ANHFLCFFNEB_HDLGEDBNEIP_OFFSET UNITYSDK_OFFSET(0x17DE1FC0)
#define ANHFLCFFNEB_OJDGNBLEELP_OFFSET UNITYSDK_OFFSET(0x17DE1DA0)
#define ANHFLCFFNEB_PAFBGINFMEI_OFFSET UNITYSDK_OFFSET(0x17DE1E90)
#define ANHFLCFFNEB__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE1A40)

inline static constexpr unsigned int ANHFLCFFNEB_TypeDefinitionIndex = 69465;

class ANHFLCFFNEB : public ::System::Object
{
public:
	::System::Object* ELBOEFDGLGI; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JIOJKBJDBCP; // 0x18
	::System::UInt32 JBGLCAFPGHK; // 0x20
	::System::UInt32 DILBAFAKBJJ; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHFLCFFNEB__CTOR_OFFSET))(this);
	}

	::System::Object* ABHHIOPBNPG(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_ABHHIOPBNPG_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Void OJDGNBLEELP(::System::Int32 MOBNMDEDJIP, ::System::Object* CNIFFHBCIIH, ::System::Int32 ADGEDIIGAJO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_OJDGNBLEELP_OFFSET))(this, MOBNMDEDJIP, CNIFFHBCIIH, ADGEDIIGAJO);
	}

	::System::Boolean DOFNAJEKOGO(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_DOFNAJEKOGO_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Int32 PAFBGINFMEI(::System::Int32 MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_PAFBGINFMEI_OFFSET))(this, MOBNMDEDJIP);
	}

	::System::Void HDLGEDBNEIP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_HDLGEDBNEIP_OFFSET))(this);
	}

	::DIJLAMNGAPO GPJLONFMPEN(::System::Int32 MOBNMDEDJIP, ::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::DIJLAMNGAPO(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANHFLCFFNEB_GPJLONFMPEN_OFFSET))(this, MOBNMDEDJIP, HAAEBCOBKFF, BFMMEICFNCD);
	}
};
