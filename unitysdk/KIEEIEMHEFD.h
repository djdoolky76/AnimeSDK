#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BattleModeType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class ADGFFEDNPPO;
namespace System { class Type; }

#define KIEEIEMHEFD_CCTOR_OFFSET UNITYSDK_OFFSET(0xB41C9D0)
#define KIEEIEMHEFD_LMMDFHDLDAD_OFFSET UNITYSDK_OFFSET(0xB41C800)

inline static constexpr unsigned int KIEEIEMHEFD_TypeDefinitionIndex = 53629;

	class KIEEIEMHEFD : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>** StaticGet_HKHFDOODKOA()
		{
			return (::Il2CppArray<::System::ValueTuple_2<::RPG::GameCore::BattleModeType, ::System::Type*>>**)UnitySDK::FromName("", "KIEEIEMHEFD")->GetStaticField(0x54700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIEEIEMHEFD_CCTOR_OFFSET))();
		}

		static ::ADGFFEDNPPO* LMMDFHDLDAD(::RPG::GameCore::BattleModeType a1)
		{
			return ((::ADGFFEDNPPO*(*)(::RPG::GameCore::BattleModeType))((::PBYTE)hIl2Cpp + KIEEIEMHEFD_LMMDFHDLDAD_OFFSET))(a1);
		}

	};
