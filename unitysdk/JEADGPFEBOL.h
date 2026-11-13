#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterNatureType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define JEADGPFEBOL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1305B280)
#define JEADGPFEBOL_CFFDCFEHJMC_OFFSET UNITYSDK_OFFSET(0x1305B0D0)
#define JEADGPFEBOL_FHKABLBOMBF_OFFSET UNITYSDK_OFFSET(0x1305AFD0)
#define JEADGPFEBOL_LEPOJDCMAMN_OFFSET UNITYSDK_OFFSET(0x1305B1D0)
#define JEADGPFEBOL_MCOEJCBNOJM_OFFSET UNITYSDK_OFFSET(0x1305AF50)

inline static constexpr unsigned int JEADGPFEBOL_TypeDefinitionIndex = 55613;

	class JEADGPFEBOL : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_GLPMBHGPMNO()
		{
			return (::System::Object**)UnitySDK::FromName("", "JEADGPFEBOL")->GetStaticField(0x69230);
		}

		static ::System::Object** StaticGet_JAFCIONPLCI()
		{
			return (::System::Object**)UnitySDK::FromName("", "JEADGPFEBOL")->GetStaticField(0x69238);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_NPKGLMNBMOA()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("", "JEADGPFEBOL")->GetStaticField(0x14B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEADGPFEBOL_CCTOR_OFFSET))();
		}

		static ::RPG::GameCore::CharacterNatureType MCOEJCBNOJM(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::CharacterNatureType(*)(::System::UInt32))((::PBYTE)hIl2Cpp + JEADGPFEBOL_MCOEJCBNOJM_OFFSET))(a1);
		}

		static ::System::Boolean FHKABLBOMBF(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + JEADGPFEBOL_FHKABLBOMBF_OFFSET))(a1, a2);
		}

		static ::System::Boolean CFFDCFEHJMC(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + JEADGPFEBOL_CFFDCFEHJMC_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::FixPoint LEPOJDCMAMN(::RPG::GameCore::CharacterNatureType a1, ::RPG::GameCore::CharacterNatureType a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::CharacterNatureType, ::RPG::GameCore::CharacterNatureType))((::PBYTE)hIl2Cpp + JEADGPFEBOL_LEPOJDCMAMN_OFFSET))(a1, a2);
		}

	};
