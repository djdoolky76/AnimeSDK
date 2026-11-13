#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ListenerDirection.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class RPGProfilerMarker; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLFEAECMNAJ_BCECDOCKJMO_OFFSET UNITYSDK_OFFSET(0x1A4227E0)
#define NLFEAECMNAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A4248E0)
#define NLFEAECMNAJ_CFGGKLJOHDI_OFFSET UNITYSDK_OFFSET(0x1A422920)
#define NLFEAECMNAJ_CGMAKLJDOHD_OFFSET UNITYSDK_OFFSET(0x1A422AA0)
#define NLFEAECMNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A4222D0)
#define NLFEAECMNAJ_DMGEBMEEKOP_OFFSET UNITYSDK_OFFSET(0x1A423590)
#define NLFEAECMNAJ_FCLDEGPCBKC_OFFSET UNITYSDK_OFFSET(0x1A422B70)
#define NLFEAECMNAJ_ICLCHHGBOMO_OFFSET UNITYSDK_OFFSET(0x1A4226C0)
#define NLFEAECMNAJ_IFOODPPCJIK_OFFSET UNITYSDK_OFFSET(0x1A423960)
#define NLFEAECMNAJ_LBKKGGBHHOA_OFFSET UNITYSDK_OFFSET(0x1A422CE0)
#define NLFEAECMNAJ_NOCPJPMDIMA_OFFSET UNITYSDK_OFFSET(0x1A422750)
#define NLFEAECMNAJ_PLFOIHCLAPC_OFFSET UNITYSDK_OFFSET(0x1A423090)

inline static constexpr unsigned int NLFEAECMNAJ_TypeDefinitionIndex = 61029;

	class NLFEAECMNAJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* AMOJDBFNICG; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::Client::ListenerDirection, ::System::Single>* LIFPJKNOIJK; // 0x18
		::Il2CppArray<::System::Single>* JDBFEPOEEAN; // 0x20
		::System::Single COFAKJALIDB; // 0x28
		::System::Single BNCAIBLOFCA; // 0x2C
		::System::Single MALNLGHBCCC; // 0x30
		::System::Int32 LDCPOKNHAHH; // 0x34
		::System::Single LGEOEEAHEGA; // 0x38
		::System::Single MJEKMGBOCLB; // 0x3C
		::System::Single PAHBJLDKDFN; // 0x40
		::System::Single DLNBFPKBIOD; // 0x44
		::System::Single PCKOEELFGOJ; // 0x48
		::System::Single PMCKIPFFFAJ; // 0x4C
		static ::RPG::Client::RPGProfilerMarker** StaticGet_IDJFLOLPMDO()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("", "NLFEAECMNAJ")->GetStaticField(0x52C30);
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
