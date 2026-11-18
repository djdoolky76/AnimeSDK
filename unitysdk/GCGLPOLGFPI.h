#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class BDPKPPIGJPE;
class EBPKIAGDKPA;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define GCGLPOLGFPI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1751F780)
#define GCGLPOLGFPI_DBJBPIIIOKL_OFFSET UNITYSDK_OFFSET(0x1751FF70)
#define GCGLPOLGFPI_GFFNOHJEPGE_OFFSET UNITYSDK_OFFSET(0x1751FA40)
#define GCGLPOLGFPI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x17520110)
#define GCGLPOLGFPI_MFNAOHBKBNK_OFFSET UNITYSDK_OFFSET(0x1751F8A0)
#define GCGLPOLGFPI_OJKJJMKJFCP_OFFSET UNITYSDK_OFFSET(0x1751FCB0)
#define GCGLPOLGFPI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1751F6E0)
#define GCGLPOLGFPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1751F650)

inline static constexpr unsigned int GCGLPOLGFPI_TypeDefinitionIndex = 65552;

class GCGLPOLGFPI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_CREATEOP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MFNAOHBKBNK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_MFNAOHBKBNK_OFFSET))(this);
	}

	static ::System::Void GFFNOHJEPGE(::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>* DDLDFCAIKLP, ::BDPKPPIGJPE* MFKJJDHKAAP, ::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*, ::BDPKPPIGJPE*, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_GFFNOHJEPGE_OFFSET))(DDLDFCAIKLP, MFKJJDHKAAP, OIIHCACKLHD);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>* OJKJJMKJFCP(::Il2CppArray<::Foundation::AssetPath>* JPOGGACGEPO, ::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* ECACIAGIEKA)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::EBPKIAGDKPA*>*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_OJKJJMKJFCP_OFFSET))(JPOGGACGEPO, FLOOJIHFBLF, ECACIAGIEKA);
	}

	::EBPKIAGDKPA* DBJBPIIIOKL(::System::Int32 HKHHHJHCGKL)
	{
		return ((::EBPKIAGDKPA*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_DBJBPIIIOKL_OFFSET))(this, HKHHHJHCGKL);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + GCGLPOLGFPI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
