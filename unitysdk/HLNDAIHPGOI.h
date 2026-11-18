#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NHPPHFMEHCK;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HLNDAIHPGOI_LNOBKBADIFL_OFFSET UNITYSDK_OFFSET(0x15B6A040)
#define HLNDAIHPGOI_MNBDHOPFNKC_OFFSET UNITYSDK_OFFSET(0x15B6A5A0)
#define HLNDAIHPGOI__CTOR_OFFSET UNITYSDK_OFFSET(0x15B6A030)

inline static constexpr unsigned int HLNDAIHPGOI_TypeDefinitionIndex = 44862;

class HLNDAIHPGOI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLNDAIHPGOI__CTOR_OFFSET))(this);
	}

	static ::System::Boolean LNOBKBADIFL(::NHPPHFMEHCK* IPKCGLGJANH, ::System::Collections::Generic::List_1<::System::Int32>* JDCECCMJNPP)
	{
		return ((::System::Boolean(*)(::NHPPHFMEHCK*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + HLNDAIHPGOI_LNOBKBADIFL_OFFSET))(IPKCGLGJANH, JDCECCMJNPP);
	}

	static ::System::Boolean MNBDHOPFNKC(::NHPPHFMEHCK* IPKCGLGJANH)
	{
		return ((::System::Boolean(*)(::NHPPHFMEHCK*))((::PBYTE)hIl2Cpp + HLNDAIHPGOI_MNBDHOPFNKC_OFFSET))(IPKCGLGJANH);
	}
};
