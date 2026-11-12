#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAPDNDPPBKP.h"
#include "unitysdk/OGKIBIPPMOO.h"
class BAGCMCFPEKP;
namespace RPG::GameCore { class FetchAdvPropData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelAreaManager; }
namespace RPG::GameCore { class RollerCoasterCameraAnchorConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KMPJPEBANHH_AIMBNFCKDKK_OFFSET UNITYSDK_OFFSET(0xBDC2660)
#define KMPJPEBANHH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC1B60)
#define KMPJPEBANHH_FKOHPDBMLPH_OFFSET UNITYSDK_OFFSET(0xBDC2810)
#define KMPJPEBANHH_GGBPFFFJNIG_OFFSET UNITYSDK_OFFSET(0xBDC2B10)
#define KMPJPEBANHH_GHNJGHIAPPC_OFFSET UNITYSDK_OFFSET(0xBDC25C0)
#define KMPJPEBANHH_IBEGMLKNPGN_OFFSET UNITYSDK_OFFSET(0xBDC2D60)
#define KMPJPEBANHH_MBFMDCOKJHP_OFFSET UNITYSDK_OFFSET(0xBDC28F0)
#define KMPJPEBANHH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBDC1B90)

inline static constexpr unsigned int KMPJPEBANHH_TypeDefinitionIndex = 59430;

	class KMPJPEBANHH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BAGCMCFPEKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BAGCMCFPEKP*))((::PBYTE)hIl2Cpp + KMPJPEBANHH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPJPEBANHH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean GHNJGHIAPPC(::RPG::GameCore::RollerCoasterCameraAnchorConfig* a1, ::RPG::GameCore::LevelAreaManager* a2, ::System::UInt32 a3, ::OAPDNDPPBKP a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::RollerCoasterCameraAnchorConfig*, ::RPG::GameCore::LevelAreaManager*, ::System::UInt32, ::OAPDNDPPBKP))((::PBYTE)hIl2Cpp + KMPJPEBANHH_GHNJGHIAPPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AIMBNFCKDKK(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMPJPEBANHH_AIMBNFCKDKK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* MBFMDCOKJHP(::System::Single a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KMPJPEBANHH_MBFMDCOKJHP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::OGKIBIPPMOO>* GGBPFFFJNIG()
		{
			return ((::System::Collections::Generic::List_1<::OGKIBIPPMOO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMPJPEBANHH_GGBPFFFJNIG_OFFSET))(this);
		}

		::System::Void IBEGMLKNPGN(::RPG::GameCore::FetchAdvPropData* a1, ::System::Collections::Generic::List_1<::OGKIBIPPMOO>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FetchAdvPropData*, ::System::Collections::Generic::List_1<::OGKIBIPPMOO>*))((::PBYTE)hIl2Cpp + KMPJPEBANHH_IBEGMLKNPGN_OFFSET))(this, a1, a2);
		}

		::System::Void FKOHPDBMLPH(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + KMPJPEBANHH_FKOHPDBMLPH_OFFSET))(this, a1, a2);
		}

	};
