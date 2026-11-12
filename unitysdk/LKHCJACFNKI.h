#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"
class MEAECMOABPE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LKHCJACFNKI_BKJGMFOKKKN_OFFSET UNITYSDK_OFFSET(0xBFE8B70)
#define LKHCJACFNKI_CCTOR_OFFSET UNITYSDK_OFFSET(0xBFE9190)
#define LKHCJACFNKI_CEEFDPKLOIP_OFFSET UNITYSDK_OFFSET(0xBFE8EF0)
#define LKHCJACFNKI_GNCJAGHKEPO_OFFSET UNITYSDK_OFFSET(0xBFE8C40)
#define LKHCJACFNKI_IAONPECOKLB_OFFSET UNITYSDK_OFFSET(0xBFE8CF0)

inline static constexpr unsigned int LKHCJACFNKI_TypeDefinitionIndex = 60976;

	class LKHCJACFNKI : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::MEAECMOABPE*>** StaticGet_GLENLDLOJJL()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StageType, ::MEAECMOABPE*>**)UnitySDK::FromName("", "LKHCJACFNKI")->GetStaticField(0x68540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHCJACFNKI_CCTOR_OFFSET))();
		}

		static ::System::Void BKJGMFOKKKN(::RPG::GameCore::StageType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + LKHCJACFNKI_BKJGMFOKKKN_OFFSET))(a1);
		}

		static ::System::Void GNCJAGHKEPO(::RPG::GameCore::StageType a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + LKHCJACFNKI_GNCJAGHKEPO_OFFSET))(a1);
		}

		static ::System::Boolean IAONPECOKLB(::RPG::GameCore::StageType a1, ::MEAECMOABPE* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::StageType, ::MEAECMOABPE*))((::PBYTE)hIl2Cpp + LKHCJACFNKI_IAONPECOKLB_OFFSET))(a1, a2);
		}

		static ::System::Boolean CEEFDPKLOIP(::MEAECMOABPE* a1)
		{
			return ((::System::Boolean(*)(::MEAECMOABPE*))((::PBYTE)hIl2Cpp + LKHCJACFNKI_CEEFDPKLOIP_OFFSET))(a1);
		}

	};
