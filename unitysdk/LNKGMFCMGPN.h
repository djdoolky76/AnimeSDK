#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
class GNDPHNBIDJJ;
class HKAJMEMCBLC;
class HPOCHBIJIHH;
class KDMOONKPLPI;
class PMEHLELAFJI;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNKGMFCMGPN_BNHEHJMFBCK_OFFSET UNITYSDK_OFFSET(0xB7DE820)
#define LNKGMFCMGPN_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DE700)
#define LNKGMFCMGPN_JCFOOGGPDAJ_OFFSET UNITYSDK_OFFSET(0xB7DF150)
#define LNKGMFCMGPN_LONOOHDGCEM_OFFSET UNITYSDK_OFFSET(0xB7DE870)
#define LNKGMFCMGPN_NHGCJBKKMMO_OFFSET UNITYSDK_OFFSET(0xB7DEDC0)
#define LNKGMFCMGPN_NKKACIEAEKL_OFFSET UNITYSDK_OFFSET(0xB7DE7B0)
#define LNKGMFCMGPN__MODIFYDECKS_B__5_0_OFFSET UNITYSDK_OFFSET(0xB7DF270)
#define LNKGMFCMGPN__SETCURRENTDECK_B__6_0_OFFSET UNITYSDK_OFFSET(0xB7DF650)

inline static constexpr unsigned int LNKGMFCMGPN_TypeDefinitionIndex = 81073;

	class LNKGMFCMGPN : public ::System::Object
	{
	public:
		::HPOCHBIJIHH* PODJBLOPDAK; // 0x10
		::GNDPHNBIDJJ* MJHHLOPFDNK; // 0x18
		::System::Void _ctor(::GNDPHNBIDJJ* a1, ::HPOCHBIJIHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GNDPHNBIDJJ*, ::HPOCHBIJIHH*))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 NKKACIEAEKL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_NKKACIEAEKL_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>* BNHEHJMFBCK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_BNHEHJMFBCK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LONOOHDGCEM(::EOPFDKJOBIO* a1, ::HKAJMEMCBLC* a2, ::HKAJMEMCBLC* a3)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::EOPFDKJOBIO*, ::HKAJMEMCBLC*, ::HKAJMEMCBLC*))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_LONOOHDGCEM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise* NHGCJBKKMMO(::System::Collections::Generic::List_1<::System::Object*>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_NHGCJBKKMMO_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* JCFOOGGPDAJ(::System::UInt32 a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNKGMFCMGPN_JCFOOGGPDAJ_OFFSET))(this, a1);
		}

		::System::Void _ModifyDecks_b__5_0(::PMEHLELAFJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMEHLELAFJI*))((::PBYTE)hIl2Cpp + LNKGMFCMGPN__MODIFYDECKS_B__5_0_OFFSET))(this, a1);
		}

		::System::Void _SetCurrentDeck_b__6_0(::KDMOONKPLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDMOONKPLPI*))((::PBYTE)hIl2Cpp + LNKGMFCMGPN__SETCURRENTDECK_B__6_0_OFFSET))(this, a1);
		}

	};
