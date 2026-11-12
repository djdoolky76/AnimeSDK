#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CakeRaceBattleItemUIHandler_MouseCornerPositionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFCBKPOGNHF;
class FDLCNGPGEFP;
class HBBCDNAHNMH;
class JBACCAGFHON;
class MIMCAGPCALM;
namespace RPG::Client { class CakeRaceBattleItemUIHandler; }
namespace RPG::Client { class UIPrefabLoader; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFCBKPOGNHF_AJOBJHFLAHC_OFFSET UNITYSDK_OFFSET(0xD36DDC0)
#define CFCBKPOGNHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xD36BBE0)
#define CFCBKPOGNHF_CNLJMBCPMEB_OFFSET UNITYSDK_OFFSET(0xD36D590)
#define CFCBKPOGNHF_CTOR_OFFSET UNITYSDK_OFFSET(0xD36BD00)
#define CFCBKPOGNHF_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xD36BDA0)
#define CFCBKPOGNHF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD36C340)
#define CFCBKPOGNHF_FFHHNGLCMKB_OFFSET UNITYSDK_OFFSET(0xD36D540)
#define CFCBKPOGNHF_FGOHFPJJNOJ_OFFSET UNITYSDK_OFFSET(0xD36CF30)
#define CFCBKPOGNHF_FIDFGDIKNJO_OFFSET UNITYSDK_OFFSET(0xD36DC40)
#define CFCBKPOGNHF_GOFDJGDCANL_OFFSET UNITYSDK_OFFSET(0xD36D500)
#define CFCBKPOGNHF_HPOCOOGHMIL_OFFSET UNITYSDK_OFFSET(0xD36CC20)
#define CFCBKPOGNHF_KAJADGOBDGB_OFFSET UNITYSDK_OFFSET(0xD36BB80)
#define CFCBKPOGNHF_KJAMCCEAAFC_OFFSET UNITYSDK_OFFSET(0xD36DAA0)
#define CFCBKPOGNHF_NDLAPNBKJMF_OFFSET UNITYSDK_OFFSET(0xD36BB20)
#define CFCBKPOGNHF_OMFHEPIDMEK_OFFSET UNITYSDK_OFFSET(0xD36CE20)
#define CFCBKPOGNHF_POFIDDFMHFP_OFFSET UNITYSDK_OFFSET(0xD36DF40)
#define CFCBKPOGNHF_PPFMDABNMOA_OFFSET UNITYSDK_OFFSET(0xD36C710)

inline static constexpr unsigned int CFCBKPOGNHF_TypeDefinitionIndex = 80818;

	class CFCBKPOGNHF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HBBCDNAHNMH*>* PMNOOCCIHKE; // 0x10
		::RPG::Client::UIPrefabLoader* NJGOCLCBJKI; // 0x18
		::JBACCAGFHON* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::JBACCAGFHON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_CTOR_OFFSET))(this, a1);
		}

		::MIMCAGPCALM* NDLAPNBKJMF()
		{
			return ((::MIMCAGPCALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_NDLAPNBKJMF_OFFSET))(this);
		}

		::RPG::Client::CakeRaceBattleItemUIHandler* KAJADGOBDGB()
		{
			return ((::RPG::Client::CakeRaceBattleItemUIHandler*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_KAJADGOBDGB_OFFSET))(this);
		}

		static ::CFCBKPOGNHF* BPLPBPMEODA(::JBACCAGFHON* a1)
		{
			return ((::CFCBKPOGNHF*(*)(::JBACCAGFHON*))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HPOCOOGHMIL(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_HPOCOOGHMIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean OMFHEPIDMEK(::System::UInt32 a1, ::System::UInt32 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_OMFHEPIDMEK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FGOHFPJJNOJ(::FDLCNGPGEFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDLCNGPGEFP*))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_FGOHFPJJNOJ_OFFSET))(this, a1);
		}

		::System::Void GOFDJGDCANL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_GOFDJGDCANL_OFFSET))(this);
		}

		::System::Void FFHHNGLCMKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_FFHHNGLCMKB_OFFSET))(this);
		}

		::System::Void CNLJMBCPMEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_CNLJMBCPMEB_OFFSET))(this);
		}

		::System::Void PPFMDABNMOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_PPFMDABNMOA_OFFSET))(this);
		}

		::System::Void KJAMCCEAAFC(::System::UInt32 a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_KJAMCCEAAFC_OFFSET))(this, a1, a2);
		}

		::System::Boolean FIDFGDIKNJO(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_FIDFGDIKNJO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean AJOBJHFLAHC(::System::UInt32 a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_AJOBJHFLAHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void POFIDDFMHFP(::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CakeRaceBattleItemUIHandler_MouseCornerPositionType, ::System::Boolean))((::PBYTE)hIl2Cpp + CFCBKPOGNHF_POFIDDFMHFP_OFFSET))(this, a1, a2);
		}

	};
