#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define PJJKDGFODDL_CNDPPBCPHOJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCBBE0A0)

inline static constexpr unsigned int PJJKDGFODDL_CNDPPBCPHOJ_TypeDefinitionIndex = 77964;

	class PJJKDGFODDL_CNDPPBCPHOJ : public ::System::Object
	{
	public:
		::System::String* AOKHJKEIGEE; // 0x10
		::System::String* NKLKAPHGILE; // 0x18
		::RPG::Client::Pet::PetSummonStateType FCGFFAJIBKA; // 0x20
		::System::Boolean NGCEPPGMCJC; // 0x24
		::System::Boolean HPKLKJLBAKH; // 0x25
		::System::Boolean BBHDFDFPCNG; // 0x26
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_CNDPPBCPHOJ_CTOR_OFFSET))(this);
		}

	};
