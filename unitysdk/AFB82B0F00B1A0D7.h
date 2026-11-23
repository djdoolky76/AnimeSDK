#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A7BB1E41BF037ECE;
class E3879F88BE4160AF;
class ED4768D175EFE6C9;
namespace ABC::Collections::Pooled { template <typename T> class PooledList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFB82B0F00B1A0D7_E4977A7463EE86D4_OFFSET UNITYSDK_OFFSET(0x2036BB0)
#define AFB82B0F00B1A0D7_EDEE36F8C45E1113_OFFSET UNITYSDK_OFFSET(0x2036A20)
#define AFB82B0F00B1A0D7_F16726121D2116C3_OFFSET UNITYSDK_OFFSET(0x20368E0)

inline static constexpr unsigned int AFB82B0F00B1A0D7_TypeDefinitionIndex = 8242;

class AFB82B0F00B1A0D7 : public ::System::Object
{
public:
	static ::A7BB1E41BF037ECE* F16726121D2116C3(::System::UInt32 F84E8CF7B57D657F)
	{
		return ((::A7BB1E41BF037ECE*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AFB82B0F00B1A0D7_F16726121D2116C3_OFFSET))(F84E8CF7B57D657F);
	}

	static ::System::Void E4977A7463EE86D4(::ABC::Collections::Pooled::PooledList_1<::ED4768D175EFE6C9*>* F0681E80D498F99A)
	{
		return ((::System::Void(*)(::ABC::Collections::Pooled::PooledList_1<::ED4768D175EFE6C9*>*))((::PBYTE)hIl2Cpp + AFB82B0F00B1A0D7_E4977A7463EE86D4_OFFSET))(F0681E80D498F99A);
	}

	static ::System::Collections::Generic::List_1<::E3879F88BE4160AF*>* EDEE36F8C45E1113(::System::UInt32 F84E8CF7B57D657F)
	{
		return ((::System::Collections::Generic::List_1<::E3879F88BE4160AF*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + AFB82B0F00B1A0D7_EDEE36F8C45E1113_OFFSET))(F84E8CF7B57D657F);
	}
};
