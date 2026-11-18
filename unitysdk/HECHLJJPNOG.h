#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/BaseTimeline/BaseTimelineBehavior.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define HECHLJJPNOG_ABMHKNDJHFA_OFFSET UNITYSDK_OFFSET(0x13D888F0)
#define HECHLJJPNOG_AIIGNGJFNKC_OFFSET UNITYSDK_OFFSET(0x13D88690)
#define HECHLJJPNOG_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x13D88C10)
#define HECHLJJPNOG_OFMFPDACPLH_OFFSET UNITYSDK_OFFSET(0x13D88C00)
#define HECHLJJPNOG_ONPROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13D88220)
#define HECHLJJPNOG_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x13D88110)
#define HECHLJJPNOG__CCTOR_OFFSET UNITYSDK_OFFSET(0x13D88BF0)
#define HECHLJJPNOG__CTOR_OFFSET UNITYSDK_OFFSET(0x13D88BE0)

inline static constexpr unsigned int HECHLJJPNOG_TypeDefinitionIndex = 40528;

class HECHLJJPNOG : public ::MoleMole::Timeline::BaseTimeline::BaseTimelineBehavior
{
public:
	static ::System::Boolean* StaticGet_BNHJELAEIGC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HECHLJJPNOG_TypeDefinitionIndex)->GetStaticField(0x120C0);
	}
	static ::System::UInt64* StaticGet_DIDLACBMOFO()
	{
		return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(HECHLJJPNOG_TypeDefinitionIndex)->GetStaticField(0x120C8);
	}
	::UnityEngine::GameObject* GLJLLBPMCIO; // 0x18
	::UnityEngine::Playables::PlayableDirector* LEMDDJFGKMM; // 0x20
	::System::Boolean MJOALFHPKGM; // 0x28
	::System::Boolean GJGCMMNKKNI; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HECHLJJPNOG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HECHLJJPNOG__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HECHLJJPNOG_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnProcessFrame(::UnityEngine::Playables::Playable BBAPGLCBDOF, ::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC, ::System::Single IECOJPMPJMP, ::System::Int32 DFDHKJHBBAD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HECHLJJPNOG_ONPROCESSFRAME_OFFSET))(this, BBAPGLCBDOF, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC, IECOJPMPJMP, DFDHKJHBBAD);
	}

	::System::Boolean AIIGNGJFNKC(::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HECHLJJPNOG_AIIGNGJFNKC_OFFSET))(this, NEEMKJBIIBC);
	}

	::System::Void OFMFPDACPLH(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::Playable KMGKAIDEIBA, ::UnityEngine::Playables::FrameData FDHMCIFPNCK, ::System::Object* MPBJAGIKPJM, ::System::Single DDMDINPGCFI, ::System::Int32 CEIDLKIHMLC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + HECHLJJPNOG_OFMFPDACPLH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM, DDMDINPGCFI, CEIDLKIHMLC);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HECHLJJPNOG_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Boolean ABMHKNDJHFA(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HECHLJJPNOG_ABMHKNDJHFA_OFFSET))(this, HKOFGPMIFHB);
	}
};
