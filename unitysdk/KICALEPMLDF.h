#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"
#include "unitysdk/UnityEngine/Vector3.h"

class KHLJFPECEGH;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define KICALEPMLDF_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x1765BD40)
#define KICALEPMLDF_LLJMLOKBKKI_OFFSET UNITYSDK_OFFSET(0x1765C4F0)
#define KICALEPMLDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1765C4E0)

inline static constexpr unsigned int KICALEPMLDF_TypeDefinitionIndex = 67046;

class KICALEPMLDF : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KICALEPMLDF__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + KICALEPMLDF_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::KHLJFPECEGH* LLJMLOKBKKI(::Foundation::Unreal::FTransform3D LNEEMAGIHLB, ::MoleMole::ConfigAnimationCurveGroup* BKOLCDPOJAL, ::UnityEngine::Vector3 DJNAMCOLCOF, ::UnityEngine::Vector3 DOPIFAIDNBK, ::System::Single PDFIKDIKAHE)
	{
		return ((::KHLJFPECEGH*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + KICALEPMLDF_LLJMLOKBKKI_OFFSET))(LNEEMAGIHLB, BKOLCDPOJAL, DJNAMCOLCOF, DOPIFAIDNBK, PDFIKDIKAHE);
	}
};
