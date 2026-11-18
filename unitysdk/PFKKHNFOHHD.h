#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/AnimatorAirHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorGroundHitType.h"
#include "unitysdk/MoleMole/Config/AnimatorHitEffect.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PFKKHNFOHHD_CIGKNEGANHN_OFFSET UNITYSDK_OFFSET(0x15537B50)
#define PFKKHNFOHHD_GDONNHPFJMO_OFFSET UNITYSDK_OFFSET(0x15537F10)
#define PFKKHNFOHHD_LNPEFNOPLLA_OFFSET UNITYSDK_OFFSET(0x15537740)
#define PFKKHNFOHHD__CCTOR_OFFSET UNITYSDK_OFFSET(0x15537730)

inline static constexpr unsigned int PFKKHNFOHHD_TypeDefinitionIndex = 81861;

class PFKKHNFOHHD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_HMFDJJBAGHK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PFKKHNFOHHD_TypeDefinitionIndex)->GetStaticField(0x51B00);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_KFJLLOIMGNH()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PFKKHNFOHHD_TypeDefinitionIndex)->GetStaticField(0x51B08);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>** StaticGet_JKOICHEILFF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PFKKHNFOHHD_TypeDefinitionIndex)->GetStaticField(0x51B10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PFKKHNFOHHD__CCTOR_OFFSET))();
	}

	static ::System::String* LNPEFNOPLLA(::MoleMole::Config::AnimatorAirHitType MNNAPNBPEDK)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorAirHitType))((::PBYTE)hIl2Cpp + PFKKHNFOHHD_LNPEFNOPLLA_OFFSET))(MNNAPNBPEDK);
	}

	static ::System::String* CIGKNEGANHN(::MoleMole::Config::AnimatorHitEffect JMDHBJMNBCP)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorHitEffect))((::PBYTE)hIl2Cpp + PFKKHNFOHHD_CIGKNEGANHN_OFFSET))(JMDHBJMNBCP);
	}

	static ::System::String* GDONNHPFJMO(::MoleMole::Config::AnimatorGroundHitType HCFCODHMONB)
	{
		return ((::System::String*(*)(::MoleMole::Config::AnimatorGroundHitType))((::PBYTE)hIl2Cpp + PFKKHNFOHHD_GDONNHPFJMO_OFFSET))(HCFCODHMONB);
	}
};
