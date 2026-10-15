#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
class EKFMIDBJDIA;
class FFGPIHAHBAD;
namespace RPG::Client::Prop { class TimeRewindParterrePuzzleConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_BDFDHBLALOG_OFFSET UNITYSDK_OFFSET(0xDDBECB0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CCTOR_OFFSET UNITYSDK_OFFSET(0xDDBF440)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CFPLOKCNEML_OFFSET UNITYSDK_OFFSET(0xDDBEFF0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CHECKPARTERRECANUSE_OFFSET UNITYSDK_OFFSET(0xDDBE5E0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xDDBF210)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDDBE6D0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DLICGFJBNBP_OFFSET UNITYSDK_OFFSET(0xDDBED40)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xDDBD4E0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_LHFJNFBOMIO_OFFSET UNITYSDK_OFFSET(0xDDBE180)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_NJBEFIJMHCG_OFFSET UNITYSDK_OFFSET(0xDDBEAF0)
#define RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_SETPARTERREUSED_OFFSET UNITYSDK_OFFSET(0xDDBE490)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int TimeRewindParterrePuzzleBoard_TypeDefinitionIndex = 78907;

	class TimeRewindParterrePuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::Il2CppArray<::RPG::Client::Prop::TimeRewindParterrePuzzleConfig*>* Config; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* LBANNHHGBBJ; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FFGPIHAHBAD*>* INHNIDFKBGI; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DMIJNIHCMOK; // 0x60
		::System::Text::StringBuilder* CBBLCBEDIKC; // 0x68
		static ::System::Int32* StaticGet_PlatformGrowAnimHash()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "TimeRewindParterrePuzzleBoard")->GetStaticField(0x12870);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CCTOR_OFFSET))();
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetParterreUsed(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_SETPARTERREUSED_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean CheckParterreCanUse(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CHECKPARTERRECANUSE_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void NJBEFIJMHCG(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_NJBEFIJMHCG_OFFSET))(this, a1);
		}

		::System::Void DLICGFJBNBP(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_DLICGFJBNBP_OFFSET))(this, a1);
		}

		::System::Void BDFDHBLALOG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_BDFDHBLALOG_OFFSET))(this, a1, a2);
		}

		::System::Void LHFJNFBOMIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_LHFJNFBOMIO_OFFSET))(this);
		}

		::System::Void CFPLOKCNEML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_TIMEREWINDPARTERREPUZZLEBOARD_CFPLOKCNEML_OFFSET))(this);
		}

	};
}
