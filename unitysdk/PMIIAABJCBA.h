#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define PMIIAABJCBA__CTOR_OFFSET UNITYSDK_OFFSET(0x11998530)

inline static constexpr unsigned int PMIIAABJCBA_TypeDefinitionIndex = 54637;

class PMIIAABJCBA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Single>* AKMAEHBHLEB; // 0x10
	::System::Int32 LOOEOIMNKNI; // 0x18
	::System::UInt32 MNAIIBHLHMA; // 0x1C
	::System::Int32 JBMMGBOMDCO; // 0x20
	::System::Boolean LKEKJLGGOGK; // 0x24
	::System::Byte _padding0[0x3];
	::System::UInt32 EIPCGGPOHDD; // 0x28
	::JGLIFHIAIEH ILOJFPNKJII; // 0x2C
	::System::UInt32 DOPFMGOEFFG; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMIIAABJCBA__CTOR_OFFSET))(this);
	}
};
