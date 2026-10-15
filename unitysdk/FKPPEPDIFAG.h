#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIFCLJJAOFJ.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EDOELGFAKAL;
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FKPPEPDIFAG_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0x15826C50)
#define FKPPEPDIFAG_CTOR_OFFSET UNITYSDK_OFFSET(0x15827170)
#define FKPPEPDIFAG_EGFCFCBHJJP_OFFSET UNITYSDK_OFFSET(0x15826A90)
#define FKPPEPDIFAG_KIHNEAOPLJC_1_OFFSET UNITYSDK_OFFSET(0x15826D70)
#define FKPPEPDIFAG_KIHNEAOPLJC_OFFSET UNITYSDK_OFFSET(0x15826CE0)
#define FKPPEPDIFAG_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x158269F0)

	class FKPPEPDIFAG : public ::KIFCLJJAOFJ
	{
	public:
		::System::Collections::Generic::List_1<::EDOELGFAKAL*>* CABOBIEGMEM; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_CTOR_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void EGFCFCBHJJP(::EDOELGFAKAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDOELGFAKAL*))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_EGFCFCBHJJP_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::EDOELGFAKAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDOELGFAKAL*))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_AALCFBOGFKP_OFFSET))(this, a1);
		}

		::System::Boolean KIHNEAOPLJC(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_KIHNEAOPLJC_OFFSET))(this, a1, a2);
		}

		::System::Boolean KIHNEAOPLJC_1(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint a2, ::System::Object* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint, ::System::Object*))((::PBYTE)hIl2Cpp + FKPPEPDIFAG_KIHNEAOPLJC_1_OFFSET))(this, a1, a2, a3);
		}

	};
