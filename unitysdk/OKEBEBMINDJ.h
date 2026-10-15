#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }

#define OKEBEBMINDJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBECF430)

inline static constexpr unsigned int OKEBEBMINDJ_TypeDefinitionIndex = 61069;

	class OKEBEBMINDJ : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise* IEKBLFPHLNJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEBEBMINDJ_CTOR_OFFSET))(this);
		}

	};
