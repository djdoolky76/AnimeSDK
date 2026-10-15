#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define DGPNFAOEGNK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA297A0)

	class DGPNFAOEGNK : public ::System::Object
	{
	public:
		::System::Object* OEOCCEBOOLJ; // 0x10
		::System::Int32 LCHBOHOPHHC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGPNFAOEGNK_CTOR_OFFSET))(this);
		}

	};
