#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PSCUSTOMINVITATIONDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA66C20)

namespace RPG::Client
{
	inline static constexpr unsigned int PSCustomInvitationData_TypeDefinitionIndex = 65767;

	class PSCustomInvitationData : public ::System::Object
	{
	public:
		::FJPMJPEKLJL Type; // 0x10
		::System::Byte _padding0[0x4];
		::System::UInt64 RoomID; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* GameParamList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PSCUSTOMINVITATIONDATA_CTOR_OFFSET))(this);
		}

	};
}
