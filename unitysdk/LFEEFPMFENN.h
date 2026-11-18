#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENEBHMNFLCP;
class IGPKLGJGBCI;
class POGJJEENJKC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LFEEFPMFENN_FJEELIMENEA_OFFSET UNITYSDK_OFFSET(0x16844BB0)
#define LFEEFPMFENN_GPKFMELCKIO_OFFSET UNITYSDK_OFFSET(0x16844C60)
#define LFEEFPMFENN_HEAECJNDFPD_OFFSET UNITYSDK_OFFSET(0x16845010)
#define LFEEFPMFENN_LCNGGBOGLPK_OFFSET UNITYSDK_OFFSET(0x16844E40)
#define LFEEFPMFENN_NHHDPCGFAJB_OFFSET UNITYSDK_OFFSET(0x16844D10)

inline static constexpr unsigned int LFEEFPMFENN_TypeDefinitionIndex = 57054;

class LFEEFPMFENN : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::System::Int32>* FJEELIMENEA(::ENEBHMNFLCP* OILPBPIMIDA)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::ENEBHMNFLCP*))((::PBYTE)hIl2Cpp + LFEEFPMFENN_FJEELIMENEA_OFFSET))(OILPBPIMIDA);
	}

	static ::System::Collections::Generic::List_1<::System::Int32>* GPKFMELCKIO(::POGJJEENJKC* ENBBMAIHCFD)
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::POGJJEENJKC*))((::PBYTE)hIl2Cpp + LFEEFPMFENN_GPKFMELCKIO_OFFSET))(ENBBMAIHCFD);
	}

	static ::System::Int32 NHHDPCGFAJB()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LFEEFPMFENN_NHHDPCGFAJB_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::System::Boolean>* LCNGGBOGLPK(::System::Int32 KMMGKJPAOMF)
	{
		return ((::System::Collections::Generic::List_1<::System::Boolean>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + LFEEFPMFENN_LCNGGBOGLPK_OFFSET))(KMMGKJPAOMF);
	}

	static ::System::Int32 HEAECJNDFPD(::IGPKLGJGBCI* MOBNMDEDJIP)
	{
		return ((::System::Int32(*)(::IGPKLGJGBCI*))((::PBYTE)hIl2Cpp + LFEEFPMFENN_HEAECJNDFPD_OFFSET))(MOBNMDEDJIP);
	}
};
