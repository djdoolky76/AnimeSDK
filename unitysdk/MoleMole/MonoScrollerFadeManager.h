#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class ScrollRect; }

#define MOLEMOLE_MONOSCROLLERFADEMANAGER_EBDHEJBLJDL_OFFSET UNITYSDK_OFFSET(0x13EFFF40)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_FASTFORWARDTOANIMEND_OFFSET UNITYSDK_OFFSET(0x13F00120)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0x13EFF450)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x13EFF460)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_KALDMNBCHPB_OFFSET UNITYSDK_OFFSET(0x13F00480)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_NCHACAJNHCG_OFFSET UNITYSDK_OFFSET(0x13EFFB50)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_OBFNBEFCDGJ_OFFSET UNITYSDK_OFFSET(0x13F00520)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAYWHENSTOP_OFFSET UNITYSDK_OFFSET(0x13EFFBD0)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAY_OFFSET UNITYSDK_OFFSET(0x13EFFA70)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x13EFFC20)
#define MOLEMOLE_MONOSCROLLERFADEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F00420)

namespace MoleMole
{
	inline static constexpr unsigned int MonoScrollerFadeManager_TypeDefinitionIndex = 46417;

	class MonoScrollerFadeManager : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* CDMBEOFBKCL; // 0x18
		::UnityEngine::UI::ScrollRect* GIFAINPFBDG; // 0x20
		::System::Single FadeInDuration; // 0x28
		::System::Single NextItemFadeInDelay; // 0x2C
		::System::Single FirstDelay; // 0x30
		::System::Boolean NCKCKOHHMOE; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void Init(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* MHNCIKNDFAI, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>* GAJFBADCGAN, ::System::Func_3<::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean>* MHCJCHIABNF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::RectTransform*>*, ::System::Func_3<::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_INIT_OFFSET))(this, MHNCIKNDFAI, GAJFBADCGAN, MHCJCHIABNF);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAY_OFFSET))(this);
		}

		::System::Void PlayWhenStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_PLAYWHENSTOP_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_RESET_OFFSET))(this);
		}

		::System::Void FastForwardToAnimEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_FASTFORWARDTOANIMEND_OFFSET))(this);
		}

		::System::Collections::IEnumerator* NCHACAJNHCG()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_NCHACAJNHCG_OFFSET))(this);
		}

		::System::Void EBDHEJBLJDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_EBDHEJBLJDL_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KALDMNBCHPB(::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>* FBFFNONANPB, ::System::Int32 BIOGEIHKABE, ::System::Int32 FKHDEPNOPGO)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::RectTransform*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_KALDMNBCHPB_OFFSET))(this, FBFFNONANPB, BIOGEIHKABE, FKHDEPNOPGO);
		}

		::System::Void OBFNBEFCDGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSCROLLERFADEMANAGER_OBFNBEFCDGJ_OFFSET))(this);
		}
	};
}
