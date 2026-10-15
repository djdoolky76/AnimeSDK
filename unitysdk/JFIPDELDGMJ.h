#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJAGGDJNOBD;
class DGEPFHILKPM;
class FFJMOFNDDEH;

#define JFIPDELDGMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1664F940)
#define JFIPDELDGMJ_MOCLKDOACOI_OFFSET UNITYSDK_OFFSET(0x1664F950)

inline static constexpr unsigned int JFIPDELDGMJ_TypeDefinitionIndex = 80156;

	class JFIPDELDGMJ : public ::System::Object
	{
	public:
		::BJAGGDJNOBD* CEFLLELKFOP; // 0x10
		::DGEPFHILKPM* OMLAHOMDEID; // 0x18
		::System::Void _ctor(::DGEPFHILKPM* a1, ::BJAGGDJNOBD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DGEPFHILKPM*, ::BJAGGDJNOBD*))((::PBYTE)hIl2Cpp + JFIPDELDGMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::FFJMOFNDDEH* MOCLKDOACOI(::System::UInt32 a1)
		{
			return ((::FFJMOFNDDEH*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFIPDELDGMJ_MOCLKDOACOI_OFFSET))(this, a1);
		}

	};
