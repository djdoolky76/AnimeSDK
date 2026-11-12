#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEAKFMBFLJK.h"
class MCDOIAPPMBF;
namespace System { class String; }

#define KIFLHJPIPOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBCB4DE0)
#define KIFLHJPIPOJ_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xBCB4DF0)
#define KIFLHJPIPOJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBCB5080)

inline static constexpr unsigned int KIFLHJPIPOJ_TypeDefinitionIndex = 85021;

	class KIFLHJPIPOJ : public ::JEAKFMBFLJK
	{
	public:
		::System::Void _ctor(::MCDOIAPPMBF* a1, ::MCDOIAPPMBF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MCDOIAPPMBF*, ::MCDOIAPPMBF*))((::PBYTE)hIl2Cpp + KIFLHJPIPOJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFLHJPIPOJ_KFGJEKJHIMB_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFLHJPIPOJ_TOSTRING_OFFSET))(this);
		}

	};
