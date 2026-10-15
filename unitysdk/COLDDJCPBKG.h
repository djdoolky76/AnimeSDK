#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class MDHIBNLFCFL;
class OMFDCMJIAHG;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define COLDDJCPBKG_CIJOLMCDLCI_OFFSET UNITYSDK_OFFSET(0xDCBA6B0)
#define COLDDJCPBKG_CTOR_OFFSET UNITYSDK_OFFSET(0xDCBAE90)
#define COLDDJCPBKG_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xDCBA720)
#define COLDDJCPBKG_NGMNJFOPLIN_OFFSET UNITYSDK_OFFSET(0xDCBACE0)

inline static constexpr unsigned int COLDDJCPBKG_TypeDefinitionIndex = 77456;

	class COLDDJCPBKG : public ::LDCOFDFFPBD
	{
	public:
		::OMFDCMJIAHG* KOHNGCOONLN; // 0x10
		::MDHIBNLFCFL* LMJGBLDGMEN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COLDDJCPBKG_CTOR_OFFSET))(this);
		}

		::System::Void CIJOLMCDLCI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + COLDDJCPBKG_CIJOLMCDLCI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + COLDDJCPBKG_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean NGMNJFOPLIN(::HAJDFCHFBGN* a1, ::KAKADGHNMFK* a2, ::RPG::GameCore::ChimeraDuelBuffConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::KAKADGHNMFK*, ::RPG::GameCore::ChimeraDuelBuffConfig*))((::PBYTE)hIl2Cpp + COLDDJCPBKG_NGMNJFOPLIN_OFFSET))(this, a1, a2, a3);
		}

	};
