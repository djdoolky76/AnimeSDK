#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALMFLCJCHKP;
class BAMPJJAPJJG;
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }

#define ELAEFPMKKCN_CAIJGJMJBBP_OFFSET UNITYSDK_OFFSET(0x15519EF0)
#define ELAEFPMKKCN_DFAOOMAAAFE_OFFSET UNITYSDK_OFFSET(0x15519AF0)
#define ELAEFPMKKCN_EILIFDEBPAA_OFFSET UNITYSDK_OFFSET(0x1551A4D0)
#define ELAEFPMKKCN_HJCHCGGDPIA_OFFSET UNITYSDK_OFFSET(0x15519FA0)
#define ELAEFPMKKCN_IALMDMBLKHG_OFFSET UNITYSDK_OFFSET(0x15519C30)
#define ELAEFPMKKCN_IDMDGMCIGKO_OFFSET UNITYSDK_OFFSET(0x1551A190)
#define ELAEFPMKKCN_JENOIENNBIL_OFFSET UNITYSDK_OFFSET(0x15519DB0)
#define ELAEFPMKKCN_KHCAOLAFPAP_OFFSET UNITYSDK_OFFSET(0x1551AA30)
#define ELAEFPMKKCN_KKJJEHFBIHH_OFFSET UNITYSDK_OFFSET(0x15519CF0)
#define ELAEFPMKKCN_MNAEHLIGGJN_OFFSET UNITYSDK_OFFSET(0x15519880)
#define ELAEFPMKKCN_NAIACPAOJKP_OFFSET UNITYSDK_OFFSET(0x1551A520)
#define ELAEFPMKKCN_NECKAJFHHHO_OFFSET UNITYSDK_OFFSET(0x1551A8A0)
#define ELAEFPMKKCN_NPFNPABANNL_OFFSET UNITYSDK_OFFSET(0x1551A330)

inline static constexpr unsigned int ELAEFPMKKCN_TypeDefinitionIndex = 77796;

	class ELAEFPMKKCN : public ::System::Object
	{
	public:
		static ::UnityEngine::Quaternion MNAEHLIGGJN(::ALMFLCJCHKP* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Quaternion(*)(::ALMFLCJCHKP*, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_MNAEHLIGGJN_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DFAOOMAAAFE(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_DFAOOMAAAFE_OFFSET))(a1);
		}

		static ::System::Single IALMDMBLKHG(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_IALMDMBLKHG_OFFSET))(a1);
		}

		static ::System::Boolean KKJJEHFBIHH(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_KKJJEHFBIHH_OFFSET))(a1);
		}

		static ::System::Void JENOIENNBIL(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* a5, ::BAMPJJAPJJG* a6)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>*, ::BAMPJJAPJJG*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_JENOIENNBIL_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CAIJGJMJBBP(::ALMFLCJCHKP* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* a5, ::BAMPJJAPJJG* a6)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::System::Single, ::System::Single, ::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>*, ::BAMPJJAPJJG*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_CAIJGJMJBBP_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::UnityEngine::AnimationClip* HJCHCGGDPIA(::ALMFLCJCHKP* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AnimationClip*(*)(::ALMFLCJCHKP*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_HJCHCGGDPIA_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::UnityEngine::AnimatorClipInfo>* IDMDGMCIGKO(::ALMFLCJCHKP* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::UnityEngine::AnimatorClipInfo>*(*)(::ALMFLCJCHKP*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_IDMDGMCIGKO_OFFSET))(a1, a2, a3);
		}

		static ::System::Nullable_1<::UnityEngine::AnimatorStateInfo> NPFNPABANNL(::ALMFLCJCHKP* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Nullable_1<::UnityEngine::AnimatorStateInfo>(*)(::ALMFLCJCHKP*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_NPFNPABANNL_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean EILIFDEBPAA(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_EILIFDEBPAA_OFFSET))(a1);
		}

		static ::System::Void NAIACPAOJKP(::ALMFLCJCHKP* a1, ::System::String* a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::ALMFLCJCHKP*, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_NAIACPAOJKP_OFFSET))(a1, a2, a3);
		}

		static ::System::Single NECKAJFHHHO(::ALMFLCJCHKP* a1)
		{
			return ((::System::Single(*)(::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_NECKAJFHHHO_OFFSET))(a1);
		}

		static ::System::Single KHCAOLAFPAP(::System::Single a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Single(*)(::System::Single, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ELAEFPMKKCN_KHCAOLAFPAP_OFFSET))(a1, a2);
		}

	};
