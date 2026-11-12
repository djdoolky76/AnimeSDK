#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LimaoNewsMessageSenderType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BNEJEFALJIP;
namespace RPG::Client { class MessageContentBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NJPHHMLOPGA_AGEBLEJGAHH_OFFSET UNITYSDK_OFFSET(0xC50DF00)
#define NJPHHMLOPGA_CTOR_OFFSET UNITYSDK_OFFSET(0xC50DC20)
#define NJPHHMLOPGA_DHJCBKPKGIP_OFFSET UNITYSDK_OFFSET(0xC50DF50)
#define NJPHHMLOPGA_GET_BLOCKS_OFFSET UNITYSDK_OFFSET(0xC50DDF0)
#define NJPHHMLOPGA_GET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xC50DDD0)
#define NJPHHMLOPGA_GET_ID_OFFSET UNITYSDK_OFFSET(0xC50DDB0)
#define NJPHHMLOPGA_GET_ISLASTMESSAGE_OFFSET UNITYSDK_OFFSET(0xC50DE00)
#define NJPHHMLOPGA_GET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0xC50DE10)
#define NJPHHMLOPGA_GET_SENDER_OFFSET UNITYSDK_OFFSET(0xC50DE30)
#define NJPHHMLOPGA_GPOHCLJHFGN_OFFSET UNITYSDK_OFFSET(0xC50E1B0)
#define NJPHHMLOPGA_HBGLPEAPGEH_OFFSET UNITYSDK_OFFSET(0xC50E0B0)
#define NJPHHMLOPGA_JDAKKAMKLKF_OFFSET UNITYSDK_OFFSET(0xC50DEB0)
#define NJPHHMLOPGA_JFBHDGADEBO_OFFSET UNITYSDK_OFFSET(0xC50DFA0)
#define NJPHHMLOPGA_KMKMJNONILF_OFFSET UNITYSDK_OFFSET(0xC50DD50)
#define NJPHHMLOPGA_NEANMNPFIKF_OFFSET UNITYSDK_OFFSET(0xC50DE50)
#define NJPHHMLOPGA_PPIPELCBBFI_OFFSET UNITYSDK_OFFSET(0xC50E310)
#define NJPHHMLOPGA_SET_CONTENTBLOCK_OFFSET UNITYSDK_OFFSET(0xC50DDE0)
#define NJPHHMLOPGA_SET_ID_OFFSET UNITYSDK_OFFSET(0xC50DDC0)
#define NJPHHMLOPGA_SET_NEXTITEMIDS_OFFSET UNITYSDK_OFFSET(0xC50DE20)
#define NJPHHMLOPGA_SET_SENDER_OFFSET UNITYSDK_OFFSET(0xC50DE40)

inline static constexpr unsigned int NJPHHMLOPGA_TypeDefinitionIndex = 83066;

	class NJPHHMLOPGA : public ::System::Object
	{
	public:
		::RPG::Client::MessageContentBlock* _ContentBlock_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* _NextItemIDs_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* _Blocks_k__BackingField; // 0x20
		::System::Boolean _IsLastMessage_k__BackingField; // 0x28
		::System::Byte _padding0[0x3];
		::RPG::GameCore::LimaoNewsMessageSenderType _Sender_k__BackingField; // 0x2C
		::System::UInt32 _ID_k__BackingField; // 0x30
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::Client::MessageContentBlock* get_ContentBlock()
		{
			return ((::RPG::Client::MessageContentBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_CONTENTBLOCK_OFFSET))(this);
		}

		::System::Void set_ContentBlock(::RPG::Client::MessageContentBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageContentBlock*))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_SET_CONTENTBLOCK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>* get_Blocks()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MessageContentBlock*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_BLOCKS_OFFSET))(this);
		}

		::System::Boolean get_IsLastMessage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_ISLASTMESSAGE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_NextItemIDs()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_NEXTITEMIDS_OFFSET))(this);
		}

		::System::Void set_NextItemIDs(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_SET_NEXTITEMIDS_OFFSET))(this, a1);
		}

		::RPG::GameCore::LimaoNewsMessageSenderType get_Sender()
		{
			return ((::RPG::GameCore::LimaoNewsMessageSenderType(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GET_SENDER_OFFSET))(this);
		}

		::System::Void set_Sender(::RPG::GameCore::LimaoNewsMessageSenderType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LimaoNewsMessageSenderType))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_SET_SENDER_OFFSET))(this, a1);
		}

		::System::Boolean NEANMNPFIKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_NEANMNPFIKF_OFFSET))(this);
		}

		::System::Boolean JDAKKAMKLKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_JDAKKAMKLKF_OFFSET))(this);
		}

		::System::Boolean AGEBLEJGAHH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_AGEBLEJGAHH_OFFSET))(this);
		}

		::System::Boolean DHJCBKPKGIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_DHJCBKPKGIP_OFFSET))(this);
		}

		::System::Boolean JFBHDGADEBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_JFBHDGADEBO_OFFSET))(this);
		}

		::System::UInt32 HBGLPEAPGEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_HBGLPEAPGEH_OFFSET))(this);
		}

		::RPG::Client::TextID GPOHCLJHFGN()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_GPOHCLJHFGN_OFFSET))(this);
		}

		::RPG::Client::TextID PPIPELCBBFI()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_PPIPELCBBFI_OFFSET))(this);
		}

		::BNEJEFALJIP* KMKMJNONILF()
		{
			return ((::BNEJEFALJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPHHMLOPGA_KMKMJNONILF_OFFSET))(this);
		}

	};
