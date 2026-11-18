#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AHDHIGCGKCK;
class DFEONFMKCKE;
namespace System::Collections::Generic { template <typename T1, typename T2> class IReadOnlyDictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANDBLLAKBAF_NCBBHBOIGGG_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x113C36F0)
#define ANDBLLAKBAF_NCBBHBOIGGG_LCPEGKENOEA_OFFSET UNITYSDK_OFFSET(0x678270)

inline static constexpr unsigned int ANDBLLAKBAF_NCBBHBOIGGG_TypeDefinitionIndex = 83066;

struct alignas(8) ANDBLLAKBAF_NCBBHBOIGGG
{
	::System::Collections::Generic::List_1<::AHDHIGCGKCK*>* ANPBCLAFCJB; // 0x10
	::System::Collections::Generic::List_1<::System::UInt32>* FLHNGDLANDC; // 0x18
	::System::Collections::Generic::List_1<::AHDHIGCGKCK*>* IIHLGEFGOBL; // 0x20

	::System::Void LCPEGKENOEA(::DFEONFMKCKE* AMEFDLEMJEL, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* BGOCGNGNMGD)
	{
		return ((::System::Void(*)(::PVOID, ::DFEONFMKCKE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + ANDBLLAKBAF_NCBBHBOIGGG_LCPEGKENOEA_OFFSET))(this, AMEFDLEMJEL, BGOCGNGNMGD);
	}

	/*
	static ::ANDBLLAKBAF_NCBBHBOIGGG COKNIICCODC(::DFEONFMKCKE* AMEFDLEMJEL, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>* BGOCGNGNMGD)
	{
		return ((::ANDBLLAKBAF_NCBBHBOIGGG(*)(::DFEONFMKCKE*, ::System::Collections::Generic::IReadOnlyDictionary_2<::System::UInt32, ::System::UInt32>*))((::PBYTE)hIl2Cpp + ANDBLLAKBAF_NCBBHBOIGGG_COKNIICCODC_OFFSET))(AMEFDLEMJEL, BGOCGNGNMGD);
	}
	*/
};
