#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FMOEFNOMPOG;
class JBACCAGFHON;
class LGHPKEAODPH;
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client { class TriggerEffectParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FMOEFNOMPOG_AJDILFOHFAC_OFFSET UNITYSDK_OFFSET(0x15855B20)
#define FMOEFNOMPOG_AKPPKLEIOLD_OFFSET UNITYSDK_OFFSET(0x15857160)
#define FMOEFNOMPOG_BOIBNJNDIJP_OFFSET UNITYSDK_OFFSET(0x15856160)
#define FMOEFNOMPOG_BPBBGOODOJK_OFFSET UNITYSDK_OFFSET(0x15855E90)
#define FMOEFNOMPOG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15855BD0)
#define FMOEFNOMPOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x158571E0)
#define FMOEFNOMPOG_COJMIELIAMK_OFFSET UNITYSDK_OFFSET(0x15856EC0)
#define FMOEFNOMPOG_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0x158560A0)
#define FMOEFNOMPOG_CTOR_OFFSET UNITYSDK_OFFSET(0x15855D50)
#define FMOEFNOMPOG_DIEMHCNPNLN_OFFSET UNITYSDK_OFFSET(0x15855AC0)
#define FMOEFNOMPOG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15855E40)
#define FMOEFNOMPOG_EPGCKGMOCLP_OFFSET UNITYSDK_OFFSET(0x15856F40)
#define FMOEFNOMPOG_FKDFBDLNOEK_OFFSET UNITYSDK_OFFSET(0x15856340)
#define FMOEFNOMPOG_GHDIJCNKKOM_OFFSET UNITYSDK_OFFSET(0x15855A40)
#define FMOEFNOMPOG_HKHIAMPNPJK_1_OFFSET UNITYSDK_OFFSET(0x15856D80)
#define FMOEFNOMPOG_HKHIAMPNPJK_OFFSET UNITYSDK_OFFSET(0x15856660)
#define FMOEFNOMPOG_LDCKIFNBEPH_OFFSET UNITYSDK_OFFSET(0x158559B0)
#define FMOEFNOMPOG_MAPDACHABPC_OFFSET UNITYSDK_OFFSET(0x15856950)
#define FMOEFNOMPOG_NLDPEMAKLNC_OFFSET UNITYSDK_OFFSET(0x15856480)
#define FMOEFNOMPOG_PAFPGODPADL_OFFSET UNITYSDK_OFFSET(0x15856790)

inline static constexpr unsigned int FMOEFNOMPOG_TypeDefinitionIndex = 78031;

	class FMOEFNOMPOG : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::RPG::Client::TriggerEffectParams*>* HNMFNGLBCNL; // 0x10
		::JBACCAGFHON* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* GGDEONDMEAN; // 0x20
		static ::Il2CppArray<::System::String*>** StaticGet_MMMGBIOLKNP()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("", "FMOEFNOMPOG")->GetStaticField(0x50000);
		}

		// static const ::System::String* MEKIEMLBCIG; // 0x0
		// static const ::System::String* LAFFMDBFJHH; // 0x0
		// static const ::System::String* HIFFCHHFEJG; // 0x0
		// static const ::System::String* BMKFBMEDEMA; // 0x0
		// static const ::System::String* CEAIOBKBPIH; // 0x0
		// static const ::System::String* KGMCDDJFHKD; // 0x0
		// static const ::System::String* EBIBDDIOBOJ; // 0x0
		// static const ::System::String* OFOMGGPCLNJ; // 0x0
		// static const ::System::String* PMNJNHHKHHK; // 0x0
		// static const ::System::String* HLBDFKHNEDK; // 0x0
		// static const ::System::String* FGEPAACHILI; // 0x0
		// static const ::System::String* EMGKAPJPCFE; // 0x0
		// static const ::System::String* ANELBBLMOND; // 0x0
		// static const ::System::String* AEMMKECENEM; // 0x0
		// static const ::System::String* GCDCKFPONEE; // 0x0
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FMOEFNOMPOG_CCTOR_OFFSET))();
		}

		::System::String* LDCKIFNBEPH(::RPG::GameCore::CakeRaceCellType a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::CakeRaceCellType))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_LDCKIFNBEPH_OFFSET))(this, a1);
		}

		::LGHPKEAODPH* GHDIJCNKKOM()
		{
			return ((::LGHPKEAODPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_GHDIJCNKKOM_OFFSET))(this);
		}

		::UnityEngine::Transform* DIEMHCNPNLN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_DIEMHCNPNLN_OFFSET))(this);
		}

		::RPG::Client::MonoEffectManager* AJDILFOHFAC()
		{
			return ((::RPG::Client::MonoEffectManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_AJDILFOHFAC_OFFSET))(this);
		}

		static ::FMOEFNOMPOG* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::FMOEFNOMPOG*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_DISPOSE_OFFSET))(this);
		}

		::System::Void BPBBGOODOJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_BPBBGOODOJK_OFFSET))(this);
		}

		::RPG::Client::TriggerEffectParams* FKDFBDLNOEK(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_FKDFBDLNOEK_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TriggerEffectParams* NLDPEMAKLNC(::System::String* a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::RPG::Client::TriggerEffectParams*(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_NLDPEMAKLNC_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::MonoEffect* PAFPGODPADL(::System::String* a1, ::UnityEngine::Transform* a2, ::System::Single a3)
		{
			return ((::RPG::Client::MonoEffect*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::System::Single))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_PAFPGODPADL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CPNEMOBKHEL(::RPG::Client::TriggerEffectParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_CPNEMOBKHEL_OFFSET))(this, a1);
		}

		::System::Void HKHIAMPNPJK(::System::Single a1, ::RPG::Client::TriggerEffectParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::TriggerEffectParams*))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_HKHIAMPNPJK_OFFSET))(this, a1, a2);
		}

		::System::ValueTuple_2<::System::Int32, ::UnityEngine::GameObject*> MAPDACHABPC(::System::String* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::UnityEngine::GameObject*>(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_MAPDACHABPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void BOIBNJNDIJP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_BOIBNJNDIJP_OFFSET))(this, a1);
		}

		::System::Void HKHIAMPNPJK_1(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_HKHIAMPNPJK_1_OFFSET))(this, a1, a2);
		}

		::System::String* COJMIELIAMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_COJMIELIAMK_OFFSET))(this);
		}

		::System::String* AKPPKLEIOLD()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_AKPPKLEIOLD_OFFSET))(this);
		}

		::System::Boolean EPGCKGMOCLP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FMOEFNOMPOG_EPGCKGMOCLP_OFFSET))(this);
		}

	};
