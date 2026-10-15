#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class UIDragSource; }

#define JIOKCADHOMF_CTOR_OFFSET UNITYSDK_OFFSET(0xB1F9CB0)
#define JIOKCADHOMF_GET_SOURCE_OFFSET UNITYSDK_OFFSET(0xB1F9CA0)

inline static constexpr unsigned int JIOKCADHOMF_TypeDefinitionIndex = 73062;

	class JIOKCADHOMF : public ::System::Object
	{
	public:
		::RPG::Client::UIDragSource* _Source_k__BackingField; // 0x10
		::System::Void _ctor(::RPG::Client::UIDragSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDragSource*))((::PBYTE)hIl2Cpp + JIOKCADHOMF_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::UIDragSource* get_Source()
		{
			return ((::RPG::Client::UIDragSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOKCADHOMF_GET_SOURCE_OFFSET))(this);
		}

	};
