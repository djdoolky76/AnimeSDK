#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKPIOEDCHAH;
namespace RPG::Client { class NetPacket; }

#define HMJHKIEJNLJ_BCIOCMAADNE_OFFSET UNITYSDK_OFFSET(0x1DD80560)
#define HMJHKIEJNLJ_BCOEGEPNGDH_OFFSET UNITYSDK_OFFSET(0x1DD80480)
#define HMJHKIEJNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD6CF90)
#define HMJHKIEJNLJ_DOIBPHGKOJN_OFFSET UNITYSDK_OFFSET(0x1DD80580)
#define HMJHKIEJNLJ_GBJNJBKJJLA_OFFSET UNITYSDK_OFFSET(0x1DD6DF50)
#define HMJHKIEJNLJ_GET_READPTR_OFFSET UNITYSDK_OFFSET(0x1DD80590)
#define HMJHKIEJNLJ_GET_WRITEPTR_OFFSET UNITYSDK_OFFSET(0x1DD805B0)
#define HMJHKIEJNLJ_IEGEJOHPNMA_OFFSET UNITYSDK_OFFSET(0x1DD80450)
#define HMJHKIEJNLJ_JLPFIKBFDPK_OFFSET UNITYSDK_OFFSET(0x1DD80470)
#define HMJHKIEJNLJ_JOMCNBEIHIB_OFFSET UNITYSDK_OFFSET(0x1DD6DF20)
#define HMJHKIEJNLJ_KKENKKKEDDK_OFFSET UNITYSDK_OFFSET(0x1DD6DF00)
#define HMJHKIEJNLJ_SET_READPTR_OFFSET UNITYSDK_OFFSET(0x1DD805A0)
#define HMJHKIEJNLJ_SET_WRITEPTR_OFFSET UNITYSDK_OFFSET(0x1DD805C0)

inline static constexpr unsigned int HMJHKIEJNLJ_TypeDefinitionIndex = 43958;

	class HMJHKIEJNLJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* BDBOGJHLEIG; // 0x10
		::System::Int32 _ReadPtr_k__BackingField; // 0x18
		::System::Int32 _WritePtr_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_CTOR_OFFSET))(this);
		}

		::System::Void JOMCNBEIHIB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_JOMCNBEIHIB_OFFSET))(this, a1);
		}

		::RPG::Client::NetPacket* GBJNJBKJJLA(::HKPIOEDCHAH* a1)
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID, ::HKPIOEDCHAH*))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_GBJNJBKJJLA_OFFSET))(this, a1);
		}

		::System::Void BCIOCMAADNE(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_BCIOCMAADNE_OFFSET))(this, a1);
		}

		::System::Void BCOEGEPNGDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_BCOEGEPNGDH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* DOIBPHGKOJN()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_DOIBPHGKOJN_OFFSET))(this);
		}

		::System::Int32 IEGEJOHPNMA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_IEGEJOHPNMA_OFFSET))(this);
		}

		::System::Int32 get_ReadPtr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_GET_READPTR_OFFSET))(this);
		}

		::System::Void set_ReadPtr(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_SET_READPTR_OFFSET))(this, a1);
		}

		::System::Int32 get_WritePtr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_GET_WRITEPTR_OFFSET))(this);
		}

		::System::Void set_WritePtr(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_SET_WRITEPTR_OFFSET))(this, a1);
		}

		::System::Int32 KKENKKKEDDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_KKENKKKEDDK_OFFSET))(this);
		}

		::System::Int32 JLPFIKBFDPK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMJHKIEJNLJ_JLPFIKBFDPK_OFFSET))(this);
		}

	};
