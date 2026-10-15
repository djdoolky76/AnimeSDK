#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ByteHash16.h"
#include "unitysdk/System/Object.h"
class CFAFCENLLLD;
class KGPCBBIOGLB;
namespace System { class String; }

#define APBALBFNHIN_OICJKAGKNBB_CTOR_OFFSET UNITYSDK_OFFSET(0x158CA6F0)

inline static constexpr unsigned int APBALBFNHIN_OICJKAGKNBB_TypeDefinitionIndex = 59545;

	class APBALBFNHIN_OICJKAGKNBB : public ::System::Object
	{
	public:
		::CFAFCENLLLD* JCHIMPGIMCE; // 0x10
		::System::String* MLACNPDMCGK; // 0x18
		::KGPCBBIOGLB* FJCAKOIDONG; // 0x20
		::RPG::Client::ByteHash16 HHPFNGFAJIA; // 0x28
		::System::Int64 EEBBDOKAKOM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBALBFNHIN_OICJKAGKNBB_CTOR_OFFSET))(this);
		}

	};
