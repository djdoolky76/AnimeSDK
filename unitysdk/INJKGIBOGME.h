#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GOBNOHBLEHH;

#define INJKGIBOGME_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CB78910)
#define INJKGIBOGME_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB789A0)

	class INJKGIBOGME : public ::System::Object
	{
	public:
		::GOBNOHBLEHH* NLIFDJHPHLP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJKGIBOGME_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INJKGIBOGME_CLEAR_OFFSET))(this);
		}

	};
