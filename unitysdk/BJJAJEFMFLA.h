#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/PackedConsistencyCheckData.h"
class BHMEPBAGOFF;
class BJJAJEFMFLA;
class OKIPFIENKIF;
class PKBDAKMLDMC;

#define BJJAJEFMFLA_BKJPKMNLJCP_OFFSET UNITYSDK_OFFSET(0xB7A1D40)
#define BJJAJEFMFLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB7A1AC0)
#define BJJAJEFMFLA_CTOR_2_OFFSET UNITYSDK_OFFSET(0xB7A1AD0)
#define BJJAJEFMFLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7A1AB0)
#define BJJAJEFMFLA_JGGMILPIIPF_OFFSET UNITYSDK_OFFSET(0xB7A1AE0)
#define BJJAJEFMFLA_KMDNEJDOCBC_1_OFFSET UNITYSDK_OFFSET(0xB7A22F0)
#define BJJAJEFMFLA_KMDNEJDOCBC_OFFSET UNITYSDK_OFFSET(0xB7A22A0)

inline static constexpr unsigned int BJJAJEFMFLA_TypeDefinitionIndex = 76563;

	class BJJAJEFMFLA : public ::System::Object
	{
	public:
		::OKIPFIENKIF* OOLADBFFBIF; // 0x10
		::OKIPFIENKIF* EKIMCJIFCPB; // 0x18
		::PKBDAKMLDMC* GIJPMCOACAN; // 0x20
		::BHMEPBAGOFF* IAOBHCOOMJP; // 0x28
		::PKBDAKMLDMC* ECBFGNCNIGH; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHMEPBAGOFF* a1, ::OKIPFIENKIF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*, ::OKIPFIENKIF*))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::BHMEPBAGOFF* a1, ::PKBDAKMLDMC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHMEPBAGOFF*, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_CTOR_2_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGame::PackedConsistencyCheckData JGGMILPIIPF()
		{
			return ((::RPG::Client::LittleGame::PackedConsistencyCheckData(*)(::PVOID))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_JGGMILPIIPF_OFFSET))(this);
		}

		static ::BJJAJEFMFLA* BKJPKMNLJCP(::RPG::Client::LittleGame::PackedConsistencyCheckData a1)
		{
			return ((::BJJAJEFMFLA*(*)(::RPG::Client::LittleGame::PackedConsistencyCheckData))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_BKJPKMNLJCP_OFFSET))(a1);
		}

		::System::Void KMDNEJDOCBC(::PKBDAKMLDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_KMDNEJDOCBC_OFFSET))(this, a1);
		}

		::System::Void KMDNEJDOCBC_1(::OKIPFIENKIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKIPFIENKIF*))((::PBYTE)hIl2Cpp + BJJAJEFMFLA_KMDNEJDOCBC_1_OFFSET))(this, a1);
		}

	};
