#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBDOGMDHDKO;
class DGEPFHILKPM;
class EGBIFFCBKEH;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define NENKIHNDBKD_BJPKMLOAPKI_OFFSET UNITYSDK_OFFSET(0xBB6DA40)
#define NENKIHNDBKD_CTOR_OFFSET UNITYSDK_OFFSET(0xBB6D970)
#define NENKIHNDBKD_FBCHIEODBOG_OFFSET UNITYSDK_OFFSET(0xBB6D980)

inline static constexpr unsigned int NENKIHNDBKD_TypeDefinitionIndex = 80160;

	class NENKIHNDBKD : public ::System::Object
	{
	public:
		::DGEPFHILKPM* OMLAHOMDEID; // 0x10
		::DBDOGMDHDKO* CEFLLELKFOP; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::DBDOGMDHDKO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::DBDOGMDHDKO*))((::PBYTE)hIl2Cpp + NENKIHNDBKD_CTOR_OFFSET))(this, a1, a2);
		}

		::EGBIFFCBKEH* FBCHIEODBOG(::System::UInt32 a1)
		{
			return ((::EGBIFFCBKEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NENKIHNDBKD_FBCHIEODBOG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::EGBIFFCBKEH*>* BJPKMLOAPKI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::EGBIFFCBKEH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NENKIHNDBKD_BJPKMLOAPKI_OFFSET))(this);
		}

	};
