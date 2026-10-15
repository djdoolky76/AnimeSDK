#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MarbleEmojiReason.h"
#include "unitysdk/System/Object.h"
class FDPALAEIHPB;

#define KCMACPFNHCJ_BHOBHFGCKGP_OFFSET UNITYSDK_OFFSET(0x1CB82C60)
#define KCMACPFNHCJ_CFBEABFNANP_OFFSET UNITYSDK_OFFSET(0x1CB82E10)
#define KCMACPFNHCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB82C50)
#define KCMACPFNHCJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1CB83020)

inline static constexpr unsigned int KCMACPFNHCJ_TypeDefinitionIndex = 42181;

	class KCMACPFNHCJ : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::System::Single HABJBFDBCNK; // 0x18
		::System::Boolean NDAODMFBEJN; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Int32 ADLMGLDHNOJ; // 0x20
		::RPG::Client::LittleGame::MarbleEmojiReason HBOPBCMODIE; // 0x24
		::System::Single DLEJOLKKIMJ; // 0x28
		::System::Void _ctor(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + KCMACPFNHCJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void BHOBHFGCKGP(::RPG::Client::LittleGame::MarbleEmojiReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::MarbleEmojiReason))((::PBYTE)hIl2Cpp + KCMACPFNHCJ_BHOBHFGCKGP_OFFSET))(this, a1);
		}

		::System::Void CFBEABFNANP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCMACPFNHCJ_CFBEABFNANP_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCMACPFNHCJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

	};
