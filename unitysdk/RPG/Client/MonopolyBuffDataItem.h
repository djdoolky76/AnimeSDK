#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class MonopolyBuffConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E8800)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D7E8AE0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D7E8950)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D7E8910)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ISPERMANENT_OFFSET UNITYSDK_OFFSET(0x1D7E8D70)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_LEFTROUND_OFFSET UNITYSDK_OFFSET(0x1D7E8BC0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D7E8A00)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_PARAM_OFFSET UNITYSDK_OFFSET(0x1D7E8BE0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_RANK_OFFSET UNITYSDK_OFFSET(0x1D7E8CD0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1D7E8930)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1D7E88B0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_SETTURN_OFFSET UNITYSDK_OFFSET(0x1D7E8810)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_SETUNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1D7E8860)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_ID_OFFSET UNITYSDK_OFFSET(0x1D7E8920)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_LEFTROUND_OFFSET UNITYSDK_OFFSET(0x1D7E8BD0)
#define RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_UNIQUEKEY_OFFSET UNITYSDK_OFFSET(0x1D7E8940)

namespace RPG::Client
{
	inline static constexpr unsigned int MonopolyBuffDataItem_TypeDefinitionIndex = 68153;

	class MonopolyBuffDataItem : public ::System::Object
	{
	public:
		::System::UInt32 _UniqueKey_k__BackingField; // 0x10
		::System::UInt32 _LeftRound_k__BackingField; // 0x14
		::System::UInt32 _ID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_CTOR_OFFSET))(this, a1);
		}

		::System::Void SetTurn(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_SETTURN_OFFSET))(this, a1);
		}

		::System::Void SetUniqueKey(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_SETUNIQUEKEY_OFFSET))(this, a1);
		}

		::RPG::GameCore::MonopolyBuffConfigRow* get__Row()
		{
			return ((::RPG::GameCore::MonopolyBuffConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_UniqueKey()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_UNIQUEKEY_OFFSET))(this);
		}

		::System::Void set_UniqueKey(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_UNIQUEKEY_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_DESC_OFFSET))(this);
		}

		::System::UInt32 get_LeftRound()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_LEFTROUND_OFFSET))(this);
		}

		::System::Void set_LeftRound(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_SET_LEFTROUND_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_Param()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_PARAM_OFFSET))(this);
		}

		::System::UInt32 get_Rank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_RANK_OFFSET))(this);
		}

		::System::Boolean get_IsPermanent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOPOLYBUFFDATAITEM_GET_ISPERMANENT_OFFSET))(this);
		}

	};
}
