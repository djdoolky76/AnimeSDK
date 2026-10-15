#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/GEEOPFIMJEM.h"
class DGPKLNNFELK;
class KDEFLDJHDEB;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ADMFPAJJPIF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB1457E0)
#define ADMFPAJJPIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB145760)
#define ADMFPAJJPIF_JOLDDCGIKIL_OFFSET UNITYSDK_OFFSET(0xB145480)
#define ADMFPAJJPIF_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB1456D0)

inline static constexpr unsigned int ADMFPAJJPIF_TypeDefinitionIndex = 73750;

	class ADMFPAJJPIF : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KDEFLDJHDEB*>* BEHHICMOFIE; // 0x10
		static ::System::Collections::Generic::HashSet_1<::System::String*>** StaticGet_OEHLFICEHCO()
		{
			return (::System::Collections::Generic::HashSet_1<::System::String*>**)UnitySDK::FromName("", "ADMFPAJJPIF")->GetStaticField(0x46C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMFPAJJPIF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADMFPAJJPIF_CCTOR_OFFSET))();
		}

		::KDEFLDJHDEB* JOLDDCGIKIL(::GEEOPFIMJEM a1, ::DGPKLNNFELK* a2, ::Il2CppArray<::System::String*>* a3)
		{
			return ((::KDEFLDJHDEB*(*)(::PVOID, ::GEEOPFIMJEM, ::DGPKLNNFELK*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + ADMFPAJJPIF_JOLDDCGIKIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADMFPAJJPIF_PJPFIHFAHGO_OFFSET))(this);
		}

	};
