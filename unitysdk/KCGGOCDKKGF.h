#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FAJHHDCPLHD.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define KCGGOCDKKGF_CTOR_OFFSET UNITYSDK_OFFSET(0xB32F930)
#define KCGGOCDKKGF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB32F940)
#define KCGGOCDKKGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB32FA90)

inline static constexpr unsigned int KCGGOCDKKGF_TypeDefinitionIndex = 82145;

	class KCGGOCDKKGF : public ::FAJHHDCPLHD
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + KCGGOCDKKGF_CTOR_OFFSET))(this, a1);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGOCDKKGF_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGGOCDKKGF_TOSTRING_OFFSET))(this);
		}

	};
