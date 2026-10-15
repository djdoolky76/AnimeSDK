#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KKPNEOIKLJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C715AA0)

	class KKPNEOIKLJG : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* BMODPDGHLFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKPNEOIKLJG_CTOR_OFFSET))(this);
		}

	};
