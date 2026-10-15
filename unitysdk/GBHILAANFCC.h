#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define GBHILAANFCC_CTOR_OFFSET UNITYSDK_OFFSET(0x159459D0)
#define GBHILAANFCC_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x159459E0)
#define GBHILAANFCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15945C50)

inline static constexpr unsigned int GBHILAANFCC_TypeDefinitionIndex = 82142;

	class GBHILAANFCC : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + GBHILAANFCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHILAANFCC_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHILAANFCC_TOSTRING_OFFSET))(this);
		}

	};
