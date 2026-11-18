#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ADAJKAICKFC_FFEIIHFAGGH_KJCCPAOKGPJ_OFFSET UNITYSDK_OFFSET(0x14343C30)
#define ADAJKAICKFC_FFEIIHFAGGH__CTOR_OFFSET UNITYSDK_OFFSET(0x14343340)

inline static constexpr unsigned int ADAJKAICKFC_FFEIIHFAGGH_TypeDefinitionIndex = 72385;

class ADAJKAICKFC_FFEIIHFAGGH : public ::System::Object
{
public:
	::System::Collections::Generic::HashSet_1<::System::Int32>* HNPPCKALPIM; // 0x10
	::System::Int32 AGCMMKOIPCB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADAJKAICKFC_FFEIIHFAGGH__CTOR_OFFSET))(this);
	}

	::System::Int32 KJCCPAOKGPJ(::System::Object* PAPGNKGOBGM, ::System::Object* LJJOHAAJGBG)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + ADAJKAICKFC_FFEIIHFAGGH_KJCCPAOKGPJ_OFFSET))(this, PAPGNKGOBGM, LJJOHAAJGBG);
	}
};
