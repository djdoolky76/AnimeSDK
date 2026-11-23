#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class E519989062D53DE5;
namespace System { class Delegate; }
namespace System { class String; }

#define AC8D5821ADFC42CE_B1F7D9B25F734614_A3C785ABF8174371_OFFSET UNITYSDK_OFFSET(0x3B67AA0)
#define AC8D5821ADFC42CE_B1F7D9B25F734614__CTOR_OFFSET UNITYSDK_OFFSET(0x3B67D00)

inline static constexpr unsigned int AC8D5821ADFC42CE_B1F7D9B25F734614_TypeDefinitionIndex = 10317;

class AC8D5821ADFC42CE_B1F7D9B25F734614 : public ::System::Object
{
public:
	::System::String* A288CB28FC2A6DA3; // 0x10
	::System::String* B476B7AD17F6C7E5; // 0x18
	::System::Object* F249A74E7BFBE1A7; // 0x20
	::System::String* ED33501D7D56B9E4; // 0x28
	::System::String* FB67ECC38B28DD24; // 0x30
	::System::String* FC1D29B360A1527E; // 0x38
	::AC8D5821ADFC42CE_B1F7D9B25F734614* E473239D1D20CB6D; // 0x40

	::System::Void _ctor(::System::Delegate* E9A728D9552EE9D0, ::System::String* B88C13616B5A44C7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Delegate*, ::System::String*))((::PBYTE)hIl2Cpp + AC8D5821ADFC42CE_B1F7D9B25F734614__CTOR_OFFSET))(this, E9A728D9552EE9D0, B88C13616B5A44C7);
	}

	::System::Delegate* A3C785ABF8174371(::E519989062D53DE5* B29880F033C1F232, ::System::Int32 B48C66E5FB2449C6)
	{
		return ((::System::Delegate*(*)(::PVOID, ::E519989062D53DE5*, ::System::Int32))((::PBYTE)hIl2Cpp + AC8D5821ADFC42CE_B1F7D9B25F734614_A3C785ABF8174371_OFFSET))(this, B29880F033C1F232, B48C66E5FB2449C6);
	}
};
