#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class LBDOPJFLJDE;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }

#define LBDOPJFLJDE_CCJCOOINKBO_OFFSET UNITYSDK_OFFSET(0x1B297000)
#define LBDOPJFLJDE_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0x1B2975D0)
#define LBDOPJFLJDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B2976A0)
#define LBDOPJFLJDE_DKAMHDLBEKO_OFFSET UNITYSDK_OFFSET(0x1B296DF0)
#define LBDOPJFLJDE_DNOCHGLGDOA_OFFSET UNITYSDK_OFFSET(0x1B297560)
#define LBDOPJFLJDE_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0x1B297620)
#define LBDOPJFLJDE_HFDIIALGNPP_OFFSET UNITYSDK_OFFSET(0x1B297110)
#define LBDOPJFLJDE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1B2971E0)
#define LBDOPJFLJDE_LBFGNFIHOHO_OFFSET UNITYSDK_OFFSET(0x1B296D10)
#define LBDOPJFLJDE_LBMANPPLHLM_OFFSET UNITYSDK_OFFSET(0x1B297060)
#define LBDOPJFLJDE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0x1B296DA0)
#define LBDOPJFLJDE_MNDLOBLBJGI_OFFSET UNITYSDK_OFFSET(0x1B296D00)
#define LBDOPJFLJDE_OIKNFBDBCKO_OFFSET UNITYSDK_OFFSET(0x1B297100)

inline static constexpr unsigned int LBDOPJFLJDE_TypeDefinitionIndex = 61284;

	class LBDOPJFLJDE : public ::System::Object
	{
	public:
		::System::String* IPMLNHKCFNC; // 0x10
		::System::Boolean NMEPMMGPJDH; // 0x18
		::System::Boolean HKJADIGJKNB; // 0x19
		::System::Boolean MBKFKOHFPAA; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single CEEFEBAMEGO; // 0x1C
		::System::Int32 BBHHNPFDKCF; // 0x20
		::System::Guid GFAKDLGDHHF; // 0x24
		::System::Single HAGODFEHOEJ; // 0x34
		static ::LBDOPJFLJDE** StaticGet_FPGIPPKFFAM()
		{
			return (::LBDOPJFLJDE**)UnitySDK::FromName("", "LBDOPJFLJDE")->GetStaticField(0x6FFC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_CTOR_OFFSET))(this);
		}

		::System::Boolean MNDLOBLBJGI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_MNDLOBLBJGI_OFFSET))(this);
		}

		::System::Void LBFGNFIHOHO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_LBFGNFIHOHO_OFFSET))(this, a1);
		}

		::System::Void DKAMHDLBEKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_DKAMHDLBEKO_OFFSET))(this);
		}

		::System::Void CCJCOOINKBO(::HedgehogTeam::EasyTouch::Gesture* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HedgehogTeam::EasyTouch::Gesture*))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_CCJCOOINKBO_OFFSET))(this, a1);
		}

		::System::Boolean OIKNFBDBCKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_OIKNFBDBCKO_OFFSET))(this);
		}

		::System::Void HFDIIALGNPP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_HFDIIALGNPP_OFFSET))(this, a1);
		}

		::System::Void LBMANPPLHLM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_LBMANPPLHLM_OFFSET))(this, a1);
		}

		::System::Boolean JLANKNHFKCN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void DNOCHGLGDOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_DNOCHGLGDOA_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBDOPJFLJDE_CIHFGJDCHIA_OFFSET))(this);
		}

		static ::LBDOPJFLJDE* FMJPMFEDIJL()
		{
			return ((::LBDOPJFLJDE*(*)())((::PBYTE)hIl2Cpp + LBDOPJFLJDE_FMJPMFEDIJL_OFFSET))();
		}

	};
