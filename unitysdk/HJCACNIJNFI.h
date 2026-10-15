#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICOHAPENNHF.h"
#include "unitysdk/JOGBIBJLPJB.h"
class LAJCPEFEOPN;
class MHHBDDMJOII;
namespace RPG::GameCore { class LevelPedestrianV2IntersectionCrowdInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define HJCACNIJNFI_CTOR_OFFSET UNITYSDK_OFFSET(0x15D029A0)
#define HJCACNIJNFI_ECPNONDGINC_OFFSET UNITYSDK_OFFSET(0x15D03C10)
#define HJCACNIJNFI_EJFPLFPPEIL_OFFSET UNITYSDK_OFFSET(0x15D03DE0)
#define HJCACNIJNFI_FLCNIHINHCK_OFFSET UNITYSDK_OFFSET(0x15D032F0)
#define HJCACNIJNFI_HFJONIGFLKL_OFFSET UNITYSDK_OFFSET(0x15D03250)
#define HJCACNIJNFI_HNMNADONABG_OFFSET UNITYSDK_OFFSET(0x15D03B10)
#define HJCACNIJNFI_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x15D03060)
#define HJCACNIJNFI_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0x15D038E0)
#define HJCACNIJNFI_OELCGEJKKLC_OFFSET UNITYSDK_OFFSET(0x15D02990)

	class HJCACNIJNFI : public ::ICOHAPENNHF
	{
	public:
		::System::Collections::Generic::Dictionary_2<::LAJCPEFEOPN*, ::System::Int32>* ODDLNGMHKMG; // 0x80
		::Il2CppArray<::System::Object*>* MGHEEIIFBDB; // 0x88
		::JOGBIBJLPJB KCOHLADKHFA; // 0x90
		::System::Boolean CHDMMIOPDGD; // 0x98
		::System::Void _ctor(::MHHBDDMJOII* a1, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo* a2, ::System::Int32 a3, ::UnityEngine::Transform* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MHHBDDMJOII*, ::RPG::GameCore::LevelPedestrianV2IntersectionCrowdInfo*, ::System::Int32, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + HJCACNIJNFI_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean OELCGEJKKLC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_OELCGEJKKLC_OFFSET))(this);
		}

		::System::Void LKINOKFJPCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_LKINOKFJPCL_OFFSET))(this);
		}

		::System::Boolean HFJONIGFLKL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_HFJONIGFLKL_OFFSET))(this);
		}

		::LAJCPEFEOPN* FLCNIHINHCK(::System::Single a1)
		{
			return ((::LAJCPEFEOPN*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HJCACNIJNFI_FLCNIHINHCK_OFFSET))(this, a1);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJCACNIJNFI_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::Void HNMNADONABG(::System::Int32 a1, ::LAJCPEFEOPN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + HJCACNIJNFI_HNMNADONABG_OFFSET))(this, a1, a2);
		}

		::System::Void EJFPLFPPEIL(::LAJCPEFEOPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + HJCACNIJNFI_EJFPLFPPEIL_OFFSET))(this, a1);
		}

		::System::Void ECPNONDGINC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HJCACNIJNFI_ECPNONDGINC_OFFSET))(this, a1);
		}

	};
