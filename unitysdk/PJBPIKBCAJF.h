#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define PJBPIKBCAJF_CTOR_OFFSET UNITYSDK_OFFSET(0xC27B760)
#define PJBPIKBCAJF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xC27B770)
#define PJBPIKBCAJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xC27B9E0)

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
