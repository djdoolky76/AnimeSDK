#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLFFHLFDCDH;

#define OJINEGDOPCG_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E075790)
#define OJINEGDOPCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0757F0)

inline static constexpr unsigned int OJINEGDOPCG_TypeDefinitionIndex = 44289;

	class OJINEGDOPCG : public ::System::Object
	{
	public:
		::NLFFHLFDCDH* DOGJABNGIJK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINEGDOPCG_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJINEGDOPCG_CLEAR_OFFSET))(this);
		}

	};
