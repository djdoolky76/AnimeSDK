#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCNEPHHMGLG;
class JGCCJFJPPPG;
class OABLCMFIHIC;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GIONHIKCIPL_BGAJIJALFAG_OFFSET UNITYSDK_OFFSET(0x15A41040)
#define GIONHIKCIPL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A414D0)
#define GIONHIKCIPL_GHHMOJLAOJC_OFFSET UNITYSDK_OFFSET(0x15A40D30)

inline static constexpr unsigned int GIONHIKCIPL_TypeDefinitionIndex = 62353;

	class GIONHIKCIPL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIONHIKCIPL_CTOR_OFFSET))(this);
		}

		::JGCCJFJPPPG* GHHMOJLAOJC(::OABLCMFIHIC* a1)
		{
			return ((::JGCCJFJPPPG*(*)(::PVOID, ::OABLCMFIHIC*))((::PBYTE)hIl2Cpp + GIONHIKCIPL_GHHMOJLAOJC_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::GCNEPHHMGLG*>* BGAJIJALFAG(::OABLCMFIHIC* a1)
		{
			return ((::System::Collections::Generic::List_1<::GCNEPHHMGLG*>*(*)(::PVOID, ::OABLCMFIHIC*))((::PBYTE)hIl2Cpp + GIONHIKCIPL_BGAJIJALFAG_OFFSET))(this, a1);
		}

	};
