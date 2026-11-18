#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define PDMLODMILCE_BKBBKNIGDHN_OFFSET UNITYSDK_OFFSET(0x11962E90)
#define PDMLODMILCE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x119627E0)
#define PDMLODMILCE_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x119629B0)
#define PDMLODMILCE_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x11963110)
#define PDMLODMILCE_PPIDIMGLGDB_OFFSET UNITYSDK_OFFSET(0x11962D10)
#define PDMLODMILCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x11962740)
#define PDMLODMILCE__CTOR_OFFSET UNITYSDK_OFFSET(0x11962730)

inline static constexpr unsigned int PDMLODMILCE_TypeDefinitionIndex = 83368;

class PDMLODMILCE : public ::System::Object
{
public:
	static ::MoleMole::SkinMapAnimationClipData** StaticGet_HGCMMJHCNOB()
	{
		return (::MoleMole::SkinMapAnimationClipData**)Il2CppClass::FromTypeDefinitionIndex(PDMLODMILCE_TypeDefinitionIndex)->GetStaticField(0x42950);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>** StaticGet_ENDAADKPALI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>**)Il2CppClass::FromTypeDefinitionIndex(PDMLODMILCE_TypeDefinitionIndex)->GetStaticField(0x42958);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLODMILCE__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDMLODMILCE__CCTOR_OFFSET))();
	}

	static ::System::Void CHLEALKAOJO(::System::String* OIIHCACKLHD)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + PDMLODMILCE_CHLEALKAOJO_OFFSET))(OIIHCACKLHD);
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + PDMLODMILCE_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Int32 PPIDIMGLGDB(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + PDMLODMILCE_PPIDIMGLGDB_OFFSET))(PKMFBJMJCOO);
	}

	static ::UnityEngine::AnimationClip* BKBBKNIGDHN(::System::String* OIIHCACKLHD)
	{
		return ((::UnityEngine::AnimationClip*(*)(::System::String*))((::PBYTE)hIl2Cpp + PDMLODMILCE_BKBBKNIGDHN_OFFSET))(OIIHCACKLHD);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + PDMLODMILCE_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}
};
