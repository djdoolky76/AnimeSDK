#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Type; }

#define GCCKJANNPAA_KGBKNGDFABK_OFFSET UNITYSDK_OFFSET(0x1595AD00)

inline static constexpr unsigned int GCCKJANNPAA_TypeDefinitionIndex = 60087;

	class GCCKJANNPAA : public ::System::Object
	{
	public:
		static ::System::Boolean KGBKNGDFABK(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + GCCKJANNPAA_KGBKNGDFABK_OFFSET))(a1);
		}

	};
