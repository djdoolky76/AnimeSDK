#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IJKOMCMLFGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB777F0)

	class IJKOMCMLFGH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::System::UInt32>* NOIGKFBFKHM; // 0x10
		::System::Int32 HJKDPNOLLPG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJKOMCMLFGH_CTOR_OFFSET))(this);
		}

	};
