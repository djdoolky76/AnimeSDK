#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PFIBMCPLJOI_BNDCKKCCAGG_OFFSET UNITYSDK_OFFSET(0xC208800)
#define PFIBMCPLJOI_CTOR_OFFSET UNITYSDK_OFFSET(0xC208890)
#define PFIBMCPLJOI_GLOADGNOLGE_OFFSET UNITYSDK_OFFSET(0xC208840)
#define PFIBMCPLJOI_JMKLBMEHDCG_OFFSET UNITYSDK_OFFSET(0xC2087B0)
#define PFIBMCPLJOI_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC208750)

inline static constexpr unsigned int PFIBMCPLJOI_TypeDefinitionIndex = 61051;

	class PFIBMCPLJOI : public ::System::Object
	{
	public:
		::System::Single HBANLBGKNKP; // 0x10
		::System::Single EMFIABBAGKP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBMCPLJOI_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PFIBMCPLJOI_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JMKLBMEHDCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBMCPLJOI_JMKLBMEHDCG_OFFSET))(this);
		}

		::System::Void BNDCKKCCAGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBMCPLJOI_BNDCKKCCAGG_OFFSET))(this);
		}

		::System::Boolean GLOADGNOLGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PFIBMCPLJOI_GLOADGNOLGE_OFFSET))(this);
		}

	};
