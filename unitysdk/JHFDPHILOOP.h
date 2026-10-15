#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMDPEENJIHC;
namespace System { class String; }

#define JHFDPHILOOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB1AFE00)

	class JHFDPHILOOP : public ::System::Object
	{
	public:
		::PMDPEENJIHC* Base; // 0x10
		::Il2CppArray<::System::String*>* IDs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHFDPHILOOP_CTOR_OFFSET))(this);
		}

	};
