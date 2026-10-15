#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHODDAGHLFG;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RogueFormulaData; }
namespace RPG::Client { class RogueTournBuildRefTeamAvatarMemberData; }
namespace RPG::Client { class RogueTournBuildRefTeamData; }
namespace RPG::Client { class RogueTournBuildRefTeamPathMemberData; }
namespace RPG::Client { class RogueTournHexData; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LKHGIONKMPM_AIINMBHFGLH_OFFSET UNITYSDK_OFFSET(0xB744840)
#define LKHGIONKMPM_AJHGANDDMMP_OFFSET UNITYSDK_OFFSET(0xB746EB0)
#define LKHGIONKMPM_ALHMBNKFGFA_OFFSET UNITYSDK_OFFSET(0xB744970)
#define LKHGIONKMPM_BHIPNIJFKEN_1_OFFSET UNITYSDK_OFFSET(0xB745B40)
#define LKHGIONKMPM_BHIPNIJFKEN_OFFSET UNITYSDK_OFFSET(0xB744E70)
#define LKHGIONKMPM_CBLLPOENDBM_OFFSET UNITYSDK_OFFSET(0xB7453C0)
#define LKHGIONKMPM_CLEAR_OFFSET UNITYSDK_OFFSET(0xB744600)
#define LKHGIONKMPM_CTOR_OFFSET UNITYSDK_OFFSET(0xB746FD0)
#define LKHGIONKMPM_DCJMBDMJCPF_OFFSET UNITYSDK_OFFSET(0xB744780)
#define LKHGIONKMPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB744730)
#define LKHGIONKMPM_GKEJPMKJGAM_OFFSET UNITYSDK_OFFSET(0xB7450E0)
#define LKHGIONKMPM_HFNEFMCKDIK_OFFSET UNITYSDK_OFFSET(0xB745E20)
#define LKHGIONKMPM_LGMBLLKPOBN_OFFSET UNITYSDK_OFFSET(0xB744AF0)
#define LKHGIONKMPM_LLHCIDOCMLH_OFFSET UNITYSDK_OFFSET(0xB744C40)
#define LKHGIONKMPM_LOKBAJFLHDI_OFFSET UNITYSDK_OFFSET(0xB744A30)
#define LKHGIONKMPM_MHDHFCDIPMC_1_OFFSET UNITYSDK_OFFSET(0xB745CE0)
#define LKHGIONKMPM_MHDHFCDIPMC_OFFSET UNITYSDK_OFFSET(0xB745240)
#define LKHGIONKMPM_MNOJNPNILLP_1_OFFSET UNITYSDK_OFFSET(0xB745A00)
#define LKHGIONKMPM_MNOJNPNILLP_OFFSET UNITYSDK_OFFSET(0xB744D00)

inline static constexpr unsigned int LKHGIONKMPM_TypeDefinitionIndex = 67521;

	class LKHGIONKMPM : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* EHNDJEFPGDB; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::RogueFormulaData*>* CBHKFBHONGN; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* FKGABOBPOGB; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournBuildRefTeamData*>* ABBHEIAHCKI; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueTournHexData*>* HGPANPDJBGF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIONKMPM_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIONKMPM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIONKMPM_DISPOSE_OFFSET))(this);
		}

		::System::Void DCJMBDMJCPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_DCJMBDMJCPF_OFFSET))(this, a1);
		}

		::System::Void ALHMBNKFGFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_ALHMBNKFGFA_OFFSET))(this, a1);
		}

		::System::Void LOKBAJFLHDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_LOKBAJFLHDI_OFFSET))(this, a1);
		}

		::System::Void LLHCIDOCMLH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_LLHCIDOCMLH_OFFSET))(this, a1);
		}

		::System::Void MNOJNPNILLP(::System::Int32 a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_MNOJNPNILLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MHDHFCDIPMC(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::IList_1<::System::Int32>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKHGIONKMPM_MHDHFCDIPMC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MNOJNPNILLP_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_MNOJNPNILLP_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void MHDHFCDIPMC_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Collections::Generic::IList_1<::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKHGIONKMPM_MHDHFCDIPMC_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::PHODDAGHLFG* HFNEFMCKDIK()
		{
			return ((::PHODDAGHLFG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHGIONKMPM_HFNEFMCKDIK_OFFSET))(this);
		}

		::RPG::Client::RogueFormulaData* AIINMBHFGLH(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueFormulaData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_AIINMBHFGLH_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournHexData* LGMBLLKPOBN(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournHexData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_LGMBLLKPOBN_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournBuildRefTeamAvatarMemberData* GKEJPMKJGAM(::System::UInt32 a1)
		{
			return ((::RPG::Client::RogueTournBuildRefTeamAvatarMemberData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_GKEJPMKJGAM_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* AJHGANDDMMP(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_AJHGANDDMMP_OFFSET))(this, a1);
		}

		::RPG::Client::RogueTournBuildRefTeamPathMemberData* CBLLPOENDBM(::System::Collections::Generic::IList_1<::System::Int32>* a1)
		{
			return ((::RPG::Client::RogueTournBuildRefTeamPathMemberData*(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LKHGIONKMPM_CBLLPOENDBM_OFFSET))(this, a1);
		}

		::System::Void BHIPNIJFKEN(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_BHIPNIJFKEN_OFFSET))(this, a1, a2);
		}

		::System::Void BHIPNIJFKEN_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LKHGIONKMPM_BHIPNIJFKEN_1_OFFSET))(this, a1, a2, a3);
		}

	};
