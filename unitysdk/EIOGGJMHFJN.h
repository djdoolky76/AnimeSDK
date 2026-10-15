#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJKHPOHKIIF.h"
class EKFMIDBJDIA;
namespace RPG::Client { class BattleGamePhase; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class BattleLineupData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EIOGGJMHFJN_AJLCJJOOOOE_OFFSET UNITYSDK_OFFSET(0x154C7820)
#define EIOGGJMHFJN_CTOR_OFFSET UNITYSDK_OFFSET(0x154C93B0)
#define EIOGGJMHFJN_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x154C77D0)
#define EIOGGJMHFJN_DFMGJDBOABB_OFFSET UNITYSDK_OFFSET(0x154C8A30)
#define EIOGGJMHFJN_DLCMFFMNAOB_OFFSET UNITYSDK_OFFSET(0x154C9070)
#define EIOGGJMHFJN_FBJODINCIIL_OFFSET UNITYSDK_OFFSET(0x154C9270)
#define EIOGGJMHFJN_GAFKECIDLJG_OFFSET UNITYSDK_OFFSET(0x154C8660)
#define EIOGGJMHFJN_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x154C7A60)
#define EIOGGJMHFJN_GNLKPJHAKHM_OFFSET UNITYSDK_OFFSET(0x154C8840)
#define EIOGGJMHFJN_HCJAKHHNDOC_OFFSET UNITYSDK_OFFSET(0x154C88B0)
#define EIOGGJMHFJN_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x154C91E0)
#define EIOGGJMHFJN_KFADIFMHFKO_OFFSET UNITYSDK_OFFSET(0x154C9110)
#define EIOGGJMHFJN_KLDLNIGMLNP_OFFSET UNITYSDK_OFFSET(0x154C7D20)
#define EIOGGJMHFJN_KNLHMCPBOFD_OFFSET UNITYSDK_OFFSET(0x154C8B80)
#define EIOGGJMHFJN_NMBINJBMFCA_OFFSET UNITYSDK_OFFSET(0x154C9310)

inline static constexpr unsigned int EIOGGJMHFJN_TypeDefinitionIndex = 59708;

	class EIOGGJMHFJN : public ::LJKHPOHKIIF
	{
	public:
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x20
		::RPG::Client::BattleGamePhase* NOHNKAIALPJ; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_CTOR_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void GAFKECIDLJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_GAFKECIDLJG_OFFSET))(this);
		}

		::System::Void GNLKPJHAKHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_GNLKPJHAKHM_OFFSET))(this);
		}

		::System::Void AJLCJJOOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_AJLCJJOOOOE_OFFSET))(this);
		}

		::System::Void HCJAKHHNDOC(::RPG::GameCore::BattleLineupData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleLineupData*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_HCJAKHHNDOC_OFFSET))(this, a1);
		}

		::System::Void DFMGJDBOABB(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_DFMGJDBOABB_OFFSET))(this, a1);
		}

		::System::Void KLDLNIGMLNP(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_KLDLNIGMLNP_OFFSET))(this, a1, a2);
		}

		::System::Void KNLHMCPBOFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_KNLHMCPBOFD_OFFSET))(this);
		}

		::System::Void DLCMFFMNAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_DLCMFFMNAOB_OFFSET))(this, a1);
		}

		::System::Void KFADIFMHFKO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_KFADIFMHFKO_OFFSET))(this, a1);
		}

		::System::Void IAAOBCKAGPF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_IAAOBCKAGPF_OFFSET))(this, a1);
		}

		::System::Void FBJODINCIIL(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_FBJODINCIIL_OFFSET))(this, a1);
		}

		::System::Void NMBINJBMFCA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EIOGGJMHFJN_NMBINJBMFCA_OFFSET))(this, a1);
		}

	};
