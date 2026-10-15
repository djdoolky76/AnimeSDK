#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBBLONHLCFC.h"
class BJAKGOHEGBP;
class JBBLONHLCFC;
class JBKHNCLKEHI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JBKHNCLKEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC768C0)
#define JBKHNCLKEHI_HIPJPOPMIKM_OFFSET UNITYSDK_OFFSET(0x1EC769C0)
#define JBKHNCLKEHI_NDGDDODNDMP_1_OFFSET UNITYSDK_OFFSET(0x1EC76BA0)
#define JBKHNCLKEHI_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x1EC76A30)
#define JBKHNCLKEHI_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0x1EC77240)

	class JBKHNCLKEHI : public ::JBBLONHLCFC
	{
	public:
		::System::Void _ctor(::BJAKGOHEGBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJAKGOHEGBP*))((::PBYTE)hIl2Cpp + JBKHNCLKEHI_CTOR_OFFSET))(this, a1);
		}

		::JBKHNCLKEHI* NDGDDODNDMP(::System::Type* a1, ::System::String* a2)
		{
			return ((::JBKHNCLKEHI*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + JBKHNCLKEHI_NDGDDODNDMP_OFFSET))(this, a1, a2);
		}

		::JBKHNCLKEHI* NDGDDODNDMP_1(::System::Collections::Generic::IEnumerable_1<::System::Type*>* a1)
		{
			return ((::JBKHNCLKEHI*(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::System::Type*>*))((::PBYTE)hIl2Cpp + JBKHNCLKEHI_NDGDDODNDMP_1_OFFSET))(this, a1);
		}

		::JBBLONHLCFC* HIPJPOPMIKM()
		{
			return ((::JBBLONHLCFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBKHNCLKEHI_HIPJPOPMIKM_OFFSET))(this);
		}

		::JBBLONHLCFC* OLCHHDKKPLI(::System::Type* a1)
		{
			return ((::JBBLONHLCFC*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + JBKHNCLKEHI_OLCHHDKKPLI_OFFSET))(this, a1);
		}

	};
