#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CNBICBLHLDC;
class JLKMMJJKOPC;
class MCEECPBAAHB;
class PCPDGMKDIKA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define GHPFJPFGMHG_DIFABFDJPBJ_OFFSET UNITYSDK_OFFSET(0x181427D0)
#define GHPFJPFGMHG__CTOR_OFFSET UNITYSDK_OFFSET(0x181425E0)

inline static constexpr unsigned int GHPFJPFGMHG_TypeDefinitionIndex = 65712;

class GHPFJPFGMHG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::CNBICBLHLDC*>* OBCKBJMOGOL; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MCEECPBAAHB*>* DIMBHIJJEIE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::JLKMMJJKOPC*>* HGIHAPALJPH; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::PCPDGMKDIKA*>* IMPJLFHGDCM; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPFJPFGMHG__CTOR_OFFSET))(this);
	}

	::System::Int32 DIFABFDJPBJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPFJPFGMHG_DIFABFDJPBJ_OFFSET))(this);
	}
};
