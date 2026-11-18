#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

class ConfigEntityJoystickOrder;
class ConfigEntityJoystickOrders;
class NBCIGBMMOPB;
class PDMELGNDNPB_DFJLHIDCLGH;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PDMELGNDNPB_ADMKBHNLNEG_OFFSET UNITYSDK_OFFSET(0x19499860)
#define PDMELGNDNPB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x19499740)
#define PDMELGNDNPB_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x19499A40)
#define PDMELGNDNPB_PBAIDDDBDIO_OFFSET UNITYSDK_OFFSET(0x19499B10)
#define PDMELGNDNPB_PKMKAPCFHLC_OFFSET UNITYSDK_OFFSET(0x19499D90)
#define PDMELGNDNPB_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x194996A0)
#define PDMELGNDNPB__CTOR_OFFSET UNITYSDK_OFFSET(0x194995C0)

inline static constexpr unsigned int PDMELGNDNPB_TypeDefinitionIndex = 54781;

class PDMELGNDNPB
{
public:
	::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>* FBOKCAENFBA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PDMELGNDNPB_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB_CREATEOP_OFFSET))(this);
	}

	::System::Int32 ADMKBHNLNEG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMELGNDNPB_ADMKBHNLNEG_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + PDMELGNDNPB_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>* PBAIDDDBDIO(::NBCIGBMMOPB* DAEJMBDKILA, ::System::Int32 KIKOCMNOKHO)
	{
		return ((::System::Collections::Generic::List_1<::ConfigEntityJoystickOrder*>*(*)(::PVOID, ::NBCIGBMMOPB*, ::System::Int32))((::PBYTE)hIl2Cpp + PDMELGNDNPB_PBAIDDDBDIO_OFFSET))(this, DAEJMBDKILA, KIKOCMNOKHO);
	}

	static ::PDMELGNDNPB_DFJLHIDCLGH* PKMKAPCFHLC(::ConfigEntityJoystickOrders* DFMKILICPFB)
	{
		return ((::PDMELGNDNPB_DFJLHIDCLGH*(*)(::ConfigEntityJoystickOrders*))((::PBYTE)hIl2Cpp + PDMELGNDNPB_PKMKAPCFHLC_OFFSET))(DFMKILICPFB);
	}
};
