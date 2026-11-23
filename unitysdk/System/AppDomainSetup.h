#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_APPDOMAINSETUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace System
{
	inline static constexpr unsigned int AppDomainSetup_TypeDefinitionIndex = 11067;

	class AppDomainSetup : public ::System::Object
	{
	public:
		::System::String* FFB16286B93B3F12; // 0x10
		::System::String* B53CF650CF351119; // 0x18
		::System::String* AD512AF7EEE04902; // 0x20
		::System::String* AEFF76F584C53D0E; // 0x28
		::System::String* FB2D7F6751F18A23; // 0x30
		::System::String* AA5721F871D5E49C; // 0x38
		::System::String* EF9858BFB487BCB8; // 0x40
		::System::String* F0DB80E612C196BD; // 0x48
		::System::String* B0C9E2D890BD181E; // 0x50
		::System::String* FCEDB6C859B7628A; // 0x58
		::System::Boolean FDF8F0D7AAEBFA1C; // 0x60
		::System::Boolean FC825C02FB8764C2; // 0x61
		::System::Byte _padding0[0x2];
		::System::Int32 A7213A4C541B0BA4; // 0x64
		::System::Boolean FDC264F2CE7E00E8; // 0x68
		::System::Boolean A08057A7822562BD; // 0x69
		::System::Byte _padding1[0x6];
		::System::Object* EB2C39B8027A9014; // 0x70
		::System::Object* B1A730752ABE69CE; // 0x78
		::System::Object* A0C17D9ABACBAA81; // 0x80
		::Il2CppArray<::System::String*>* B0002CCF95417515; // 0x88
		::System::Boolean AE3B96A98CC382EA; // 0x90
		::System::Byte _padding2[0x7];
		::Il2CppArray<::System::Byte>* BF9369979A8DEEC5; // 0x98
		::Il2CppArray<::System::Byte>* A98B286065F07752; // 0xA0
		::System::String* EA4FD945A03E99A8; // 0xA8
		::System::String* EDC6E5E638F9AC96; // 0xB0
		::Il2CppArray<::System::String*>* B87ED25EC3BE702A; // 0xB8
		::System::String* E68C395EE725DD34; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_APPDOMAINSETUP__CTOR_OFFSET))(this);
		}
	};
}
