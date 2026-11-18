#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"

class JHDKPNKJNDA;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class String; }
namespace UnityEngine { class TextAsset; }

#define NOCEEJPIKCM_BOBMJJMEFDE_OFFSET UNITYSDK_OFFSET(0x105CFBD0)
#define NOCEEJPIKCM_CREATEITEMLOADOP_OFFSET UNITYSDK_OFFSET(0x105CF7F0)
#define NOCEEJPIKCM_FNILLDGPCPK_OFFSET UNITYSDK_OFFSET(0x105CF930)
#define NOCEEJPIKCM_GMPEINHPEBJ_OFFSET UNITYSDK_OFFSET(0x105CFB50)
#define NOCEEJPIKCM_LNOCMGFDIHC_OFFSET UNITYSDK_OFFSET(0x105CFB90)
#define NOCEEJPIKCM_RESOLVEASSETPATH_OFFSET UNITYSDK_OFFSET(0x105CF720)
#define NOCEEJPIKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x105CF6E0)

inline static constexpr unsigned int NOCEEJPIKCM_TypeDefinitionIndex = 67087;

class NOCEEJPIKCM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOCEEJPIKCM__CTOR_OFFSET))(this);
	}

	::Foundation::AssetPath ResolveAssetPath(::System::String* JDFCJJBENBM)
	{
		return ((::Foundation::AssetPath(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_RESOLVEASSETPATH_OFFSET))(this, JDFCJJBENBM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::JHDKPNKJNDA*>* CreateItemLoadOp(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::JHDKPNKJNDA*>*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_CREATEITEMLOADOP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Boolean FNILLDGPCPK(::System::String* JDFCJJBENBM, ::JHDKPNKJNDA*& NFJECIGPFOL)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::JHDKPNKJNDA*&))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_FNILLDGPCPK_OFFSET))(this, JDFCJJBENBM, NFJECIGPFOL);
	}

	static ::JHDKPNKJNDA* BOBMJJMEFDE(::UnityEngine::TextAsset* NGLKIKLLLFL, ::Foundation::AssetPath JIBMJEDLNHK)
	{
		return ((::JHDKPNKJNDA*(*)(::UnityEngine::TextAsset*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_BOBMJJMEFDE_OFFSET))(NGLKIKLLLFL, JIBMJEDLNHK);
	}

	static ::System::Void GMPEINHPEBJ(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_GMPEINHPEBJ_OFFSET))(NAPFALLANDL);
	}

	static ::System::String* LNOCMGFDIHC(::System::String* JDFCJJBENBM)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + NOCEEJPIKCM_LNOCMGFDIHC_OFFSET))(JDFCJJBENBM);
	}
};
