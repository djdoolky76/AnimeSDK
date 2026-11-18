#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOKJIFICJHA.h"
#include "unitysdk/System/Object.h"

namespace System { class Random; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NFGCGMFFCFO_OHKECEONILF_OFFSET UNITYSDK_OFFSET(0x12C59EF0)
#define NFGCGMFFCFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12C59E30)

inline static constexpr unsigned int NFGCGMFFCFO_TypeDefinitionIndex = 55348;

class NFGCGMFFCFO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::LOKJIFICJHA>* EGLHLBCLEJF; // 0x10
	::System::Random* MFEPCLGOHPI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGCGMFFCFO__CTOR_OFFSET))(this);
	}

	::LOKJIFICJHA OHKECEONILF()
	{
		return ((::LOKJIFICJHA(*)(::PVOID))((::PBYTE)hIl2Cpp + NFGCGMFFCFO_OHKECEONILF_OFFSET))(this);
	}
};
