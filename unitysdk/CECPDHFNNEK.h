#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/VCMask.h"
#include "unitysdk/System/Object.h"
class CJOJDEPDCBK;
class PNDIOOHCBLB;
namespace RPG::GameCore { class CRPVirtualCameraConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class GameWorld; }

#define CECPDHFNNEK_CCBFNJAFFHK_1_OFFSET UNITYSDK_OFFSET(0xC77D950)
#define CECPDHFNNEK_CCBFNJAFFHK_OFFSET UNITYSDK_OFFSET(0xC77D710)
#define CECPDHFNNEK_CCTOR_OFFSET UNITYSDK_OFFSET(0xC77E650)
#define CECPDHFNNEK_EKLLFAKEINA_OFFSET UNITYSDK_OFFSET(0xC77E3C0)
#define CECPDHFNNEK_JHEJDLCNJLK_OFFSET UNITYSDK_OFFSET(0xC77DA90)
#define CECPDHFNNEK_MBHGFCLIKNN_OFFSET UNITYSDK_OFFSET(0xC77D870)
#define CECPDHFNNEK_OLCCEBLHJIL_OFFSET UNITYSDK_OFFSET(0xC77D690)

inline static constexpr unsigned int CECPDHFNNEK_TypeDefinitionIndex = 69534;

	class CECPDHFNNEK : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::CustomRP::VCMask>** StaticGet_ENDEJHONDDA()
		{
			return (::Il2CppArray<::RPG::CustomRP::VCMask>**)UnitySDK::FromName("", "CECPDHFNNEK")->GetStaticField(0x178B0);
		}

		// static const ::System::Object BMJHIIHDDOM; // 0x0
		// static const ::System::Object LFHHAFCCCHC; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CECPDHFNNEK_CCTOR_OFFSET))();
		}

		static ::System::Int32 OLCCEBLHJIL()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CECPDHFNNEK_OLCCEBLHJIL_OFFSET))();
		}

		static ::CJOJDEPDCBK* CCBFNJAFFHK(::RPG::GameCore::CRPVirtualCameraConfig* a1, ::RPG::GameCore::GameEntityList* a2, ::RPG::GameCore::GameEntityList* a3, ::System::Boolean a4)
		{
			return ((::CJOJDEPDCBK*(*)(::RPG::GameCore::CRPVirtualCameraConfig*, ::RPG::GameCore::GameEntityList*, ::RPG::GameCore::GameEntityList*, ::System::Boolean))((::PBYTE)hIl2Cpp + CECPDHFNNEK_CCBFNJAFFHK_OFFSET))(a1, a2, a3, a4);
		}

		static ::CJOJDEPDCBK* CCBFNJAFFHK_1(::RPG::GameCore::CRPVirtualCameraConfig* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Boolean a4)
		{
			return ((::CJOJDEPDCBK*(*)(::RPG::GameCore::CRPVirtualCameraConfig*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CECPDHFNNEK_CCBFNJAFFHK_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::CJOJDEPDCBK* MBHGFCLIKNN(::PNDIOOHCBLB* a1, ::System::Boolean a2, ::RPG::GameCore::GameWorld* a3)
		{
			return ((::CJOJDEPDCBK*(*)(::PNDIOOHCBLB*, ::System::Boolean, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CECPDHFNNEK_MBHGFCLIKNN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JHEJDLCNJLK(::PNDIOOHCBLB* a1, ::CJOJDEPDCBK* a2)
		{
			return ((::System::Void(*)(::PNDIOOHCBLB*, ::CJOJDEPDCBK*))((::PBYTE)hIl2Cpp + CECPDHFNNEK_JHEJDLCNJLK_OFFSET))(a1, a2);
		}

		static ::System::Void EKLLFAKEINA(::PNDIOOHCBLB* a1, ::CJOJDEPDCBK* a2, ::RPG::GameCore::GameWorld* a3)
		{
			return ((::System::Void(*)(::PNDIOOHCBLB*, ::CJOJDEPDCBK*, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + CECPDHFNNEK_EKLLFAKEINA_OFFSET))(a1, a2, a3);
		}

	};
