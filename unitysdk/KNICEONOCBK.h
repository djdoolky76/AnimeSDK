#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
class BOGCBDLBHFK;
class EMJIDLCDFMI;
class FDPALAEIHPB;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define KNICEONOCBK_COCCHMHOFIE_OFFSET UNITYSDK_OFFSET(0xB585D40)
#define KNICEONOCBK_CTOR_OFFSET UNITYSDK_OFFSET(0xB5857E0)
#define KNICEONOCBK_DJPEJOPFANL_OFFSET UNITYSDK_OFFSET(0xB585A60)
#define KNICEONOCBK_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB585A00)
#define KNICEONOCBK_KBOJFONKFKN_OFFSET UNITYSDK_OFFSET(0xB586060)
#define KNICEONOCBK_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xB585EF0)

inline static constexpr unsigned int KNICEONOCBK_TypeDefinitionIndex = 76619;

	class KNICEONOCBK : public ::HLFHMKMJNPK
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x18
		::EMJIDLCDFMI* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::FDPALAEIHPB* a1, ::EMJIDLCDFMI* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::EMJIDLCDFMI*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KNICEONOCBK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICEONOCBK_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Void DJPEJOPFANL(::BOGCBDLBHFK* a1, ::System::Action_1<::BOGCBDLBHFK*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*, ::System::Action_1<::BOGCBDLBHFK*>*))((::PBYTE)hIl2Cpp + KNICEONOCBK_DJPEJOPFANL_OFFSET))(this, a1, a2);
		}

		::System::Void COCCHMHOFIE(::BOGCBDLBHFK* a1, ::System::Action_1<::BOGCBDLBHFK*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*, ::System::Action_1<::BOGCBDLBHFK*>*))((::PBYTE)hIl2Cpp + KNICEONOCBK_COCCHMHOFIE_OFFSET))(this, a1, a2);
		}

		::System::Void KJMDJMBNCPE(::BOGCBDLBHFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOGCBDLBHFK*))((::PBYTE)hIl2Cpp + KNICEONOCBK_KJMDJMBNCPE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* KBOJFONKFKN()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNICEONOCBK_KBOJFONKFKN_OFFSET))(this);
		}

	};
