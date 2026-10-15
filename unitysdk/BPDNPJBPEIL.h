#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BPDNPJBPEIL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1A3530)
#define BPDNPJBPEIL_FKMHKPLBJGD_OFFSET UNITYSDK_OFFSET(0xC1A2EA0)
#define BPDNPJBPEIL_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xC1A2F40)
#define BPDNPJBPEIL_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0xC1A2EF0)

	class BPDNPJBPEIL : public ::FJNNEOKOCJD
	{
	public:
		::LMJPODEEGKK* FKINCGODJEP; // 0x10
		::ECIIEBFKNMJ* PDENFEFCAGN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDNPJBPEIL_CTOR_OFFSET))(this);
		}

		::System::Void FKMHKPLBJGD(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + BPDNPJBPEIL_FKMHKPLBJGD_OFFSET))(this, a1);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + BPDNPJBPEIL_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + BPDNPJBPEIL_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
