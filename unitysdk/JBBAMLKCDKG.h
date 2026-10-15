#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AHDANEIIJML;
class AHDANEIIJML_BBEEKLGNJLL;
class FBECENEMLNO_ILIKDIHMNDH;
class FJFNJCPHFDM;
class FOACJPEHDKO;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentActorViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentDetailViewModel_Factory; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftTalentPointViewModel; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBBAMLKCDKG_BHKMCLHOILJ_OFFSET UNITYSDK_OFFSET(0x16551B70)
#define JBBAMLKCDKG_CTOR_OFFSET UNITYSDK_OFFSET(0x16550E40)
#define JBBAMLKCDKG_DMCGENFGCIP_OFFSET UNITYSDK_OFFSET(0x165517E0)
#define JBBAMLKCDKG_ENABKPNKLFO_OFFSET UNITYSDK_OFFSET(0x165519A0)
#define JBBAMLKCDKG_GPBOBBJFNKG_OFFSET UNITYSDK_OFFSET(0x16551C90)
#define JBBAMLKCDKG_MIOPHNALKFJ_OFFSET UNITYSDK_OFFSET(0x16552130)
#define JBBAMLKCDKG_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x16550E60)

inline static constexpr unsigned int JBBAMLKCDKG_TypeDefinitionIndex = 79766;

	class JBBAMLKCDKG : public ::System::Object
	{
	public:
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x10
		::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory* OOBELGDLFNK; // 0x18
		::FBECENEMLNO_ILIKDIHMNDH* NDEOLJBEHDM; // 0x20
		::AHDANEIIJML_BBEEKLGNJLL* BAPFPEGJJHP; // 0x28
		::System::Void _ctor(::FJFNJCPHFDM* a1, ::AHDANEIIJML_BBEEKLGNJLL* a2, ::FBECENEMLNO_ILIKDIHMNDH* a3, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory* a4)
		{
			return ((::System::Void(*)(::PVOID, ::FJFNJCPHFDM*, ::AHDANEIIJML_BBEEKLGNJLL*, ::FBECENEMLNO_ILIKDIHMNDH*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel_Factory*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKADDEPKJFN(::System::Func_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>* a1, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>* a2, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a3, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* a4, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>*, ::System::Action_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentDetailViewModel*>*, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_PKADDEPKJFN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::AHDANEIIJML*>* GPBOBBJFNKG(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::FOACJPEHDKO* a2, ::System::UInt32 a3)
		{
			return ((::System::Collections::Generic::List_1<::AHDANEIIJML*>*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::FOACJPEHDKO*, ::System::UInt32))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_GPBOBBJFNKG_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::TextID BHKMCLHOILJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::FOACJPEHDKO* a2)
		{
			return ((::RPG::Client::TextID(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_BHKMCLHOILJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* MIOPHNALKFJ(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::FOACJPEHDKO* a2)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::FOACJPEHDKO*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_MIOPHNALKFJ_OFFSET))(this, a1, a2);
		}

		::FOACJPEHDKO* DMCGENFGCIP(::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel* a1, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>* a2)
		{
			return ((::FOACJPEHDKO*(*)(::PVOID, ::RPG::Client::MechCraft::ViewModel::MechCraftTalentPointViewModel*, ::System::Collections::Generic::IReadOnlyList_1<::FOACJPEHDKO*>*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_DMCGENFGCIP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel* ENABKPNKLFO(::FOACJPEHDKO* a1, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>* a2)
		{
			return ((::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*(*)(::PVOID, ::FOACJPEHDKO*, ::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::MechCraft::ViewModel::MechCraftTalentActorViewModel*>*))((::PBYTE)hIl2Cpp + JBBAMLKCDKG_ENABKPNKLFO_OFFSET))(this, a1, a2);
		}

	};
