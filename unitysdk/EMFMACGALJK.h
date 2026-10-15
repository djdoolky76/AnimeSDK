#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMFMACGALJK_CTOR_OFFSET UNITYSDK_OFFSET(0x15534BD0)
#define EMFMACGALJK_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15534700)
#define EMFMACGALJK_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0x155346A0)

	class EMFMACGALJK : public ::LDCOFDFFPBD
	{
	public:
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMFMACGALJK_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + EMFMACGALJK_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + EMFMACGALJK_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
