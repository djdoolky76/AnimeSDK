#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define NMMDCJGKHOB_ILAOELFEINM_KGOHHAAELKG_OFFSET UNITYSDK_OFFSET(0x1376C6A0)
#define NMMDCJGKHOB_ILAOELFEINM_PLAHEGGPBJO_OFFSET UNITYSDK_OFFSET(0x1376C650)
#define NMMDCJGKHOB_ILAOELFEINM__CTOR_OFFSET UNITYSDK_OFFSET(0x1376C640)

inline static constexpr unsigned int NMMDCJGKHOB_ILAOELFEINM_TypeDefinitionIndex = 54809;

class NMMDCJGKHOB_ILAOELFEINM : public ::System::Object
{
public:
	::System::Action_1<::System::Int32>* EJGDHCIBCJH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_ILAOELFEINM__CTOR_OFFSET))(this);
	}

	::System::Void PLAHEGGPBJO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_ILAOELFEINM_PLAHEGGPBJO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void KGOHHAAELKG(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NMMDCJGKHOB_ILAOELFEINM_KGOHHAAELKG_OFFSET))(this, PIIPCLCCOIG);
	}
};
