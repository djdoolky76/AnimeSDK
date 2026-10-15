#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingResultType.h"
#include "unitysdk/System/Object.h"
class FCCPECCFHLN;
class GKPDKBNFDGM;
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABLBFIGHCLE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB106390)
#define ABLBFIGHCLE_JOKCJKOHIAJ_OFFSET UNITYSDK_OFFSET(0xB105FF0)
#define ABLBFIGHCLE_MJEGFOMAOFH_OFFSET UNITYSDK_OFFSET(0xB1061E0)

inline static constexpr unsigned int ABLBFIGHCLE_TypeDefinitionIndex = 61956;

	class ABLBFIGHCLE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingResultType, ::System::Func_1<::FCCPECCFHLN*>*>** StaticGet_EEMPAAFDLAP()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::SwordTrainingResultType, ::System::Func_1<::FCCPECCFHLN*>*>**)UnitySDK::FromName("", "ABLBFIGHCLE")->GetStaticField(0x43200);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABLBFIGHCLE_CCTOR_OFFSET))();
		}

		static ::FCCPECCFHLN* JOKCJKOHIAJ(::RPG::GameCore::SwordTrainingResultType a1)
		{
			return ((::FCCPECCFHLN*(*)(::RPG::GameCore::SwordTrainingResultType))((::PBYTE)hIl2Cpp + ABLBFIGHCLE_JOKCJKOHIAJ_OFFSET))(a1);
		}

		static ::System::Boolean MJEGFOMAOFH(::RPG::GameCore::SwordTrainingResultType a1, ::GKPDKBNFDGM* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::SwordTrainingResultType, ::GKPDKBNFDGM*, ::System::UInt32))((::PBYTE)hIl2Cpp + ABLBFIGHCLE_MJEGFOMAOFH_OFFSET))(a1, a2, a3);
		}

	};
