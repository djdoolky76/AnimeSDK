#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class LJMKNOKMPKC;
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardAvatarViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardDetailItemBaseViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class CaseBoardServantViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class DoubleTeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class SingleTeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TeamViewModel; }
namespace RPG::Client::FateRin::CaseBoard { class TripleTeamViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HIOFEGAHCKE_BMGILNAAKIH_OFFSET UNITYSDK_OFFSET(0x15CFD480)
#define HIOFEGAHCKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15CFC160)
#define HIOFEGAHCKE_DLDDCGBKFED_OFFSET UNITYSDK_OFFSET(0x15CFC1E0)
#define HIOFEGAHCKE_EFHGPPOHENL_OFFSET UNITYSDK_OFFSET(0x15CFCE80)
#define HIOFEGAHCKE_EPOLCIFGBCG_OFFSET UNITYSDK_OFFSET(0x15CFC7D0)
#define HIOFEGAHCKE_FBJDCLKOHDK_OFFSET UNITYSDK_OFFSET(0x15CFC690)
#define HIOFEGAHCKE_FHBHBOFIAIG_OFFSET UNITYSDK_OFFSET(0x15CFD4F0)
#define HIOFEGAHCKE_GHFPDEIAACD_OFFSET UNITYSDK_OFFSET(0x15CFD280)
#define HIOFEGAHCKE_HPFKPIOKOAG_OFFSET UNITYSDK_OFFSET(0x15CFC8E0)
#define HIOFEGAHCKE_IKEKJFMNDNP_OFFSET UNITYSDK_OFFSET(0x15CFC580)
#define HIOFEGAHCKE_JIGNFCIJPHE_OFFSET UNITYSDK_OFFSET(0x15CFC340)
#define HIOFEGAHCKE_MEFLNMNDCJG_OFFSET UNITYSDK_OFFSET(0x15CFD410)
#define HIOFEGAHCKE_NIHAKMGLCAD_OFFSET UNITYSDK_OFFSET(0x15CFC940)

inline static constexpr unsigned int HIOFEGAHCKE_TypeDefinitionIndex = 80793;

	class HIOFEGAHCKE : public ::System::Object
	{
	public:
		::LJMKNOKMPKC* HEJEGOGBFMP; // 0x10
		::System::Void _ctor(::LJMKNOKMPKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJMKNOKMPKC*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* DLDDCGBKFED(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_DLDDCGBKFED_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* JIGNFCIJPHE(::RPG::Client::FateRin::CaseBoard::SingleTeamViewModel* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::SingleTeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_JIGNFCIJPHE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* IKEKJFMNDNP(::RPG::Client::FateRin::CaseBoard::DoubleTeamViewModel* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::DoubleTeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_IKEKJFMNDNP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* FBJDCLKOHDK(::RPG::Client::FateRin::CaseBoard::TripleTeamViewModel* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*(*)(::PVOID, ::RPG::Client::FateRin::CaseBoard::TripleTeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_FBJDCLKOHDK_OFFSET))(this, a1);
		}

		static ::System::Void EPOLCIFGBCG(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::TeamViewModel* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_EPOLCIFGBCG_OFFSET))(a1, a2);
		}

		static ::System::Boolean GHFPDEIAACD(::RPG::Client::FateRin::CaseBoard::TeamViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::TeamViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_GHFPDEIAACD_OFFSET))(a1);
		}

		::System::Void NIHAKMGLCAD(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_NIHAKMGLCAD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void EFHGPPOHENL(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>* a1, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel* a2, ::System::String* a3, ::RPG::Client::TextID a4, ::System::String* a5)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::RPG::Client::FateRin::CaseBoard::CaseBoardDetailItemBaseViewModel*>*, ::RPG::Client::FateRin::CaseBoard::CaseBoardServantViewModel*, ::System::String*, ::RPG::Client::TextID, ::System::String*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_EFHGPPOHENL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean HPFKPIOKOAG(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_HPFKPIOKOAG_OFFSET))(a1);
		}

		static ::System::Boolean BMGILNAAKIH(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_BMGILNAAKIH_OFFSET))(a1);
		}

		static ::System::Boolean MEFLNMNDCJG(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_MEFLNMNDCJG_OFFSET))(a1);
		}

		static ::System::Boolean FHBHBOFIAIG(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::FateRin::CaseBoard::CaseBoardAvatarViewModel*))((::PBYTE)hIl2Cpp + HIOFEGAHCKE_FHBHBOFIAIG_OFFSET))(a1);
		}

	};
