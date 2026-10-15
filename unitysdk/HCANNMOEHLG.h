#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define HCANNMOEHLG_CTOR_OFFSET UNITYSDK_OFFSET(0x15C097D0)
#define HCANNMOEHLG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x15C097E0)
#define HCANNMOEHLG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15C09A70)

inline static constexpr unsigned int HCANNMOEHLG_TypeDefinitionIndex = 82146;

	class HCANNMOEHLG : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + HCANNMOEHLG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + HCANNMOEHLG_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCANNMOEHLG_TOSTRING_OFFSET))(this);
		}

	};
