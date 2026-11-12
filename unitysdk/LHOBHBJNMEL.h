#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLHAEJGBGCC;
class GBDIKBFIMIM;

#define LHOBHBJNMEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBF57AF0)
#define LHOBHBJNMEL_OJDAKJHMKGB_OFFSET UNITYSDK_OFFSET(0xBF57B00)

inline static constexpr unsigned int LHOBHBJNMEL_TypeDefinitionIndex = 83843;

	class LHOBHBJNMEL : public ::System::Object
	{
	public:
		::FLHAEJGBGCC* OCDLGJEGHJF; // 0x10
		::System::Void _ctor(::FLHAEJGBGCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLHAEJGBGCC*))((::PBYTE)hIl2Cpp + LHOBHBJNMEL_CTOR_OFFSET))(this, a1);
		}

		::GBDIKBFIMIM* OJDAKJHMKGB(::System::UInt32 a1)
		{
			return ((::GBDIKBFIMIM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHOBHBJNMEL_OJDAKJHMKGB_OFFSET))(this, a1);
		}

	};
