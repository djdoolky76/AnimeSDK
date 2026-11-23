#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define FBF37A3AFF6F7F28_A54BE52F56CA80C9_OFFSET UNITYSDK_OFFSET(0x39553F0)
#define FBF37A3AFF6F7F28_A77708DE91265E43_OFFSET UNITYSDK_OFFSET(0x39552F0)
#define FBF37A3AFF6F7F28__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBF37A3AFF6F7F28_TypeDefinitionIndex = 12399;

class FBF37A3AFF6F7F28 : public ::System::Object
{
public:
	static ::System::Void A77708DE91265E43(::System::String* B083BE7841B347C4, ::System::Int32 B714679C324FF96E)
	{
		return ((::System::Void(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FBF37A3AFF6F7F28_A77708DE91265E43_OFFSET))(B083BE7841B347C4, B714679C324FF96E);
	}

	static ::System::Void A54BE52F56CA80C9(::System::String* B083BE7841B347C4)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + FBF37A3AFF6F7F28_A54BE52F56CA80C9_OFFSET))(B083BE7841B347C4);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBF37A3AFF6F7F28__CTOR_OFFSET))(this);
	}
};
