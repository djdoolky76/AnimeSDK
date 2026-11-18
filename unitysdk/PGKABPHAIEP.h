#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

namespace ConfigModuleLib::Runtime { class LoadOp; }
namespace MoleMole::Config { class AnimationCurveLibrary; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class AnimationCurve; }

#define PGKABPHAIEP_CREATEINDEXOP_OFFSET UNITYSDK_OFFSET(0x13A932E0)
#define PGKABPHAIEP_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x13A93440)
#define PGKABPHAIEP_FEJHBICOECF_OFFSET UNITYSDK_OFFSET(0x13A93B50)
#define PGKABPHAIEP_HBPFOJEGNJG_OFFSET UNITYSDK_OFFSET(0x13A93930)
#define PGKABPHAIEP_IMKAKHKMEAA_OFFSET UNITYSDK_OFFSET(0x13A93560)
#define PGKABPHAIEP_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x13A937F0)
#define PGKABPHAIEP_NFGBODGPBAN_OFFSET UNITYSDK_OFFSET(0x13A938C0)
#define PGKABPHAIEP_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x13A93240)
#define PGKABPHAIEP__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A93530)
#define PGKABPHAIEP__CTOR_OFFSET UNITYSDK_OFFSET(0x13A93200)

inline static constexpr unsigned int PGKABPHAIEP_TypeDefinitionIndex = 92285;

class PGKABPHAIEP
{
public:
	static ::UnityEngine::AnimationCurve** StaticGet_CMKJKNNJPMB()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(PGKABPHAIEP_TypeDefinitionIndex)->GetStaticField(0x4B270);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKABPHAIEP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGKABPHAIEP__CCTOR_OFFSET))();
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PGKABPHAIEP_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateIndexOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGKABPHAIEP_CREATEINDEXOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PGKABPHAIEP_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void IMKAKHKMEAA(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* IKJJFEHDFPJ, ::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PGKABPHAIEP_IMKAKHKMEAA_OFFSET))(this, IKJJFEHDFPJ, CJBJONJDOLI);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PGKABPHAIEP_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NFGBODGPBAN(::Foundation::AssetPath OIIHCACKLHD, ::MoleMole::Config::AnimationCurveLibrary* MPEGILBLDNC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::AnimationCurveLibrary*))((::PBYTE)hIl2Cpp + PGKABPHAIEP_NFGBODGPBAN_OFFSET))(this, OIIHCACKLHD, MPEGILBLDNC);
	}

	::UnityEngine::AnimationCurve* FEJHBICOECF(::System::String* KEGJECMIADD)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PGKABPHAIEP_FEJHBICOECF_OFFSET))(this, KEGJECMIADD);
	}

	::System::Void HBPFOJEGNJG(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>* IKJJFEHDFPJ, ::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::AnimationCurve*>*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + PGKABPHAIEP_HBPFOJEGNJG_OFFSET))(this, IKJJFEHDFPJ, CJBJONJDOLI);
	}
};
