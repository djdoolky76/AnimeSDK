#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class PluralityHPBarValue; }

#define RPG_CLIENT_PLURALITYHPBARVALUE_CREATE_OFFSET UNITYSDK_OFFSET(0xE69BB20)
#define RPG_CLIENT_PLURALITYHPBARVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0xE69BB60)
#define RPG_CLIENT_PLURALITYHPBARVALUE_GETRAWPLURALITYNUM_OFFSET UNITYSDK_OFFSET(0xE69BC80)
#define RPG_CLIENT_PLURALITYHPBARVALUE_GET_BARVALUE_OFFSET UNITYSDK_OFFSET(0xE69BB00)
#define RPG_CLIENT_PLURALITYHPBARVALUE_GET_PLURALITYNUM_OFFSET UNITYSDK_OFFSET(0xE69BAE0)
#define RPG_CLIENT_PLURALITYHPBARVALUE_REFRESH_OFFSET UNITYSDK_OFFSET(0xE69BB70)
#define RPG_CLIENT_PLURALITYHPBARVALUE_SET_BARVALUE_OFFSET UNITYSDK_OFFSET(0xE69BB10)
#define RPG_CLIENT_PLURALITYHPBARVALUE_SET_PLURALITYNUM_OFFSET UNITYSDK_OFFSET(0xE69BAF0)

namespace RPG::Client
{
	inline static constexpr unsigned int PluralityHPBarValue_TypeDefinitionIndex = 73669;

	class PluralityHPBarValue : public ::System::Object
	{
	public:
		::System::Single _BarValue_k__BackingField; // 0x10
		::System::Int32 _PluralityNum_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_CTOR_OFFSET))(this);
		}

		::System::Int32 get_PluralityNum()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_GET_PLURALITYNUM_OFFSET))(this);
		}

		::System::Void set_PluralityNum(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_SET_PLURALITYNUM_OFFSET))(this, a1);
		}

		::System::Single get_BarValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_GET_BARVALUE_OFFSET))(this);
		}

		::System::Void set_BarValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_SET_BARVALUE_OFFSET))(this, a1);
		}

		static ::RPG::Client::PluralityHPBarValue* Create()
		{
			return ((::RPG::Client::PluralityHPBarValue*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_CREATE_OFFSET))();
		}

		::System::Void Refresh(::System::Single a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_REFRESH_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Int32 GetRawPluralityNum(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLURALITYHPBARVALUE_GETRAWPLURALITYNUM_OFFSET))(a1, a2);
		}

	};
}
