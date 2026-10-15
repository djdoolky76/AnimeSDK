#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Object.h"
class LBDOPJFLJDE;
namespace HedgehogTeam::EasyTouch { class Gesture; }
namespace System { class String; }

#define LBDOPJFLJDE_CCJCOOINKBO_OFFSET UNITYSDK_OFFSET(0xB5F94A0)
#define LBDOPJFLJDE_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xB5F9A20)
#define LBDOPJFLJDE_CTOR_OFFSET UNITYSDK_OFFSET(0xB5F9AF0)
#define LBDOPJFLJDE_DKAMHDLBEKO_OFFSET UNITYSDK_OFFSET(0xB5F9290)
#define LBDOPJFLJDE_DNOCHGLGDOA_OFFSET UNITYSDK_OFFSET(0xB5F99B0)
#define LBDOPJFLJDE_FMJPMFEDIJL_OFFSET UNITYSDK_OFFSET(0xB5F9A70)
#define LBDOPJFLJDE_HFDIIALGNPP_OFFSET UNITYSDK_OFFSET(0xB5F95D0)
#define LBDOPJFLJDE_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB5F96A0)
#define LBDOPJFLJDE_LBFGNFIHOHO_OFFSET UNITYSDK_OFFSET(0xB5F91B0)
#define LBDOPJFLJDE_LBMANPPLHLM_OFFSET UNITYSDK_OFFSET(0xB5F9520)
#define LBDOPJFLJDE_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xB5F9240)
#define LBDOPJFLJDE_MNDLOBLBJGI_OFFSET UNITYSDK_OFFSET(0xB5F91A0)
#define LBDOPJFLJDE_OIKNFBDBCKO_OFFSET UNITYSDK_OFFSET(0xB5F95C0)

inline static constexpr unsigned int LBDOPJFLJDE_TypeDefinitionIndex = 60000;

	class LBDOPJFLJDE : public ::System::Object
	{
	public:
		::System::String* IPMLNHKCFNC; // 0x10
		::System::Int32 BBHHNPFDKCF; // 0x18
		::System::Boolean HKJADIGJKNB; // 0x1C
		::System::Boolean NMEPMMGPJDH; // 0x1D
		::System::Boolean MBKFKOHFPAA; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Single CEEFEBAMEGO; // 0x20
		::System::Single HAGODFEHOEJ; // 0x24
		::System::Guid GFAKDLGDHHF; // 0x28
		static ::LBDOPJFLJDE** StaticGet_FPGIPPKFFAM()
		{
			return (::LBDOPJFLJDE**)UnitySDK::FromName("", "LBDOPJFLJDE")->GetStaticField(0x54220);
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
