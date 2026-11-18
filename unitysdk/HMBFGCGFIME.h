#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/SceneManagement/Scene.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class MonoBasePerpStage; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define HMBFGCGFIME_CMLOEECHMNL_OFFSET UNITYSDK_OFFSET(0x17A5D600)
#define HMBFGCGFIME_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x17A5E320)
#define HMBFGCGFIME_JOJMBCHAIKD_OFFSET UNITYSDK_OFFSET(0x17A5E0C0)
#define HMBFGCGFIME_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x17A5E300)
#define HMBFGCGFIME_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x17A5E310)
#define HMBFGCGFIME_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x17A5DCF0)
#define HMBFGCGFIME_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x17A5DD70)
#define HMBFGCGFIME_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x17A5DDC0)
#define HMBFGCGFIME_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x17A5E2F0)
#define HMBFGCGFIME_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x17A5D190)
#define HMBFGCGFIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A5DFA0)
#define HMBFGCGFIME__CTOR_OFFSET UNITYSDK_OFFSET(0x17A5DF60)

inline static constexpr unsigned int HMBFGCGFIME_TypeDefinitionIndex = 66861;

class HMBFGCGFIME : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoBasePerpStage*>** StaticGet_HKPIDGMLAEK()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::MonoBasePerpStage*>**)Il2CppClass::FromTypeDefinitionIndex(HMBFGCGFIME_TypeDefinitionIndex)->GetStaticField(0x4F5E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::SceneManagement::Scene>** StaticGet_OCIGNGMFFJB()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::SceneManagement::Scene>**)Il2CppClass::FromTypeDefinitionIndex(HMBFGCGFIME_TypeDefinitionIndex)->GetStaticField(0x4F5E8);
	}
	::System::String* LGAIAMFDOAO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBFGCGFIME__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMBFGCGFIME__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HMBFGCGFIME_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::MoleMole::MonoBasePerpStage* JOJMBCHAIKD(::Il2CppArray<::UnityEngine::GameObject*>* HLFPIGCEAGI)
	{
		return ((::MoleMole::MonoBasePerpStage*(*)(::PVOID, ::Il2CppArray<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + HMBFGCGFIME_JOJMBCHAIKD_OFFSET))(this, HLFPIGCEAGI);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMBFGCGFIME_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HMBFGCGFIME_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void CMLOEECHMNL(::System::Boolean CPHDDAGKHLB, ::System::String* JNEPCCIHBMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + HMBFGCGFIME_CMLOEECHMNL_OFFSET))(this, CPHDDAGKHLB, JNEPCCIHBMB);
	}
};
