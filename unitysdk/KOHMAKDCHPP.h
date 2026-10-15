#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLLEONBDOMJ.h"
#include "unitysdk/RPG/MVector3.h"
class AGCPAMNLCGN;
class BICCMEPJMDO;
class KOHMAKDCHPP;

#define KOHMAKDCHPP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB590850)
#define KOHMAKDCHPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB5909A0)

inline static constexpr unsigned int KOHMAKDCHPP_TypeDefinitionIndex = 77997;

	class KOHMAKDCHPP : public ::BLLEONBDOMJ
	{
	public:
		::RPG::MVector3 OOECFAKCPIL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHMAKDCHPP_CTOR_OFFSET))(this);
		}

		static ::KOHMAKDCHPP* BPLPBPMEODA(::AGCPAMNLCGN* a1, ::BICCMEPJMDO* a2, ::System::UInt64 a3)
		{
			return ((::KOHMAKDCHPP*(*)(::AGCPAMNLCGN*, ::BICCMEPJMDO*, ::System::UInt64))((::PBYTE)hIl2Cpp + KOHMAKDCHPP_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
