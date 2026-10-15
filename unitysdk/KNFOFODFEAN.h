#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/EnumStatusTypeMask.h"
#include "unitysdk/System/Object.h"
class DGKBJOHFPBK;
class LPNPMKNMMOK;
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define KNFOFODFEAN_BNJBNIIDHJN_OFFSET UNITYSDK_OFFSET(0xB5826D0)
#define KNFOFODFEAN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5827E0)
#define KNFOFODFEAN_GNADABFLEFM_OFFSET UNITYSDK_OFFSET(0xB582710)
#define KNFOFODFEAN_NKCCHCKDPFK_OFFSET UNITYSDK_OFFSET(0xB582760)

inline static constexpr unsigned int KNFOFODFEAN_TypeDefinitionIndex = 55843;

	class KNFOFODFEAN : public ::System::Object
	{
	public:
		static ::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>** StaticGet_LJMDIKHBOJH()
		{
			return (::System::Func_3<::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*, ::System::Boolean>**)UnitySDK::FromName("", "KNFOFODFEAN")->GetStaticField(0x63D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNFOFODFEAN_CCTOR_OFFSET))();
		}

		static ::System::Void BNJBNIIDHJN(::DGKBJOHFPBK* a1)
		{
			return ((::System::Void(*)(::DGKBJOHFPBK*))((::PBYTE)hIl2Cpp + KNFOFODFEAN_BNJBNIIDHJN_OFFSET))(a1);
		}

		static ::System::Boolean GNADABFLEFM(::RPG::GameCore::EnumStatusType a1, ::RPG::GameCore::EnumStatusTypeMask a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::EnumStatusType, ::RPG::GameCore::EnumStatusTypeMask))((::PBYTE)hIl2Cpp + KNFOFODFEAN_GNADABFLEFM_OFFSET))(a1, a2);
		}

		static ::System::Boolean NKCCHCKDPFK(::RPG::GameCore::TurnBasedModifierInstance* a1, ::LPNPMKNMMOK* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::TurnBasedModifierInstance*, ::LPNPMKNMMOK*))((::PBYTE)hIl2Cpp + KNFOFODFEAN_NKCCHCKDPFK_OFFSET))(a1, a2);
		}

	};
