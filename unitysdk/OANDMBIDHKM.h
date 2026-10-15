#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCMJBMIKIFO;
class KKGMHJNMOID;
namespace System { class String; }

#define OANDMBIDHKM_CTOR_OFFSET UNITYSDK_OFFSET(0xBD27FC0)
#define OANDMBIDHKM_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0xBD27A20)

inline static constexpr unsigned int OANDMBIDHKM_TypeDefinitionIndex = 79702;

	class OANDMBIDHKM : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANDMBIDHKM_CTOR_OFFSET))(this);
		}

		::System::String* FPKLDCGAJGP(::KKGMHJNMOID* a1, ::JCMJBMIKIFO* a2)
		{
			return ((::System::String*(*)(::PVOID, ::KKGMHJNMOID*, ::JCMJBMIKIFO*))((::PBYTE)hIl2Cpp + OANDMBIDHKM_FPKLDCGAJGP_OFFSET))(this, a1, a2);
		}

	};
