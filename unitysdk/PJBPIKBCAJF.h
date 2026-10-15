#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define PJBPIKBCAJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC273DA0)
#define PJBPIKBCAJF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC273DB0)
#define PJBPIKBCAJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC274020)

inline static constexpr unsigned int PJBPIKBCAJF_TypeDefinitionIndex = 82144;

	class PJBPIKBCAJF : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + PJBPIKBCAJF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPIKBCAJF_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJBPIKBCAJF_TOSTRING_OFFSET))(this);
		}

	};
