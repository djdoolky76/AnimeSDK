#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHCHDKJLNBJ;

#define EMKFOEHMACK_CTOR_OFFSET UNITYSDK_OFFSET(0x15546270)
#define EMKFOEHMACK_LKBLHNMPCJC_OFFSET UNITYSDK_OFFSET(0x155462D0)
#define EMKFOEHMACK_NOGPEFOIAON_OFFSET UNITYSDK_OFFSET(0x15546280)

inline static constexpr unsigned int EMKFOEHMACK_TypeDefinitionIndex = 81501;

	class EMKFOEHMACK : public ::System::Object
	{
	public:
		::NHCHDKJLNBJ* LBNAGLIGKIO; // 0x10
		::System::Void _ctor(::NHCHDKJLNBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHCHDKJLNBJ*))((::PBYTE)hIl2Cpp + EMKFOEHMACK_CTOR_OFFSET))(this, a1);
		}

		::System::Void NOGPEFOIAON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFOEHMACK_NOGPEFOIAON_OFFSET))(this);
		}

		::System::Void LKBLHNMPCJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKFOEHMACK_LKBLHNMPCJC_OFFSET))(this);
		}

	};
