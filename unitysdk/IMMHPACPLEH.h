#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class BOOAPJIDGLO;
class CMLEOMMLODC;
class DCKOIEAAEDL;
class IMMHPACPLEH_FNBDKPPFNFO;
class MLPGEJOFJBL;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define IMMHPACPLEH_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15C21450)
#define IMMHPACPLEH_FBCCBMGGKFJ_OFFSET UNITYSDK_OFFSET(0x15C21720)
#define IMMHPACPLEH_GCMAHCACHFD_OFFSET UNITYSDK_OFFSET(0x15C21570)
#define IMMHPACPLEH_HCMHNNOPPNC_OFFSET UNITYSDK_OFFSET(0x15C22630)
#define IMMHPACPLEH_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x15C21C30)
#define IMMHPACPLEH_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x15C22560)
#define IMMHPACPLEH_KDAPPHIFMIC_OFFSET UNITYSDK_OFFSET(0x15C21A80)
#define IMMHPACPLEH_PDGEKFAPEFB_OFFSET UNITYSDK_OFFSET(0x15C218D0)
#define IMMHPACPLEH_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x15C213B0)
#define IMMHPACPLEH__CTOR_OFFSET UNITYSDK_OFFSET(0x15C21320)

inline static constexpr unsigned int IMMHPACPLEH_TypeDefinitionIndex = 39741;

class IMMHPACPLEH
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IMMHPACPLEH_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH_CREATEOP_OFFSET))(this);
	}

	::CMLEOMMLODC* GCMAHCACHFD(::System::Int32 NMFFKCDMAMC)
	{
		return ((::CMLEOMMLODC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMMHPACPLEH_GCMAHCACHFD_OFFSET))(this, NMFFKCDMAMC);
	}

	::MLPGEJOFJBL* FBCCBMGGKFJ(::System::Int32 NMFFKCDMAMC)
	{
		return ((::MLPGEJOFJBL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMMHPACPLEH_FBCCBMGGKFJ_OFFSET))(this, NMFFKCDMAMC);
	}

	::BOOAPJIDGLO* PDGEKFAPEFB(::System::Int32 NMFFKCDMAMC)
	{
		return ((::BOOAPJIDGLO*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMMHPACPLEH_PDGEKFAPEFB_OFFSET))(this, NMFFKCDMAMC);
	}

	::DCKOIEAAEDL* KDAPPHIFMIC(::System::Int32 NMFFKCDMAMC)
	{
		return ((::DCKOIEAAEDL*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMMHPACPLEH_KDAPPHIFMIC_OFFSET))(this, NMFFKCDMAMC);
	}

	static ::IMMHPACPLEH_FNBDKPPFNFO* HOEPJPJODKF(::Il2CppArray<::Foundation::AssetPath>* NCOLHHBDNOM, ::Il2CppArray<::Foundation::AssetPath>* FLOOJIHFBLF, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* JICBDECIBGK)
	{
		return ((::IMMHPACPLEH_FNBDKPPFNFO*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + IMMHPACPLEH_HOEPJPJODKF_OFFSET))(NCOLHHBDNOM, FLOOJIHFBLF, JICBDECIBGK);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + IMMHPACPLEH_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::BOOAPJIDGLO*>* HCMHNNOPPNC()
	{
		return ((::System::Collections::Generic::List_1<::BOOAPJIDGLO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMMHPACPLEH_HCMHNNOPPNC_OFFSET))(this);
	}
};
