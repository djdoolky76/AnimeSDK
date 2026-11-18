#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/HHIIMKCHHDI.h"

class ANHBKMILIDH;
class EDMMIENABLC_BKGABJNEFMG;
class EDMMIENABLC_GPJAMINEPHE;
class EDMMIENABLC_IFOODOCDKCM;
class EDMMIENABLC_KDDOCCKFCJH;
class EDMMIENABLC_KNHEOBKDFNG;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class Object; }
namespace System { class String; }

#define EDMMIENABLC_CREATEOP_OFFSET UNITYSDK_OFFSET(0x12BEB410)
#define EDMMIENABLC_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x12BEB8B0)
#define EDMMIENABLC_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x12BEC390)
#define EDMMIENABLC_LABBDLFFCIG_OFFSET UNITYSDK_OFFSET(0x12BEB5C0)
#define EDMMIENABLC_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x12BEB370)
#define EDMMIENABLC__CCTOR_OFFSET UNITYSDK_OFFSET(0x12BEB530)
#define EDMMIENABLC__CTOR_OFFSET UNITYSDK_OFFSET(0x12BEB2E0)

inline static constexpr unsigned int EDMMIENABLC_TypeDefinitionIndex = 53780;

class EDMMIENABLC
{
public:
	static ::EDMMIENABLC_IFOODOCDKCM** StaticGet_MBFFEIIHCPL()
	{
		return (::EDMMIENABLC_IFOODOCDKCM**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC_TypeDefinitionIndex)->GetStaticField(0x45F60);
	}
	static ::EDMMIENABLC_KNHEOBKDFNG** StaticGet_LJIIBMPJEAJ()
	{
		return (::EDMMIENABLC_KNHEOBKDFNG**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC_TypeDefinitionIndex)->GetStaticField(0x45F68);
	}
	static ::EDMMIENABLC_BKGABJNEFMG** StaticGet_PNJPPIDOJAF()
	{
		return (::EDMMIENABLC_BKGABJNEFMG**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC_TypeDefinitionIndex)->GetStaticField(0x45F70);
	}
	static ::EDMMIENABLC_GPJAMINEPHE** StaticGet_GNHPECIFJCO()
	{
		return (::EDMMIENABLC_GPJAMINEPHE**)Il2CppClass::FromTypeDefinitionIndex(EDMMIENABLC_TypeDefinitionIndex)->GetStaticField(0x45F78);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDMMIENABLC__CCTOR_OFFSET))();
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EDMMIENABLC_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDMMIENABLC_CREATEOP_OFFSET))(this);
	}

	static ::System::String* LABBDLFFCIG(::EDMMIENABLC_KDDOCCKFCJH* NGGNKKAMDGH, ::HHIIMKCHHDI CJBJONJDOLI)
	{
		return ((::System::String*(*)(::EDMMIENABLC_KDDOCCKFCJH*, ::HHIIMKCHHDI))((::PBYTE)hIl2Cpp + EDMMIENABLC_LABBDLFFCIG_OFFSET))(NGGNKKAMDGH, CJBJONJDOLI);
	}

	static ::EDMMIENABLC_KDDOCCKFCJH* HOEPJPJODKF(::ANHBKMILIDH* DFMKILICPFB)
	{
		return ((::EDMMIENABLC_KDDOCCKFCJH*(*)(::ANHBKMILIDH*))((::PBYTE)hIl2Cpp + EDMMIENABLC_HOEPJPJODKF_OFFSET))(DFMKILICPFB);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + EDMMIENABLC_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}
};
