#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGBNECNBMJJ.h"
#include "unitysdk/EBJACILBIBB.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/HitAnimDirectionType.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KPNIFGIKELE;
class NLNIIPDCABP;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigHitEffect; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IBGOGDAEGIK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x141B0D00)
#define IBGOGDAEGIK_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x141B0FA0)
#define IBGOGDAEGIK__CTOR_OFFSET UNITYSDK_OFFSET(0x141B0CF0)

inline static constexpr unsigned int IBGOGDAEGIK_TypeDefinitionIndex = 58974;

class IBGOGDAEGIK : public ::System::Object
{
public:
	::MoleMole::Config::ConfigHitEffect* KPPEIMIOHPG; // 0x10
	::MoleMole::Config::ConfigHitEffect* MBJKJHKICHD; // 0x18
	::System::String* DNOHAOIAFOP; // 0x20
	::NLNIIPDCABP* FNFNDIBMPDE; // 0x28
	::MoleMole::Battle::Entity* MFMPICKHAMJ; // 0x30
	::KPNIFGIKELE* EEBHMONLMKK; // 0x38
	::MoleMole::Config::ConfigHitEffect* GLHGBIEJFEF; // 0x40
	::MoleMole::Config::HitForwardType ENOGCDMJLCG; // 0x48
	::UnityEngine::Vector3 LKKJMPKFCIA; // 0x4C
	::System::Boolean KFGFMLMFEDF; // 0x58
	::System::Boolean CNPGHPMPAID; // 0x59
	::System::Boolean ODBKMIAMNCA; // 0x5A
	::System::Byte _padding0[0x1];
	::MoleMole::Config::HitAnimDirectionType EBKDOFEBHGJ; // 0x5C
	::EBJACILBIBB HAOKBBGGNKB; // 0x60
	::MoleMole::Config::AnimatorBeHitTag JGENBGFAJJJ; // 0x64
	::System::Int32 HLBKHEFJAPH; // 0x68
	::System::Int32 PAKHENNMFIK; // 0x6C
	::BGBNECNBMJJ CGECDPFFMLJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBGOGDAEGIK__CTOR_OFFSET))(this);
	}

	static ::IBGOGDAEGIK* COKNIICCODC(::NLNIIPDCABP* FNFNDIBMPDE, ::EBJACILBIBB HAOKBBGGNKB, ::System::Int32 PAKHENNMFIK, ::System::String* DNOHAOIAFOP, ::MoleMole::Config::ConfigHitEffect* MBJKJHKICHD, ::MoleMole::Config::ConfigHitEffect* GLHGBIEJFEF, ::MoleMole::Config::ConfigHitEffect* KPPEIMIOHPG, ::MoleMole::Config::HitAnimDirectionType EBKDOFEBHGJ, ::BGBNECNBMJJ CGECDPFFMLJ, ::System::Boolean KFGFMLMFEDF, ::UnityEngine::Vector3 LKKJMPKFCIA, ::System::Boolean ODBKMIAMNCA, ::KPNIFGIKELE* EEBHMONLMKK, ::MoleMole::Battle::Entity* MFMPICKHAMJ, ::MoleMole::Config::HitForwardType ENOGCDMJLCG, ::MoleMole::Config::AnimatorBeHitTag JGENBGFAJJJ, ::System::Int32 DKOFFFNEFJC, ::System::Boolean CNPGHPMPAID)
	{
		return ((::IBGOGDAEGIK*(*)(::NLNIIPDCABP*, ::EBJACILBIBB, ::System::Int32, ::System::String*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::HitAnimDirectionType, ::BGBNECNBMJJ, ::System::Boolean, ::UnityEngine::Vector3, ::System::Boolean, ::KPNIFGIKELE*, ::MoleMole::Battle::Entity*, ::MoleMole::Config::HitForwardType, ::MoleMole::Config::AnimatorBeHitTag, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + IBGOGDAEGIK_COKNIICCODC_OFFSET))(FNFNDIBMPDE, HAOKBBGGNKB, PAKHENNMFIK, DNOHAOIAFOP, MBJKJHKICHD, GLHGBIEJFEF, KPPEIMIOHPG, EBKDOFEBHGJ, CGECDPFFMLJ, KFGFMLMFEDF, LKKJMPKFCIA, ODBKMIAMNCA, EEBHMONLMKK, MFMPICKHAMJ, ENOGCDMJLCG, JGENBGFAJJJ, DKOFFFNEFJC, CNPGHPMPAID);
	}

	static ::System::Void MBKDOMFJFIG(::System::Collections::Generic::List_1<::IBGOGDAEGIK*>* PFDPAOLJBAN)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::IBGOGDAEGIK*>*))((::PBYTE)hIl2Cpp + IBGOGDAEGIK_MBKDOMFJFIG_OFFSET))(PFDPAOLJBAN);
	}
};
