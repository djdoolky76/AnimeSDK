#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FFMGMJBLCDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5E7BE0)

inline static constexpr unsigned int FFMGMJBLCDH_TypeDefinitionIndex = 36195;

	class FFMGMJBLCDH : public ::System::Object
	{
	public:
		::System::Int32 DAJFDNAEDDB; // 0x10
		::System::Int32 KFBIODICKGC; // 0x14
		::System::Int32 AODJOHCACII; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMGMJBLCDH_CTOR_OFFSET))(this);
		}

	};
