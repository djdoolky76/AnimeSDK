#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define PJJKDGFODDL_CNDPPBCPHOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC295D80)

	class PJJKDGFODDL_CNDPPBCPHOJ : public ::System::Object
	{
	public:
		::System::String* NKLKAPHGILE; // 0x10
		::System::String* AOKHJKEIGEE; // 0x18
		::System::Boolean NGCEPPGMCJC; // 0x20
		::System::Boolean HPKLKJLBAKH; // 0x21
		::System::Boolean BBHDFDFPCNG; // 0x22
		::System::Byte _padding0[0x1];
		::RPG::Client::Pet::PetSummonStateType FCGFFAJIBKA; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_CNDPPBCPHOJ_CTOR_OFFSET))(this);
		}

	};
