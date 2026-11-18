#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKOMFIBMBN.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define ADHAOKJMHOA_NGDBLBHHOBB_OFFSET UNITYSDK_OFFSET(0x134A7CF0)
#define ADHAOKJMHOA__CTOR_OFFSET UNITYSDK_OFFSET(0x134A7CE0)

inline static constexpr unsigned int ADHAOKJMHOA_TypeDefinitionIndex = 80909;

class ADHAOKJMHOA : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHAOKJMHOA__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::List_1<::MIKOMFIBMBN>* NGDBLBHHOBB()
	{
		return ((::System::Collections::Generic::List_1<::MIKOMFIBMBN>*(*)())((::PBYTE)hIl2Cpp + ADHAOKJMHOA_NGDBLBHHOBB_OFFSET))();
	}
};
