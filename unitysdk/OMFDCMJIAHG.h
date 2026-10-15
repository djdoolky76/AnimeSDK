#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEffectType.h"
#include "unitysdk/System/Object.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LDCOFDFFPBD;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OMFDCMJIAHG_CPNEMOBKHEL_OFFSET UNITYSDK_OFFSET(0xBF269A0)
#define OMFDCMJIAHG_CTOR_OFFSET UNITYSDK_OFFSET(0xBF262A0)
#define OMFDCMJIAHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF26E60)
#define OMFDCMJIAHG_IKHKELAMHLE_OFFSET UNITYSDK_OFFSET(0xBF26520)
#define OMFDCMJIAHG_NCIJNJGIMFM_OFFSET UNITYSDK_OFFSET(0xBF26B80)
#define OMFDCMJIAHG_POEMKFCAECK_OFFSET UNITYSDK_OFFSET(0xBF26340)

	class OMFDCMJIAHG : public ::System::Object
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::ChimeraDuelEffectType, ::LDCOFDFFPBD*>* MGODECBMKNB; // 0x20
		::System::Void _ctor(::LMJPODEEGKK* a1, ::ECIIEBFKNMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_CTOR_OFFSET))(this, a1, a2);
		}

		::DFDIEEHGJED* POEMKFCAECK(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::DFDIEEHGJED*(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_POEMKFCAECK_OFFSET))(this, a1, a2, a3);
		}

		::DFDIEEHGJED* CPNEMOBKHEL(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::DFDIEEHGJED*(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_CPNEMOBKHEL_OFFSET))(this, a1, a2, a3);
		}

		::LDCOFDFFPBD* IKHKELAMHLE(::RPG::GameCore::ChimeraDuelEffectType a1)
		{
			return ((::LDCOFDFFPBD*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_IKHKELAMHLE_OFFSET))(this, a1);
		}

		::LDCOFDFFPBD* NCIJNJGIMFM(::RPG::GameCore::ChimeraDuelEffectType a1)
		{
			return ((::LDCOFDFFPBD*(*)(::PVOID, ::RPG::GameCore::ChimeraDuelEffectType))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_NCIJNJGIMFM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMFDCMJIAHG_DISPOSE_OFFSET))(this);
		}

	};
