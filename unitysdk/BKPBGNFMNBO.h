#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDPNKBKHMKK.h"
#include "unitysdk/JDIBGBGPCMN.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BKPBGNFMNBO_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0xFF85930)
#define BKPBGNFMNBO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0xFF858D0)
#define BKPBGNFMNBO_OJGAEBADCEJ_OFFSET UNITYSDK_OFFSET(0xFF856F0)
#define BKPBGNFMNBO_PFNEPJFFFLI_OFFSET UNITYSDK_OFFSET(0xFF85A30)
#define BKPBGNFMNBO__CTOR_OFFSET UNITYSDK_OFFSET(0xFF856E0)

inline static constexpr unsigned int BKPBGNFMNBO_TypeDefinitionIndex = 91922;

class BKPBGNFMNBO : public ::System::Object
{
public:
	::System::Action_1<::UnityEngine::Transform*>* OJOCLICNEGM; // 0x10
	::System::Action* LNACGAEGNAD; // 0x18
	::System::Boolean PDKONPGOIEC; // 0x20
	::System::Boolean GPIACGGOLDP; // 0x21
	::System::Byte _padding0[0x2];
	::System::Int32 EGKGLCIDEHC; // 0x24
	::System::Int32 EFDDBDMDHHA; // 0x28
	::System::Int32 NCJHNBIKEJC; // 0x2C
	::CDPNKBKHMKK MAOCFFFKJCF; // 0x30
	::JDIBGBGPCMN AHNPEMJHJMG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBGNFMNBO__CTOR_OFFSET))(this);
	}

	static ::System::Void OJGAEBADCEJ(::System::Collections::Generic::List_1<::BKPBGNFMNBO*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::BKPBGNFMNBO*>*))((::PBYTE)hIl2Cpp + BKPBGNFMNBO_OJGAEBADCEJ_OFFSET))(DJLOKMMLFJC);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKPBGNFMNBO_NPOLNFDBOOD_OFFSET))(this);
	}

	static ::System::Void MBKDOMFJFIG(::BKPBGNFMNBO*& HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::BKPBGNFMNBO*&))((::PBYTE)hIl2Cpp + BKPBGNFMNBO_MBKDOMFJFIG_OFFSET))(HMMMOCJAEOA);
	}

	static ::BKPBGNFMNBO* PFNEPJFFFLI(::System::Int32 EFDDBDMDHHA, ::CDPNKBKHMKK MAOCFFFKJCF)
	{
		return ((::BKPBGNFMNBO*(*)(::System::Int32, ::CDPNKBKHMKK))((::PBYTE)hIl2Cpp + BKPBGNFMNBO_PFNEPJFFFLI_OFFSET))(EFDDBDMDHHA, MAOCFFFKJCF);
	}
};
