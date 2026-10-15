#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OCMIHMKBAAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C4CC460)

	class OCMIHMKBAAA : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* HEGDGPNFBHJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIHMKBAAA_CTOR_OFFSET))(this);
		}

	};
