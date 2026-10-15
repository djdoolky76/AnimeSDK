#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
class ELKBNDBMAMK;
class JGLAPDELEDJ;
class NFFLLHFECCP;
namespace BansheeGz::BGSpline::Components { class BGCcMath; }
namespace BansheeGz::BGSpline::Components { class BGCcTrs; }
namespace RPG::Client { class AlleyRouteBird; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_ALJMJKCKBCE_OFFSET UNITYSDK_OFFSET(0xC66FEC0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_BINDCOMPONENTS_OFFSET UNITYSDK_OFFSET(0xC66F0D0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_CAAIBAECMAE_OFFSET UNITYSDK_OFFSET(0xC66F4A0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6702F0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_DMLOJEIJOAH_OFFSET UNITYSDK_OFFSET(0xC66FC50)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_EMIT_OFFSET UNITYSDK_OFFSET(0xC66F9E0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FBEPKCBJLMA_OFFSET UNITYSDK_OFFSET(0xC66F6B0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FGGMEADNLPL_OFFSET UNITYSDK_OFFSET(0xC6701F0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FMCMGNCBPCE_OFFSET UNITYSDK_OFFSET(0xC66F350)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xC66EFC0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_HMPKMBOFGPK_OFFSET UNITYSDK_OFFSET(0xC66FD60)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_MFCDJDALBLO_OFFSET UNITYSDK_OFFSET(0xC66F670)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OBGFPOANFGA_OFFSET UNITYSDK_OFFSET(0xC66F850)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OMKAMNHJNBB_OFFSET UNITYSDK_OFFSET(0xC670010)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_PMAPDCMLOPF_OFFSET UNITYSDK_OFFSET(0xC66F800)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCOLOR_OFFSET UNITYSDK_OFFSET(0xC66F080)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET UNITYSDK_OFFSET(0xC66F030)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET UNITYSDK_OFFSET(0xC66EFE0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET UNITYSDK_OFFSET(0xC66EFD0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_STOP_OFFSET UNITYSDK_OFFSET(0xC66FAC0)
#define RPG_CLIENT_ALLEYROUTEBIRDEMITTER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC66F210)

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyRouteBirdEmitter_TypeDefinitionIndex = 62293;

	class AlleyRouteBirdEmitter : public ::UnityEngine::MonoBehaviour
	{
	public:
		::BansheeGz::BGSpline::Components::BGCcMath* _BGCcMath_k__BackingField; // 0x18
		::System::Int32 DLKBPAJHKEG; // 0x20
		::System::Boolean BPMAODAAAKP; // 0x24
		::System::Byte _padding0[0x3];
		::System::Int32 CLKFEPNHBOF; // 0x28
		::System::Byte _padding1[0x4];
		::JGLAPDELEDJ* PIMENEOLPLN; // 0x30
		::System::Single PBLGHIGPEIP; // 0x38
		::System::Boolean LNOAIHJFMCD; // 0x3C
		::System::Byte _padding2[0x3];
		::NFFLLHFECCP* FKEJGJHJICF; // 0x40
		::System::String* NHFPGLCLOMO; // 0x48
		::System::Collections::Generic::List_1<::BansheeGz::BGSpline::Components::BGCcTrs*>* FKJBMDGJNJB; // 0x50
		::ELKBNDBMAMK* IJAEMKPNKGH; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_CTOR_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcMath* get_BGCcMath()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcMath*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_GET_BGCCMATH_OFFSET))(this);
		}

		::System::Void set_BGCcMath(::BansheeGz::BGSpline::Components::BGCcMath* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcMath*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SET_BGCCMATH_OFFSET))(this, a1);
		}

		::System::Void SetBirdPool(::NFFLLHFECCP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFFLLHFECCP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDPOOL_OFFSET))(this, a1);
		}

		::System::Void SetBirdConfig(::JGLAPDELEDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGLAPDELEDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetBirdColor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_SETBIRDCOLOR_OFFSET))(this, a1);
		}

		::System::Void BindComponents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_BINDCOMPONENTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_UPDATE_OFFSET))(this);
		}

		::System::Void Emit(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_EMIT_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_STOP_OFFSET))(this);
		}

		::System::Void PMAPDCMLOPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_PMAPDCMLOPF_OFFSET))(this);
		}

		::System::Void MFCDJDALBLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_MFCDJDALBLO_OFFSET))(this);
		}

		::System::Void CAAIBAECMAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_CAAIBAECMAE_OFFSET))(this);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* HMPKMBOFGPK()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_HMPKMBOFGPK_OFFSET))(this);
		}

		::RPG::Client::AlleyRouteBird* OMKAMNHJNBB(::BansheeGz::BGSpline::Components::BGCcTrs* a1)
		{
			return ((::RPG::Client::AlleyRouteBird*(*)(::PVOID, ::BansheeGz::BGSpline::Components::BGCcTrs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OMKAMNHJNBB_OFFSET))(this, a1);
		}

		::BansheeGz::BGSpline::Components::BGCcTrs* FGGMEADNLPL()
		{
			return ((::BansheeGz::BGSpline::Components::BGCcTrs*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FGGMEADNLPL_OFFSET))(this);
		}

		::System::Void DMLOJEIJOAH(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_DMLOJEIJOAH_OFFSET))(this, a1);
		}

		::System::Void OBGFPOANFGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_OBGFPOANFGA_OFFSET))(this);
		}

		::System::Single FBEPKCBJLMA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FBEPKCBJLMA_OFFSET))(this);
		}

		::System::Single FMCMGNCBPCE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_FMCMGNCBPCE_OFFSET))(this);
		}

		::System::Single ALJMJKCKBCE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ALLEYROUTEBIRDEMITTER_ALJMJKCKBCE_OFFSET))(this);
		}

	};
}
