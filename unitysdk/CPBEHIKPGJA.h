#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FIEBGAGBELM.h"
class BJAKGOHEGBP;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define CPBEHIKPGJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC399F0)
#define CPBEHIKPGJA_DOCLGGFJGNB_OFFSET UNITYSDK_OFFSET(0x1EC39A00)

inline static constexpr unsigned int CPBEHIKPGJA_TypeDefinitionIndex = 44284;

	class CPBEHIKPGJA : public ::System::Object
	{
	public:
		::BJAKGOHEGBP* EEFMDEHLLFI; // 0x10
		::System::Void _ctor(::BJAKGOHEGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*))((::PBYTE)hIl2Cpp + CPBEHIKPGJA_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>* DOCLGGFJGNB()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::FIEBGAGBELM>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPBEHIKPGJA_DOCLGGFJGNB_OFFSET))(this);
		}

	};
