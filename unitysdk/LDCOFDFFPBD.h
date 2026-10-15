#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDIEEHGJED;
class HAJDFCHFBGN;
class KAKADGHNMFK;
namespace RPG::GameCore { class ChimeraDuelEffectConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LDCOFDFFPBD_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB61D680)
#define LDCOFDFFPBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB61DA30)
#define LDCOFDFFPBD_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0xB61D8F0)
#define LDCOFDFFPBD_MPCLAJJLKKK_OFFSET UNITYSDK_OFFSET(0xB61D240)
#define LDCOFDFFPBD_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB61CFD0)

inline static constexpr unsigned int LDCOFDFFPBD_TypeDefinitionIndex = 77446;

	class LDCOFDFFPBD : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCOFDFFPBD_CTOR_OFFSET))(this);
		}

		::DFDIEEHGJED* PKADDEPKJFN(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::DFDIEEHGJED*(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + LDCOFDFFPBD_PKADDEPKJFN_OFFSET))(this, a1, a2, a3);
		}

		::DFDIEEHGJED* AALCFBOGFKP(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3)
		{
			return ((::DFDIEEHGJED*(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*))((::PBYTE)hIl2Cpp + LDCOFDFFPBD_AALCFBOGFKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean EDBDAAKMDFI(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2, ::RPG::GameCore::ChimeraDuelEffectConfig* a3, ::DFDIEEHGJED* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*, ::RPG::GameCore::ChimeraDuelEffectConfig*, ::DFDIEEHGJED*))((::PBYTE)hIl2Cpp + LDCOFDFFPBD_EDBDAAKMDFI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean MPCLAJJLKKK(::HAJDFCHFBGN* a1, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HAJDFCHFBGN*, ::System::Collections::Generic::List_1<::KAKADGHNMFK*>*))((::PBYTE)hIl2Cpp + LDCOFDFFPBD_MPCLAJJLKKK_OFFSET))(this, a1, a2);
		}

	};
