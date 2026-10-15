#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define MBBNJLBLEOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C924B20)

	class MBBNJLBLEOL : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBBNJLBLEOL_CTOR_OFFSET))(this);
		}

	};
