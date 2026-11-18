#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationClip; }

#define NFAJOHLEPIH_BKBBKNIGDHN_OFFSET UNITYSDK_OFFSET(0x105B5670)
#define NFAJOHLEPIH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x105B58F0)
#define NFAJOHLEPIH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x105B42E0)
#define NFAJOHLEPIH_GGAOMPCGIJF_OFFSET UNITYSDK_OFFSET(0x105B48D0)
#define NFAJOHLEPIH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x105B4680)
#define NFAJOHLEPIH_PPIDIMGLGDB_OFFSET UNITYSDK_OFFSET(0x105B4750)
#define NFAJOHLEPIH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x105B4240)
#define NFAJOHLEPIH__CCTOR_OFFSET UNITYSDK_OFFSET(0x105B45E0)
#define NFAJOHLEPIH__CTOR_OFFSET UNITYSDK_OFFSET(0x105B41B0)

inline static constexpr unsigned int NFAJOHLEPIH_TypeDefinitionIndex = 79128;

class NFAJOHLEPIH
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>** StaticGet_ENDAADKPALI()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::ValueTuple_2<::UnityEngine::AnimationClip*, ::Foundation::AssetRequestHandle>>**)Il2CppClass::FromTypeDefinitionIndex(NFAJOHLEPIH_TypeDefinitionIndex)->GetStaticField(0x4AF40);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAJOHLEPIH__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFAJOHLEPIH__CCTOR_OFFSET))();
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SkinMapAnimationClipData*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::MoleMole::SkinMapAnimationClipData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Int32 PPIDIMGLGDB(::System::Int32 PKMFBJMJCOO)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_PPIDIMGLGDB_OFFSET))(PKMFBJMJCOO);
	}

	::System::Void GGAOMPCGIJF(::MoleMole::SkinMapAnimationClipData* JIJMHBJLJMO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkinMapAnimationClipData*))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_GGAOMPCGIJF_OFFSET))(this, JIJMHBJLJMO);
	}

	static ::UnityEngine::AnimationClip* BKBBKNIGDHN(::System::String* OIIHCACKLHD)
	{
		return ((::UnityEngine::AnimationClip*(*)(::System::String*))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_BKBBKNIGDHN_OFFSET))(OIIHCACKLHD);
	}

	static ::System::Void CHLEALKAOJO(::System::String* OIIHCACKLHD)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NFAJOHLEPIH_CHLEALKAOJO_OFFSET))(OIIHCACKLHD);
	}
};
