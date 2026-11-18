#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NDDKGELLJPM__CTOR_OFFSET UNITYSDK_OFFSET(0x131362B0)

inline static constexpr unsigned int NDDKGELLJPM_TypeDefinitionIndex = 40983;

class NDDKGELLJPM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* AKMAEHBHLEB; // 0x10
	::JGLIFHIAIEH ILOJFPNKJII; // 0x18
	::System::Int32 FDOGGANACAP; // 0x20
	::System::Int32 JBMMGBOMDCO; // 0x24
	::System::UInt32 MNAIIBHLHMA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDDKGELLJPM__CTOR_OFFSET))(this);
	}
};
