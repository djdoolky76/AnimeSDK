#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APCGKBOPGJL.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class GIDHOABFFFP;
class LHHMHJIFHNE;
class MGLBNNIPDMC;
namespace RPG::AvatarSystem { class Avatar; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HGJDKPIBJBI_AICHGMFOELH_OFFSET UNITYSDK_OFFSET(0x15CA3160)
#define HGJDKPIBJBI_ANEHFOKKBIG_OFFSET UNITYSDK_OFFSET(0x15CA1CC0)
#define HGJDKPIBJBI_CCMEAOFNKKH_OFFSET UNITYSDK_OFFSET(0x15CA2490)
#define HGJDKPIBJBI_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA15F0)
#define HGJDKPIBJBI_EFKOOEHNHFA_OFFSET UNITYSDK_OFFSET(0x15CA3200)
#define HGJDKPIBJBI_EKBKMGHFDFH_OFFSET UNITYSDK_OFFSET(0x15CA30B0)
#define HGJDKPIBJBI_EMBEKKBMPNO_OFFSET UNITYSDK_OFFSET(0x15CA3000)
#define HGJDKPIBJBI_EPFEOELHDCK_OFFSET UNITYSDK_OFFSET(0x15CA2B40)
#define HGJDKPIBJBI_FAGOBLDNHBN_OFFSET UNITYSDK_OFFSET(0x15CA26C0)
#define HGJDKPIBJBI_GFMEFHEKDMB_OFFSET UNITYSDK_OFFSET(0x15CA1A30)
#define HGJDKPIBJBI_GGOCHBFJINO_OFFSET UNITYSDK_OFFSET(0x15CA2DA0)
#define HGJDKPIBJBI_GKLMGNHBAJL_OFFSET UNITYSDK_OFFSET(0x15CA31B0)
#define HGJDKPIBJBI_HKMFAPCLEOL_OFFSET UNITYSDK_OFFSET(0x15CA1AC0)
#define HGJDKPIBJBI_JPEMPFNODGO_OFFSET UNITYSDK_OFFSET(0x15CA2040)
#define HGJDKPIBJBI_KHKFFNACGMK_OFFSET UNITYSDK_OFFSET(0x15CA2760)
#define HGJDKPIBJBI_KLOIBMNKJAI_OFFSET UNITYSDK_OFFSET(0x15CA1880)
#define HGJDKPIBJBI_KPIHELNCCIA_OFFSET UNITYSDK_OFFSET(0x15CA27F0)
#define HGJDKPIBJBI_MILDIMKNHDK_OFFSET UNITYSDK_OFFSET(0x15CA15A0)
#define HGJDKPIBJBI_MJJDCBADFOK_OFFSET UNITYSDK_OFFSET(0x15CA29E0)
#define HGJDKPIBJBI_NDACPKOHLOC_OFFSET UNITYSDK_OFFSET(0x15CA1E40)
#define HGJDKPIBJBI_PNJMMPIALEF_OFFSET UNITYSDK_OFFSET(0x15CA2880)
#define HGJDKPIBJBI_PPPFFEDPKKD_OFFSET UNITYSDK_OFFSET(0x15CA2630)

	class HGJDKPIBJBI : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::OIPMNNAHIFP, ::RPG::Client::AvatarProxy*>* HKPPEOPHJOD; // 0x10
		::LHHMHJIFHNE* OFJAAJJPHFN; // 0x18
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::RPG::Client::AvatarProxy*>* FKIBPJIFODK; // 0x20
		::System::Collections::Generic::Dictionary_2<::APCGKBOPGJL, ::RPG::AvatarSystem::Avatar*>* KADLKNCPDBI; // 0x28
		::GIDHOABFFFP* OIDHKFJJKMH; // 0x30
		::System::Collections::Generic::Dictionary_2<::OIPMNNAHIFP, ::RPG::Client::AvatarProxy*>* LPOJDMCOABL; // 0x38
		::MGLBNNIPDMC* HEJEGOGBFMP; // 0x40
		::System::Void _ctor(::MGLBNNIPDMC* a1, ::LHHMHJIFHNE* a2, ::GIDHOABFFFP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MGLBNNIPDMC*, ::LHHMHJIFHNE*, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 MILDIMKNHDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_MILDIMKNHDK_OFFSET))(this);
		}

		::RPG::AvatarSystem::Avatar* KLOIBMNKJAI(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_KLOIBMNKJAI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>* GFMEFHEKDMB(::OIPMNNAHIFP a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::Avatar*>*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_GFMEFHEKDMB_OFFSET))(this, a1);
		}

		::System::Void HKMFAPCLEOL(::OIPMNNAHIFP a1, ::APCGKBOPGJL a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_HKMFAPCLEOL_OFFSET))(this, a1, a2);
		}

		::System::Void NDACPKOHLOC(::DNFDBKCPBNM a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_NDACPKOHLOC_OFFSET))(this, a1, a2);
		}

		::System::Void JPEMPFNODGO(::OIPMNNAHIFP a1, ::DNFDBKCPBNM a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_JPEMPFNODGO_OFFSET))(this, a1, a2);
		}

		::System::Void CCMEAOFNKKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_CCMEAOFNKKH_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* PPPFFEDPKKD()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_PPPFFEDPKKD_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>* FAGOBLDNHBN(::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID, ::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_FAGOBLDNHBN_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* KHKFFNACGMK(::DNFDBKCPBNM a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_KHKFFNACGMK_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* KPIHELNCCIA(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_KPIHELNCCIA_OFFSET))(this, a1);
		}

		::System::Int32 PNJMMPIALEF(::DNFDBKCPBNM a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_PNJMMPIALEF_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* MJJDCBADFOK(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_MJJDCBADFOK_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* ANEHFOKKBIG(::APCGKBOPGJL a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_ANEHFOKKBIG_OFFSET))(this, a1);
		}

		::System::Void EPFEOELHDCK(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_EPFEOELHDCK_OFFSET))(this, a1);
		}

		::System::Void GGOCHBFJINO(::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_GGOCHBFJINO_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* EMBEKKBMPNO(::DNFDBKCPBNM a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_EMBEKKBMPNO_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* EKBKMGHFDFH(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_EKBKMGHFDFH_OFFSET))(this, a1);
		}

		::System::Int32 AICHGMFOELH(::DNFDBKCPBNM a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_AICHGMFOELH_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* GKLMGNHBAJL(::OIPMNNAHIFP a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_GKLMGNHBAJL_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* EFKOOEHNHFA(::APCGKBOPGJL a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::APCGKBOPGJL))((::PBYTE)hIl2Cpp + HGJDKPIBJBI_EFKOOEHNHFA_OFFSET))(this, a1);
		}

	};
