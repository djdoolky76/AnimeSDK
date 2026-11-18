#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBFCHHGAPFP;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BDAGGNNDKIL__CTOR_OFFSET UNITYSDK_OFFSET(0x113D9970)

inline static constexpr unsigned int BDAGGNNDKIL_TypeDefinitionIndex = 80933;

class BDAGGNNDKIL : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KBFCHHGAPFP*>* NKCCMGELBLI; // 0x10
	::KBFCHHGAPFP* NGPCEPEDPEE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDAGGNNDKIL__CTOR_OFFSET))(this);
	}
};
