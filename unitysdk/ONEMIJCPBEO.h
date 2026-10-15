#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONEMIJCPBEO_BNAEHOCIGGG_OFFSET UNITYSDK_OFFSET(0xBF49C10)
#define ONEMIJCPBEO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF49D10)
#define ONEMIJCPBEO_EKMPDLILAGK_OFFSET UNITYSDK_OFFSET(0xBF49B90)
#define ONEMIJCPBEO_IJKKJGNGHNC_OFFSET UNITYSDK_OFFSET(0xBF49CC0)
#define ONEMIJCPBEO_JGGEPNNADOO_OFFSET UNITYSDK_OFFSET(0xBF49C00)
#define ONEMIJCPBEO_LCIJNBGNABG_OFFSET UNITYSDK_OFFSET(0xBF49C70)
#define ONEMIJCPBEO_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0xBF49B80)

inline static constexpr unsigned int ONEMIJCPBEO_TypeDefinitionIndex = 49121;

	class ONEMIJCPBEO : public ::System::Object
	{
	public:
		::System::Single HBMCBCNLHCK; // 0x10
		::System::Int32 MAHFJJMKBMD; // 0x14
		::System::Single FOFNHNJJPCL; // 0x18
		::System::Single HJMKPJNKOEF; // 0x1C
		::System::Single FLJGBFNPAEI; // 0x20
		::System::Int32 IGCDCFGJMCL; // 0x24
		::System::Int32 CJGOBPIKNMO; // 0x28
		::System::Boolean NLGLAJFFIEH; // 0x2C
		::System::Boolean GOLPOPGEFNA; // 0x2D
		::System::Boolean ODLCMPKIAGE; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single DNEAPBILMFH; // 0x30
		static ::System::Int32* StaticGet_FMLJMOCHKNN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ONEMIJCPBEO")->GetStaticField(0x145C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_CTOR_OFFSET))(this);
		}

		::System::Int32 MJGKNFEILLI()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Void EKMPDLILAGK(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_EKMPDLILAGK_OFFSET))(this, a1, a2);
		}

		::System::Boolean JGGEPNNADOO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_JGGEPNNADOO_OFFSET))(this);
		}

		::System::Boolean BNAEHOCIGGG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_BNAEHOCIGGG_OFFSET))(this);
		}

		::System::Void LCIJNBGNABG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_LCIJNBGNABG_OFFSET))(this, a1);
		}

		::System::Void IJKKJGNGHNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONEMIJCPBEO_IJKKJGNGHNC_OFFSET))(this);
		}

	};
