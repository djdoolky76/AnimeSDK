#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define IHBHHGDMKON_CTOR_OFFSET UNITYSDK_OFFSET(0x1640A4F0)
#define IHBHHGDMKON_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1640A500)
#define IHBHHGDMKON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1640A770)

inline static constexpr unsigned int IHBHHGDMKON_TypeDefinitionIndex = 82150;

	class IHBHHGDMKON : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + IHBHHGDMKON_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBHHGDMKON_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBHHGDMKON_TOSTRING_OFFSET))(this);
		}

	};
