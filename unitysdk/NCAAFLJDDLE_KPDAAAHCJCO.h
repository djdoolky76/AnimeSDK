#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGAGCFOLHGI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCAAFLJDDLE_KPDAAAHCJCO_NDMMCJCBGEB_OFFSET UNITYSDK_OFFSET(0x17FCED70)
#define NCAAFLJDDLE_KPDAAAHCJCO__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCECF0)

inline static constexpr unsigned int NCAAFLJDDLE_KPDAAAHCJCO_TypeDefinitionIndex = 15514;

class NCAAFLJDDLE_KPDAAAHCJCO : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FGAGCFOLHGI*>* _GPGKPLNOKKA_k__BackingField; // 0x10
	::System::Byte KHKHDDPILIB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAAFLJDDLE_KPDAAAHCJCO__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::FGAGCFOLHGI*>* NDMMCJCBGEB()
	{
		return ((::System::Collections::Generic::List_1<::FGAGCFOLHGI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCAAFLJDDLE_KPDAAAHCJCO_NDMMCJCBGEB_OFFSET))(this);
	}
};
