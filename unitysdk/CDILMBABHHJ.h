#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigDynamicValue; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Text { class StringBuilder; }

#define CDILMBABHHJ_BEFORERECYCLE_OFFSET UNITYSDK_OFFSET(0x14547C80)
#define CDILMBABHHJ_ODNPEIOJOAO_OFFSET UNITYSDK_OFFSET(0x14547D50)
#define CDILMBABHHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14547D40)

inline static constexpr unsigned int CDILMBABHHJ_TypeDefinitionIndex = 59884;

class CDILMBABHHJ : public ::System::Object
{
public:
	::System::Text::StringBuilder* ELEPNLJLMJA; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* IDPCNKLGFEO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDILMBABHHJ__CTOR_OFFSET))(this);
	}

	::System::Void BeforeRecycle()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDILMBABHHJ_BEFORERECYCLE_OFFSET))(this);
	}

	::System::Void ODNPEIOJOAO(::System::String* AOBPIIBMKCD, ::System::String* HAAJFLJEHNH, ::MoleMole::Config::ConfigDynamicValue* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MoleMole::Config::ConfigDynamicValue*))((::PBYTE)hIl2Cpp + CDILMBABHHJ_ODNPEIOJOAO_OFFSET))(this, AOBPIIBMKCD, HAAJFLJEHNH, EGEGIMGMJHN);
	}
};
