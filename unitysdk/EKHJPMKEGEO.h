#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDCOFDFFPBD.h"
class DFDIEEHGJED;
class ECIIEBFKNMJ;
class HAJDFCHFBGN;
class KAKADGHNMFK;
class LEHAHJKOHKP;
class LMJPODEEGKK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKHJPMKEGEO_CTOR_OFFSET UNITYSDK_OFFSET(0x155061A0)
#define EKHJPMKEGEO_FKMHKPLBJGD_OFFSET UNITYSDK_OFFSET(0x15505DA0)
#define EKHJPMKEGEO_GICABFLDIPA_OFFSET UNITYSDK_OFFSET(0x15505DF0)
#define EKHJPMKEGEO_OAGDIHGBBOI_OFFSET UNITYSDK_OFFSET(0x15505D40)

inline static constexpr unsigned int EKHJPMKEGEO_TypeDefinitionIndex = 77474;

	class EKHJPMKEGEO : public ::LDCOFDFFPBD
	{
	public:
		::LEHAHJKOHKP* DBJJLAGHKFE; // 0x10
		::LMJPODEEGKK* FKINCGODJEP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKHJPMKEGEO_CTOR_OFFSET))(this);
		}

		::System::Void OAGDIHGBBOI(::ECIIEBFKNMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECIIEBFKNMJ*))((::PBYTE)hIl2Cpp + EKHJPMKEGEO_OAGDIHGBBOI_OFFSET))(this, a1);
		}

		::System::Void FKMHKPLBJGD(::LMJPODEEGKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LMJPODEEGKK*))((::PBYTE)hIl2Cpp + EKHJPMKEGEO_FKMHKPLBJGD_OFFSET))(this, a1);
		}

		::System::Boolean GICABFLDIPA(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + EKHJPMKEGEO_GICABFLDIPA_OFFSET))(this, a1, a2, a3, a4);
		}

	};
