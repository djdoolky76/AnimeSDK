#pragma once
#include "unitysdk/unitysdk.h"

namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole::Config { class ConfigNapBloom; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KCFFKONNBBB_CREATEOP_OFFSET UNITYSDK_OFFSET(0x15B81910)
#define KCFFKONNBBB__CTOR_OFFSET UNITYSDK_OFFSET(0x15B81880)

inline static constexpr unsigned int KCFFKONNBBB_TypeDefinitionIndex = 79002;

class KCFFKONNBBB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFFKONNBBB__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigNapBloom*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCFFKONNBBB_CREATEOP_OFFSET))(this);
	}
};
