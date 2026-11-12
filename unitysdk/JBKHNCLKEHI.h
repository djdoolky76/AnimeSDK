#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBBLONHLCFC.h"
class BJAKGOHEGBP;
class JBBLONHLCFC;
class JBKHNCLKEHI;
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JBKHNCLKEHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF272B0)
#define JBKHNCLKEHI_HIPJPOPMIKM_OFFSET UNITYSDK_OFFSET(0x1FF273B0)
#define JBKHNCLKEHI_NDGDDODNDMP_1_OFFSET UNITYSDK_OFFSET(0x1FF27590)
#define JBKHNCLKEHI_NDGDDODNDMP_OFFSET UNITYSDK_OFFSET(0x1FF27420)
#define JBKHNCLKEHI_OLCHHDKKPLI_OFFSET UNITYSDK_OFFSET(0x1FF27C30)

inline static constexpr unsigned int JBKHNCLKEHI_TypeDefinitionIndex = 45362;

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
