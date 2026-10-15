#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEPFHILKPM;
class HOODOGLEIOI;
class JLNEKELMDNJ;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define ENJJDBBEOHD_CTOR_OFFSET UNITYSDK_OFFSET(0x155A5270)
#define ENJJDBBEOHD_DBPMJEEPDKI_OFFSET UNITYSDK_OFFSET(0x155A5280)
#define ENJJDBBEOHD_LODPENDCLPL_OFFSET UNITYSDK_OFFSET(0x155A5330)

inline static constexpr unsigned int ENJJDBBEOHD_TypeDefinitionIndex = 80135;

	class ENJJDBBEOHD : public ::System::Object
	{
	public:
		::HOODOGLEIOI* CEFLLELKFOP; // 0x10
		::DGEPFHILKPM* OMLAHOMDEID; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::HOODOGLEIOI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::HOODOGLEIOI*))((::PBYTE)hIl2Cpp + ENJJDBBEOHD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* DBPMJEEPDKI()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENJJDBBEOHD_DBPMJEEPDKI_OFFSET))(this);
		}

		::JLNEKELMDNJ* LODPENDCLPL(::System::UInt32 a1)
		{
			return ((::JLNEKELMDNJ*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ENJJDBBEOHD_LODPENDCLPL_OFFSET))(this, a1);
		}

	};
