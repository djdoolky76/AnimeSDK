#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;

#define GMLGDMKLIED_CTOR_OFFSET UNITYSDK_OFFSET(0x16C81FF0)
#define GMLGDMKLIED_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x16C81EB0)

inline static constexpr unsigned int GMLGDMKLIED_TypeDefinitionIndex = 85010;

	class GMLGDMKLIED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMLGDMKLIED_CTOR_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + GMLGDMKLIED_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
