#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ListenerDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLFEAECMNAJ_BCECDOCKJMO_OFFSET UNITYSDK_OFFSET(0xBC65CC0)
#define NLFEAECMNAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC67DE0)
#define NLFEAECMNAJ_CFGGKLJOHDI_OFFSET UNITYSDK_OFFSET(0xBC65E00)
#define NLFEAECMNAJ_CGMAKLJDOHD_OFFSET UNITYSDK_OFFSET(0xBC65F80)
#define NLFEAECMNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBC657B0)
#define NLFEAECMNAJ_DMGEBMEEKOP_OFFSET UNITYSDK_OFFSET(0xBC66A80)
#define NLFEAECMNAJ_FCLDEGPCBKC_OFFSET UNITYSDK_OFFSET(0xBC66050)
#define NLFEAECMNAJ_ICLCHHGBOMO_OFFSET UNITYSDK_OFFSET(0xBC65BA0)
#define NLFEAECMNAJ_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0xBC66E60)
#define NLFEAECMNAJ_LBKKGGBHHOA_OFFSET UNITYSDK_OFFSET(0xBC661C0)
#define NLFEAECMNAJ_NOCPJPMDIMA_OFFSET UNITYSDK_OFFSET(0xBC65C30)
#define NLFEAECMNAJ_PLFOIHCLAPC_OFFSET UNITYSDK_OFFSET(0xBC66580)

	class NLFEAECMNAJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AMOJDBFNICG; // 0x10
		::Il2CppArray<::System::Single>* JDBFEPOEEAN; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ListenerDirection, ::System::Single>* LIFPJKNOIJK; // 0x20
		::System::Single PCKOEELFGOJ; // 0x28
		::System::Single DLNBFPKBIOD; // 0x2C
		::System::Single PMCKIPFFFAJ; // 0x30
		::System::Single BNCAIBLOFCA; // 0x34
		::System::Int32 LDCPOKNHAHH; // 0x38
		::System::Single LGEOEEAHEGA; // 0x3C
		::System::Single MJEKMGBOCLB; // 0x40
		::System::Single MALNLGHBCCC; // 0x44
		::System::Single COFAKJALIDB; // 0x48
		::System::Single PAHBJLDKDFN; // 0x4C
		static ::RPG::Client::RPGProfilerMarker** StaticGet_IDJFLOLPMDO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "NLFEAECMNAJ")->GetStaticField(0x4B8B0);
		}

		// static const ::System::Object FIBFEMKAMJK; // 0x0
		// static const ::System::Object DODICPPKJEC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLFEAECMNAJ_CCTOR_OFFSET))();
		}

		::System::Void ICLCHHGBOMO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_ICLCHHGBOMO_OFFSET))(this, a1);
		}

		::System::Void NOCPJPMDIMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_NOCPJPMDIMA_OFFSET))(this);
		}

		::System::Void PLFOIHCLAPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_PLFOIHCLAPC_OFFSET))(this);
		}

		::System::Void DMGEBMEEKOP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_DMGEBMEEKOP_OFFSET))(this, a1);
		}

		::System::Void BCECDOCKJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_BCECDOCKJMO_OFFSET))(this);
		}

		::System::Void CFGGKLJOHDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_CFGGKLJOHDI_OFFSET))(this);
		}

		::System::Void CGMAKLJDOHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_CGMAKLJDOHD_OFFSET))(this);
		}

		::System::Void FCLDEGPCBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_FCLDEGPCBKC_OFFSET))(this);
		}

		::System::Void LBKKGGBHHOA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_LBKKGGBHHOA_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 IFOODPPCJIK(::RPG::Client::ListenerDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::ListenerDirection))((::PBYTE)hIl2Cpp + NLFEAECMNAJ_IFOODPPCJIK_OFFSET))(this, a1);
		}

	};
