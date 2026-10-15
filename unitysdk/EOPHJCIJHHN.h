#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIELGJIPJDM.h"
#include "unitysdk/EOPHJCIJHHN_BossDotStyle.h"
class KCMGAIFFBPL;
class PCGKKAMOHBE;
namespace UnityEngine { class Transform; }

#define EOPHJCIJHHN_ABPPHEDINPP_OFFSET UNITYSDK_OFFSET(0x155CDEE0)
#define EOPHJCIJHHN_BGJLPBMFMCC_OFFSET UNITYSDK_OFFSET(0x155CDE80)
#define EOPHJCIJHHN_COIFADDJIGG_OFFSET UNITYSDK_OFFSET(0x155CDB30)
#define EOPHJCIJHHN_CTOR_OFFSET UNITYSDK_OFFSET(0x155CDF80)
#define EOPHJCIJHHN_ENJPEHMDDKE_OFFSET UNITYSDK_OFFSET(0x155CDD30)
#define EOPHJCIJHHN_GGAHGOJJBIP_OFFSET UNITYSDK_OFFSET(0x155CD950)
#define EOPHJCIJHHN_NHBOLCEDNBM_OFFSET UNITYSDK_OFFSET(0x155CDAE0)
#define EOPHJCIJHHN__ONBIND_OFFSET UNITYSDK_OFFSET(0x155CD720)

	class EOPHJCIJHHN : public ::DIELGJIPJDM
	{
	public:
		::PCGKKAMOHBE* HFEDPLIFHGE; // 0x150
		::UnityEngine::Transform* AMLNOKODGJF; // 0x158
		::UnityEngine::Transform* AKOFACHEFFM; // 0x160
		::UnityEngine::Transform* GLJHONNBDFO; // 0x168
		::System::Int32 OKAJGOHNOOP; // 0x170
		::EOPHJCIJHHN_BossDotStyle IPAPLHAGANL; // 0x174
		::System::Int32 FBFHHNFMMIH; // 0x178
		::System::Int32 KNJAJPEDDDB; // 0x17C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* OPJIHOJEPLI; // 0x0
		// static const ::System::String* PHOENMFLOII; // 0x0
		// static const ::System::String* OKGKMMEAGJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN__ONBIND_OFFSET))(this);
		}

		::System::Void GGAHGOJJBIP(::KCMGAIFFBPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCMGAIFFBPL*))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_GGAHGOJJBIP_OFFSET))(this, a1);
		}

		::System::Void NHBOLCEDNBM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_NHBOLCEDNBM_OFFSET))(this, a1);
		}

		::System::Void COIFADDJIGG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_COIFADDJIGG_OFFSET))(this);
		}

		::System::Void ENJPEHMDDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_ENJPEHMDDKE_OFFSET))(this);
		}

		::System::Void ABPPHEDINPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_ABPPHEDINPP_OFFSET))(this);
		}

		::System::Void BGJLPBMFMCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOPHJCIJHHN_BGJLPBMFMCC_OFFSET))(this);
		}

	};
