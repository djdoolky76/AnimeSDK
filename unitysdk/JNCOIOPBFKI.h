#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class ConfigBigSceneGroupEntityPriority; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JNCOIOPBFKI_CREATEOP_OFFSET UNITYSDK_OFFSET(0x1A47F1C0)
#define JNCOIOPBFKI_HOEPJPJODKF_OFFSET UNITYSDK_OFFSET(0x1A47F3B0)
#define JNCOIOPBFKI_JFAPDECBMGI_OFFSET UNITYSDK_OFFSET(0x1A47F2E0)
#define JNCOIOPBFKI_PMACFDJCCHK_OFFSET UNITYSDK_OFFSET(0x1A47F760)
#define JNCOIOPBFKI_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x1A47F120)
#define JNCOIOPBFKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A47F090)

inline static constexpr unsigned int JNCOIOPBFKI_TypeDefinitionIndex = 71989;

class JNCOIOPBFKI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase CFMBGCMCNMM)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_PRELOADFORPHASE_OFFSET))(this, CFMBGCMCNMM);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_CREATEOP_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle JFAPDECBMGI(::ConfigModuleLib::Runtime::LoadPhase MIALFKCCCPI)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_JFAPDECBMGI_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* HOEPJPJODKF(::System::Int32 GIBDHABECBD, ::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>* KEJJKECGLOP)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>*(*)(::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::ConfigBigSceneGroupEntityPriority*>*))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_HOEPJPJODKF_OFFSET))(GIBDHABECBD, KEJJKECGLOP);
	}

	::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>* PMACFDJCCHK()
	{
		return ((::System::Collections::Generic::IReadOnlyDictionary_2<::System::Int32, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNCOIOPBFKI_PMACFDJCCHK_OFFSET))(this);
	}
};
