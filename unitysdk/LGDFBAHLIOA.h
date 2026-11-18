#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MBMEINOEBDJ.h"
#include "unitysdk/Foundation/Unreal/FTransform3D.h"

class IPLJEIJIGBP;
class KHLJFPECEGH;
namespace MoleMole { class ConfigAnimationCurveGroup; }
namespace System { class Object; }

#define LGDFBAHLIOA_CELHLLIAIKB_OFFSET UNITYSDK_OFFSET(0x11F0B500)
#define LGDFBAHLIOA_HBNOIDADKJA_OFFSET UNITYSDK_OFFSET(0x11F0B880)
#define LGDFBAHLIOA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F0BAC0)

inline static constexpr unsigned int LGDFBAHLIOA_TypeDefinitionIndex = 59642;

class LGDFBAHLIOA : public ::MBMEINOEBDJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGDFBAHLIOA__CTOR_OFFSET))(this);
	}

	::KHLJFPECEGH* CELHLLIAIKB(::Il2CppArray<::System::Object*>* INBACCBOBDN)
	{
		return ((::KHLJFPECEGH*(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + LGDFBAHLIOA_CELHLLIAIKB_OFFSET))(this, INBACCBOBDN);
	}

	static ::IPLJEIJIGBP* HBNOIDADKJA(::Foundation::Unreal::FTransform3D PKPADFMLOPC, ::MoleMole::ConfigAnimationCurveGroup* BKOLCDPOJAL)
	{
		return ((::IPLJEIJIGBP*(*)(::Foundation::Unreal::FTransform3D, ::MoleMole::ConfigAnimationCurveGroup*))((::PBYTE)hIl2Cpp + LGDFBAHLIOA_HBNOIDADKJA_OFFSET))(PKPADFMLOPC, BKOLCDPOJAL);
	}
};
