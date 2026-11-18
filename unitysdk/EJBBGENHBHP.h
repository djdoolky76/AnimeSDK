#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/ScriptPlayable_1.h"

namespace MoleMole::Timeline { class TextShowBehaviour; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }

#define EJBBGENHBHP_GFFNGLKFCDH_OFFSET UNITYSDK_OFFSET(0x10F37450)
#define EJBBGENHBHP_GGPPAONBLPI_OFFSET UNITYSDK_OFFSET(0x10F380E0)
#define EJBBGENHBHP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x10F38C00)
#define EJBBGENHBHP_JACBDJLLLHB_OFFSET UNITYSDK_OFFSET(0x10F38810)
#define EJBBGENHBHP_MNIBBKIGKOL_OFFSET UNITYSDK_OFFSET(0x10F37140)
#define EJBBGENHBHP_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x10F38630)
#define EJBBGENHBHP_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x10F38BF0)
#define EJBBGENHBHP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x10F369E0)
#define EJBBGENHBHP__CCTOR_OFFSET UNITYSDK_OFFSET(0x10F38800)
#define EJBBGENHBHP__CTOR_OFFSET UNITYSDK_OFFSET(0x10F38770)

inline static constexpr unsigned int EJBBGENHBHP_TypeDefinitionIndex = 79327;

class EJBBGENHBHP : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::UnityEngine::Canvas** StaticGet_INJNBIJGBPO()
	{
		return (::UnityEngine::Canvas**)Il2CppClass::FromTypeDefinitionIndex(EJBBGENHBHP_TypeDefinitionIndex)->GetStaticField(0x3DA60);
	}
	static ::System::Boolean* StaticGet_MHKMNPHPIAC()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EJBBGENHBHP_TypeDefinitionIndex)->GetStaticField(0xE170);
	}
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* OJFJJDCOAGC; // 0x10
	::System::Boolean ONEOEANDJLG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBBGENHBHP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJBBGENHBHP__CCTOR_OFFSET))();
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EJBBGENHBHP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EJBBGENHBHP_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void GGPPAONBLPI(::UnityEngine::GameObject* JOLKAJPHDOG, ::MoleMole::Timeline::TextShowBehaviour* HJAOFKFDLJF, ::System::Single IECOJPMPJMP, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*> HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::MoleMole::Timeline::TextShowBehaviour*, ::System::Single, ::UnityEngine::Playables::ScriptPlayable_1<::MoleMole::Timeline::TextShowBehaviour*>))((::PBYTE)hIl2Cpp + EJBBGENHBHP_GGPPAONBLPI_OFFSET))(this, JOLKAJPHDOG, HJAOFKFDLJF, IECOJPMPJMP, HKOFGPMIFHB);
	}

	::UnityEngine::GameObject* GFFNGLKFCDH(::System::Int32 ABHBKFJKINO, ::MoleMole::Timeline::TextShowBehaviour* HJAOFKFDLJF)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32, ::MoleMole::Timeline::TextShowBehaviour*))((::PBYTE)hIl2Cpp + EJBBGENHBHP_GFFNGLKFCDH_OFFSET))(this, ABHBKFJKINO, HJAOFKFDLJF);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EJBBGENHBHP_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void MNIBBKIGKOL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJBBGENHBHP_MNIBBKIGKOL_OFFSET))(this);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EJBBGENHBHP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::UnityEngine::Canvas* JACBDJLLLHB()
	{
		return ((::UnityEngine::Canvas*(*)())((::PBYTE)hIl2Cpp + EJBBGENHBHP_JACBDJLLLHB_OFFSET))();
	}
};
