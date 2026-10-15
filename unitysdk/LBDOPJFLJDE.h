#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class LBDOPJFLJDE;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }

#define LBDOPJFLJDE_CCJCOOINKBO_OFFSET UNITYSDK_OFFSET(0xB5F31F0)
#define LBDOPJFLJDE_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xB5F3770)
#define LBDOPJFLJDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F3840)
#define LBDOPJFLJDE_DKAMHDLBEKO_OFFSET UNITYSDK_OFFSET(0xB5F2FE0)
#define LBDOPJFLJDE_DNOCHGLGDOA_OFFSET UNITYSDK_OFFSET(0xB5F3700)
#define LBDOPJFLJDE_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0xB5F37C0)
#define LBDOPJFLJDE_HFDIIALGNPP_OFFSET UNITYSDK_OFFSET(0xB5F3320)
#define LBDOPJFLJDE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB5F33F0)
#define LBDOPJFLJDE_LBFGNFIHOHO_OFFSET UNITYSDK_OFFSET(0xB5F2F00)
#define LBDOPJFLJDE_LBMANPPLHLM_OFFSET UNITYSDK_OFFSET(0xB5F3270)
#define LBDOPJFLJDE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB5F2F90)
#define LBDOPJFLJDE_MNDLOBLBJGI_OFFSET UNITYSDK_OFFSET(0xB5F2EF0)
#define LBDOPJFLJDE_OIKNFBDBCKO_OFFSET UNITYSDK_OFFSET(0xB5F3310)

inline static constexpr unsigned int LBDOPJFLJDE_TypeDefinitionIndex = 60000;

	class LBDOPJFLJDE : public ::System::Object
	{
	public:
		::System::String* IPMLNHKCFNC; // 0x10
		::System::Guid GFAKDLGDHHF; // 0x18
		::System::Int32 BBHHNPFDKCF; // 0x28
		::System::Single CEEFEBAMEGO; // 0x2C
		::System::Boolean HKJADIGJKNB; // 0x30
		::System::Boolean MBKFKOHFPAA; // 0x31
		::System::Boolean NMEPMMGPJDH; // 0x32
		::System::Byte _padding0[0x1];
		::System::Single HAGODFEHOEJ; // 0x34
		static ::LBDOPJFLJDE** StaticGet_FPGIPPKFFAM()
		{
			return (::LBDOPJFLJDE**)UnitySDK::FromName("", "LBDOPJFLJDE")->GetStaticField(0x53A30);
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
