#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBMMPJAJFBH;

#define ANDOOKMFKKH_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DA1FA90)
#define ANDOOKMFKKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1FAF0)

inline static constexpr unsigned int ANDOOKMFKKH_TypeDefinitionIndex = 44246;

	class ANDOOKMFKKH : public ::System::Object
	{
	public:
		::LBMMPJAJFBH* CNLHCKELLBE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDOOKMFKKH_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANDOOKMFKKH_CLEAR_OFFSET))(this);
		}

	};
