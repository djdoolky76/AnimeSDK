#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
class BILNKKBKIAN;
class KAPEMBCNNIG;
class PKIGJIJEJEG;
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define FCGJHLGIMDP_AIHGBJEKFGB_OFFSET UNITYSDK_OFFSET(0x165D5150)
#define FCGJHLGIMDP_BEMNIGFMKLA_OFFSET UNITYSDK_OFFSET(0x165D54B0)
#define FCGJHLGIMDP_CTOR_OFFSET UNITYSDK_OFFSET(0x165D5560)
#define FCGJHLGIMDP_FMEFLJLPMDN_OFFSET UNITYSDK_OFFSET(0x165D50B0)
#define FCGJHLGIMDP_GCEIAJJHKAO_OFFSET UNITYSDK_OFFSET(0x165D4A30)
#define FCGJHLGIMDP_GONGEHMLJMD_OFFSET UNITYSDK_OFFSET(0x165D4E20)
#define FCGJHLGIMDP_JGBGPMICGNF_OFFSET UNITYSDK_OFFSET(0x165D4FE0)
#define FCGJHLGIMDP_JLJGGGFDNAO_OFFSET UNITYSDK_OFFSET(0x165D4C80)
#define FCGJHLGIMDP_LHCHNMOBODD_OFFSET UNITYSDK_OFFSET(0x165D5320)
#define FCGJHLGIMDP_MJIKDLADJLO_OFFSET UNITYSDK_OFFSET(0x165D53D0)
#define FCGJHLGIMDP_PDAMBKEDBFC_OFFSET UNITYSDK_OFFSET(0x165D49A0)
#define FCGJHLGIMDP__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x165D4940)

inline static constexpr unsigned int FCGJHLGIMDP_TypeDefinitionIndex = 73563;

	class FCGJHLGIMDP : public ::FMPCODLIOLG
	{
	public:
		::KAPEMBCNNIG* OHAANDBJIOD; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Stack_1<::PKIGJIJEJEG*>*>* HLGEFDFMPFJ; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CrosshairType, ::KAPEMBCNNIG*>* KOHLIKPKELF; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGJHLGIMDP__INITVARONCE_OFFSET))(this);
		}

		::PKIGJIJEJEG* PDAMBKEDBFC(::RPG::GameCore::GameEntity* a1, ::BILNKKBKIAN* a2)
		{
			return ((::PKIGJIJEJEG*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_PDAMBKEDBFC_OFFSET))(this, a1, a2);
		}

		::System::Void JGBGPMICGNF(::PKIGJIJEJEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKIGJIJEJEG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_JGBGPMICGNF_OFFSET))(this, a1);
		}

		::System::Boolean LHCHNMOBODD(::RPG::GameCore::GameEntity* a1, ::BILNKKBKIAN* a2, ::PKIGJIJEJEG* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BILNKKBKIAN*, ::PKIGJIJEJEG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_LHCHNMOBODD_OFFSET))(this, a1, a2, a3);
		}

		::PKIGJIJEJEG* JLJGGGFDNAO(::BILNKKBKIAN* a1, ::KAPEMBCNNIG* a2)
		{
			return ((::PKIGJIJEJEG*(*)(::PVOID, ::BILNKKBKIAN*, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_JLJGGGFDNAO_OFFSET))(this, a1, a2);
		}

		::PKIGJIJEJEG* MJIKDLADJLO(::System::String* a1)
		{
			return ((::PKIGJIJEJEG*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_MJIKDLADJLO_OFFSET))(this, a1);
		}

		::PKIGJIJEJEG* GONGEHMLJMD(::BILNKKBKIAN* a1, ::KAPEMBCNNIG* a2)
		{
			return ((::PKIGJIJEJEG*(*)(::PVOID, ::BILNKKBKIAN*, ::KAPEMBCNNIG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_GONGEHMLJMD_OFFSET))(this, a1, a2);
		}

		::System::Void FMEFLJLPMDN(::PKIGJIJEJEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKIGJIJEJEG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_FMEFLJLPMDN_OFFSET))(this, a1);
		}

		::System::Void AIHGBJEKFGB(::PKIGJIJEJEG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKIGJIJEJEG*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_AIHGBJEKFGB_OFFSET))(this, a1);
		}

		::KAPEMBCNNIG* GCEIAJJHKAO(::RPG::GameCore::GameEntity* a1, ::BILNKKBKIAN* a2)
		{
			return ((::KAPEMBCNNIG*(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::BILNKKBKIAN*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_GCEIAJJHKAO_OFFSET))(this, a1, a2);
		}

		::System::Boolean BEMNIGFMKLA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FCGJHLGIMDP_BEMNIGFMKLA_OFFSET))(this, a1);
		}

	};
