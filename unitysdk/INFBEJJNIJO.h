#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GELIALJDFBL;
class HIOAMIPNLIN;
class KFELGAIGHAP;

#define INFBEJJNIJO_CTOR_OFFSET UNITYSDK_OFFSET(0xB81AA00)

inline static constexpr unsigned int INFBEJJNIJO_TypeDefinitionIndex = 57601;

	class INFBEJJNIJO : public ::System::Object
	{
	public:
		::KFELGAIGHAP* DNCFBGANPCD; // 0x10
		::GELIALJDFBL* FHAAHMEJMCI; // 0x18
		::HIOAMIPNLIN* EAEJGPLLGMI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INFBEJJNIJO_CTOR_OFFSET))(this);
		}

	};
