#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPMHFPMPBBD;

#define HGMMFJHJECA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CA5AB0)
#define HGMMFJHJECA_GIGJMNCIFMJ_OFFSET UNITYSDK_OFFSET(0x15CA5970)

inline static constexpr unsigned int HGMMFJHJECA_TypeDefinitionIndex = 82162;

	class HGMMFJHJECA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMMFJHJECA_CTOR_OFFSET))(this);
		}

		::System::Void GIGJMNCIFMJ(::KPMHFPMPBBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPMHFPMPBBD*))((::PBYTE)hIl2Cpp + HGMMFJHJECA_GIGJMNCIFMJ_OFFSET))(this, a1);
		}

	};
