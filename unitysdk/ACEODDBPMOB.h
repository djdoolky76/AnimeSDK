#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class POEGBDNCMML;
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }

#define ACEODDBPMOB_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x1EF004D0)
#define ACEODDBPMOB_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0x1EF002C0)
#define ACEODDBPMOB_KNBIIDOFMDO_OFFSET UNITYSDK_OFFSET(0x1EF000E0)
#define ACEODDBPMOB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1EEFFF90)
#define ACEODDBPMOB__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFFE20)

inline static constexpr unsigned int ACEODDBPMOB_TypeDefinitionIndex = 7837;

class ACEODDBPMOB : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* GFOGACPOJGH; // 0x10
	::System::Collections::Generic::List_1<::POEGBDNCMML*>* MFLMILADPEG; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action_1<::UnityEngine::MonoBehaviour*>*>* DPLECKLMPLJ; // 0x20
	::System::Boolean PFFBEOAEKKL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEODDBPMOB__CTOR_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEODDBPMOB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void KNBIIDOFMDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEODDBPMOB_KNBIIDOFMDO_OFFSET))(this);
	}

	::System::Void KKFNPONHGEM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEODDBPMOB_KKFNPONHGEM_OFFSET))(this);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACEODDBPMOB_ABDLEONNPAJ_OFFSET))(this);
	}
};
