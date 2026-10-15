#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIMFJHFAEJE.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/System/Object.h"
class ACLMDNMDHLE;
class IKCOHFPIHIA;
namespace System { class String; }

#define DJMFLECOALG_AOLKJHKOOMG_OFFSET UNITYSDK_OFFSET(0xF23DB80)
#define DJMFLECOALG_CTOR_OFFSET UNITYSDK_OFFSET(0xF23DB20)
#define DJMFLECOALG_TOSTRING_OFFSET UNITYSDK_OFFSET(0xF23DB30)
#define DJMFLECOALG__GETPARAMETER_B__2_0_OFFSET UNITYSDK_OFFSET(0xF23E050)

	class DJMFLECOALG : public ::System::Object
	{
	public:
		::IKCOHFPIHIA* JOIPPIKNILC; // 0x10
		::KIMFJHFAEJE ADPIPGEDKOH; // 0x18
		::System::Void _ctor(::IKCOHFPIHIA* a1, ::KIMFJHFAEJE a2)
		{
			return ((::System::Void(*)(::PVOID, ::IKCOHFPIHIA*, ::KIMFJHFAEJE))((::PBYTE)hIl2Cpp + DJMFLECOALG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJMFLECOALG_TOSTRING_OFFSET))(this);
		}

		::System::Double AOLKJHKOOMG(::RPG::GameCore::FateContentParamType a1)
		{
			return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateContentParamType))((::PBYTE)hIl2Cpp + DJMFLECOALG_AOLKJHKOOMG_OFFSET))(this, a1);
		}

		::System::Boolean _GetParameter_b__2_0(::ACLMDNMDHLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACLMDNMDHLE*))((::PBYTE)hIl2Cpp + DJMFLECOALG__GETPARAMETER_B__2_0_OFFSET))(this, a1);
		}

	};
