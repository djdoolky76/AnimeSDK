#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define DCIALJDPCMF_CTOR_OFFSET UNITYSDK_OFFSET(0xE246E20)

	class DCIALJDPCMF : public ::System::Object
	{
	public:
		::System::String* KBEPAIAFLHL; // 0x10
		::System::Boolean BHMGBPJCFBK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCIALJDPCMF_CTOR_OFFSET))(this);
		}

	};
