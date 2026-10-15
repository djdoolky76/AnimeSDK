#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJNNEOKOCJD.h"
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJJONPHNHCM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2076D0)
#define JJJONPHNHCM_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0xB207230)
#define JJJONPHNHCM_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0xB2071D0)

	class JJJONPHNHCM : public ::FJNNEOKOCJD
	{
	public:
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJONPHNHCM_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + JJJONPHNHCM_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + JJJONPHNHCM_GICABFLDIPA_OFFSET))(this, a1, a2, a3);
		}

	};
