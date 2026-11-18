#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JMNHFIJIMPH;
class LIDIOBNBEKJ;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define JMNHFIJIMPH_HNMMIHIODKL_BKALIDEGDHL_OFFSET UNITYSDK_OFFSET(0x1C3720E0)
#define JMNHFIJIMPH_HNMMIHIODKL_CINLGEHJNCO_OFFSET UNITYSDK_OFFSET(0x1C372050)
#define JMNHFIJIMPH_HNMMIHIODKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C372040)

inline static constexpr unsigned int JMNHFIJIMPH_HNMMIHIODKL_TypeDefinitionIndex = 60022;

class JMNHFIJIMPH_HNMMIHIODKL : public ::System::Object
{
public:
	::JMNHFIJIMPH* KLHPEBKNIFB; // 0x10
	::System::Action_1<::System::Action*>* MIAJMBPCOMB; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::System::Action_1<::OAEFGCLEHHO*>* JDDPNNOLFBF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_HNMMIHIODKL__CTOR_OFFSET))(this);
	}

	::System::Void CINLGEHJNCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_HNMMIHIODKL_CINLGEHJNCO_OFFSET))(this);
	}

	::System::Void BKALIDEGDHL(::LIDIOBNBEKJ* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::LIDIOBNBEKJ*))((::PBYTE)hIl2Cpp + JMNHFIJIMPH_HNMMIHIODKL_BKALIDEGDHL_OFFSET))(this, PIIPCLCCOIG);
	}
};
