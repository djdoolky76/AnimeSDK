#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HNPECBKAPMG__CTOR_OFFSET UNITYSDK_OFFSET(0x153817A0)

inline static constexpr unsigned int HNPECBKAPMG_TypeDefinitionIndex = 53152;

class HNPECBKAPMG : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* OPEACAHEAON; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNPECBKAPMG__CTOR_OFFSET))(this);
	}
};
