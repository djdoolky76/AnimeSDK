#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/PackedConsistencyCheckData.h"
class BHMEPBAGOFF;
class BJJAJEFMFLA;
class OKIPFIENKIF;
class PKBDAKMLDMC;

#define BJJAJEFMFLA_BKJPKMNLJCP_OFFSET UNITYSDK_OFFSET(0xC0F1DE0)
#define BJJAJEFMFLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xC0F1B60)
#define BJJAJEFMFLA_CTOR_2_OFFSET UNITYSDK_OFFSET(0xC0F1B70)
#define BJJAJEFMFLA_CTOR_OFFSET UNITYSDK_OFFSET(0xC0F1B50)
#define BJJAJEFMFLA_JGGMILPIIPF_OFFSET UNITYSDK_OFFSET(0xC0F1B80)
#define BJJAJEFMFLA_KMDNEJDOCBC_1_OFFSET UNITYSDK_OFFSET(0xC0F2390)
#define BJJAJEFMFLA_KMDNEJDOCBC_OFFSET UNITYSDK_OFFSET(0xC0F2340)

inline static constexpr unsigned int BJJAJEFMFLA_TypeDefinitionIndex = 78894;

	class BJJAJEFMFLA : public ::System::Object
	{
	public:
		::PKBDAKMLDMC* ECBFGNCNIGH; // 0x10
		::OKIPFIENKIF* OOLADBFFBIF; // 0x18
		::PKBDAKMLDMC* GIJPMCOACAN; // 0x20
		::BHMEPBAGOFF* IAOBHCOOMJP; // 0x28
		::OKIPFIENKIF* EKIMCJIFCPB; // 0x30
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
