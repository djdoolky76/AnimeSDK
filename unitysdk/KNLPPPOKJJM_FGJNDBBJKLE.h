#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define KNLPPPOKJJM_FGJNDBBJKLE_AGIHLCHBMFF_OFFSET UNITYSDK_OFFSET(0x1634D190)
#define KNLPPPOKJJM_FGJNDBBJKLE_HKIKOHJGEEA_OFFSET UNITYSDK_OFFSET(0x1634D280)
#define KNLPPPOKJJM_FGJNDBBJKLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1634D180)

inline static constexpr unsigned int KNLPPPOKJJM_FGJNDBBJKLE_TypeDefinitionIndex = 67495;

class KNLPPPOKJJM_FGJNDBBJKLE : public ::System::Object
{
public:
	::System::Action* EJGDHCIBCJH; // 0x10
	::System::Action_1<::System::Int32>* NKGCDDCMBCF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FGJNDBBJKLE__CTOR_OFFSET))(this);
	}

	::System::Void AGIHLCHBMFF(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FGJNDBBJKLE_AGIHLCHBMFF_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void HKIKOHJGEEA(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KNLPPPOKJJM_FGJNDBBJKLE_HKIKOHJGEEA_OFFSET))(this, BHDNBGLCNOM);
	}
};
