#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define JIJMEIDFPKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBA1DB60)
#define JIJMEIDFPKJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBA1DB70)
#define JIJMEIDFPKJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBA1DDE0)

inline static constexpr unsigned int JIJMEIDFPKJ_TypeDefinitionIndex = 85022;

	class JIJMEIDFPKJ : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + JIJMEIDFPKJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJMEIDFPKJ_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJMEIDFPKJ_TOSTRING_OFFSET))(this);
		}

	};
