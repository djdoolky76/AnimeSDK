#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DFGDEHAHLHC;
class EMJIDLCDFMI;
class FDPALAEIHPB;
class GFHCKBHCNDF;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ManikinPetConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define OOIIMCDEJMM_COCCHMHOFIE_OFFSET UNITYSDK_OFFSET(0xBF88170)
#define OOIIMCDEJMM_CTOR_OFFSET UNITYSDK_OFFSET(0xBF87150)
#define OOIIMCDEJMM_DGMPJKCLFJG_OFFSET UNITYSDK_OFFSET(0xBF887B0)
#define OOIIMCDEJMM_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0xBF87590)
#define OOIIMCDEJMM_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBF87390)
#define OOIIMCDEJMM_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xBF88910)
#define OOIIMCDEJMM_KNCFDAMLDPD_OFFSET UNITYSDK_OFFSET(0xBF88560)
#define OOIIMCDEJMM_MEKJCODMOLB_OFFSET UNITYSDK_OFFSET(0xBF88310)
#define OOIIMCDEJMM_NKEDEJLKMKB_OFFSET UNITYSDK_OFFSET(0xBF87400)
#define OOIIMCDEJMM_NLMBBMBICHC_OFFSET UNITYSDK_OFFSET(0xBF87DD0)
#define OOIIMCDEJMM_OMOGOMNAFIH_OFFSET UNITYSDK_OFFSET(0xBF87550)

inline static constexpr unsigned int OOIIMCDEJMM_TypeDefinitionIndex = 76550;

	class OOIIMCDEJMM : public ::HLFHMKMJNPK
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::GameEntity*>* KPCHLAHHILG; // 0x18
		::EMJIDLCDFMI* PDENFEFCAGN; // 0x20
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::String*, ::UnityEngine::Renderer*>, ::Il2CppArray<::UnityEngine::Material*>*>*>* HPJKCGGKPPO; // 0x30
		::FDPALAEIHPB* FKINCGODJEP; // 0x38
		::System::Void _ctor(::FDPALAEIHPB* a1, ::EMJIDLCDFMI* a2, ::UnityEngine::Transform* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::EMJIDLCDFMI*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_HADOHLNHHGB_OFFSET))(this);
		}

		::UnityEngine::Transform* OMOGOMNAFIH()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_OMOGOMNAFIH_OFFSET))(this);
		}

		::System::Void DJPEJOPFANL(::DFGDEHAHLHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_DJPEJOPFANL_OFFSET))(this, a1);
		}

		::System::Void COCCHMHOFIE(::DFGDEHAHLHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_COCCHMHOFIE_OFFSET))(this, a1);
		}

		::System::Void NLMBBMBICHC(::UnityEngine::GameObject* a1, ::DFGDEHAHLHC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_NLMBBMBICHC_OFFSET))(this, a1, a2);
		}

		::System::Void KNCFDAMLDPD(::UnityEngine::GameObject* a1, ::DFGDEHAHLHC* a2, ::RPG::GameCore::ManikinPetConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::DFGDEHAHLHC*, ::RPG::GameCore::ManikinPetConfig*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_KNCFDAMLDPD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGMPJKCLFJG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_DGMPJKCLFJG_OFFSET))(this, a1);
		}

		::System::Void NKEDEJLKMKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_NKEDEJLKMKB_OFFSET))(this);
		}

		static ::RPG::GameCore::ManikinPetConfig* MEKJCODMOLB(::DFGDEHAHLHC* a1, ::GFHCKBHCNDF* a2)
		{
			return ((::RPG::GameCore::ManikinPetConfig*(*)(::DFGDEHAHLHC*, ::GFHCKBHCNDF*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_MEKJCODMOLB_OFFSET))(a1, a2);
		}

		::System::Void KJMDJMBNCPE(::DFGDEHAHLHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFGDEHAHLHC*))((::PBYTE)hIl2Cpp + OOIIMCDEJMM_KJMDJMBNCPE_OFFSET))(this, a1);
		}

	};
