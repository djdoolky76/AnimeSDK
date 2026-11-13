#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKPIOEDCHAH;
namespace RPG::Client { class NetPacket; }

#define HMJHKIEJNLJ_BCIOCMAADNE_OFFSET UNITYSDK_OFFSET(0x203359F0)
#define HMJHKIEJNLJ_BCOEGEPNGDH_OFFSET UNITYSDK_OFFSET(0x20335910)
#define HMJHKIEJNLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20322440)
#define HMJHKIEJNLJ_DOIBPHGKOJN_OFFSET UNITYSDK_OFFSET(0x20335A10)
#define HMJHKIEJNLJ_GBJNJBKJJLA_OFFSET UNITYSDK_OFFSET(0x20323430)
#define HMJHKIEJNLJ_GET_READPTR_OFFSET UNITYSDK_OFFSET(0x20335A20)
#define HMJHKIEJNLJ_GET_WRITEPTR_OFFSET UNITYSDK_OFFSET(0x20335A40)
#define HMJHKIEJNLJ_IEGEJOHPNMA_OFFSET UNITYSDK_OFFSET(0x203358E0)
#define HMJHKIEJNLJ_JLPFIKBFDPK_OFFSET UNITYSDK_OFFSET(0x20335900)
#define HMJHKIEJNLJ_JOMCNBEIHIB_OFFSET UNITYSDK_OFFSET(0x20323400)
#define HMJHKIEJNLJ_KKENKKKEDDK_OFFSET UNITYSDK_OFFSET(0x203233E0)
#define HMJHKIEJNLJ_SET_READPTR_OFFSET UNITYSDK_OFFSET(0x20335A30)
#define HMJHKIEJNLJ_SET_WRITEPTR_OFFSET UNITYSDK_OFFSET(0x20335A50)

inline static constexpr unsigned int HMJHKIEJNLJ_TypeDefinitionIndex = 45033;

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
