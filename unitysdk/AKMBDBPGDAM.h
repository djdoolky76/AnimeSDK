#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define AKMBDBPGDAM_OMKKJLLJJAD_OFFSET UNITYSDK_OFFSET(0x14225540)
#define AKMBDBPGDAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14225530)

inline static constexpr unsigned int AKMBDBPGDAM_TypeDefinitionIndex = 63992;

class AKMBDBPGDAM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMBDBPGDAM__CTOR_OFFSET))(this);
	}

	static ::System::Void OMKKJLLJJAD(::System::String* BLGBIINHHNB, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* NIBDOKHAALH)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + AKMBDBPGDAM_OMKKJLLJJAD_OFFSET))(BLGBIINHHNB, NIBDOKHAALH);
	}
};
