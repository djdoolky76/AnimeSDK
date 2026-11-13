#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ONEMIJCPBEO_BNAEHOCIGGG_OFFSET UNITYSDK_OFFSET(0x17D78EF0)
#define ONEMIJCPBEO_CTOR_OFFSET UNITYSDK_OFFSET(0x17D78FF0)
#define ONEMIJCPBEO_EKMPDLILAGK_OFFSET UNITYSDK_OFFSET(0x17D78E70)
#define ONEMIJCPBEO_IJKKJGNGHNC_OFFSET UNITYSDK_OFFSET(0x17D78FA0)
#define ONEMIJCPBEO_JGGEPNNADOO_OFFSET UNITYSDK_OFFSET(0x17D78EE0)
#define ONEMIJCPBEO_LCIJNBGNABG_OFFSET UNITYSDK_OFFSET(0x17D78F50)
#define ONEMIJCPBEO_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x17D78E60)

inline static constexpr unsigned int ONEMIJCPBEO_TypeDefinitionIndex = 50197;

	class ONEMIJCPBEO : public ::System::Object
	{
	public:
		::System::Int32 IGCDCFGJMCL; // 0x10
		::System::Int32 CJGOBPIKNMO; // 0x14
		::System::Single FLJGBFNPAEI; // 0x18
		::System::Single FOFNHNJJPCL; // 0x1C
		::System::Single HBMCBCNLHCK; // 0x20
		::System::Single DNEAPBILMFH; // 0x24
		::System::Int32 MAHFJJMKBMD; // 0x28
		::System::Boolean NLGLAJFFIEH; // 0x2C
		::System::Boolean GOLPOPGEFNA; // 0x2D
		::System::Boolean ODLCMPKIAGE; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Single HJMKPJNKOEF; // 0x30
		static ::System::Int32* StaticGet_FMLJMOCHKNN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ONEMIJCPBEO")->GetStaticField(0x146B0);
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
