#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFBFPDMBMLC;
class NOOHPODHIAA;

#define OGNBEOIDIJK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C95EF50)
#define OGNBEOIDIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C95EFF0)

inline static constexpr unsigned int OGNBEOIDIJK_TypeDefinitionIndex = 43543;

	class OGNBEOIDIJK : public ::System::Object
	{
	public:
		::NOOHPODHIAA* NNANJMDMAOC; // 0x10
		::LFBFPDMBMLC* FKIBGPJNCIJ; // 0x18
		::System::UInt32 CEIFACBCNKE; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNBEOIDIJK_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGNBEOIDIJK_CLEAR_OFFSET))(this);
		}

	};
