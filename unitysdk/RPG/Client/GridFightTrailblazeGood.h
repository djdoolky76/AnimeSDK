#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailblazeGoodsType.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0xDCB6B50)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0xDCBB040)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDCBB080)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0xDCBB030)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODNAME_OFFSET UNITYSDK_OFFSET(0xDCBB0A0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDCBB060)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ID_OFFSET UNITYSDK_OFFSET(0xDCBB010)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xDCBB020)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__EFFECTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCBB0E0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCBB0C0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_COST_OFFSET UNITYSDK_OFFSET(0xDCBB050)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_DESC_OFFSET UNITYSDK_OFFSET(0xDCBB090)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_GOODNAME_OFFSET UNITYSDK_OFFSET(0xDCBB0B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xDCBB070)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__EFFECTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCBB0F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__PARAMLIST_OFFSET UNITYSDK_OFFSET(0xDCBB0D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeGood_TypeDefinitionIndex = 67281;

	class GridFightTrailblazeGood : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* __ParamList_k__BackingField; // 0x10
		::System::String* _Desc_k__BackingField; // 0x18
		::System::String* _IconPath_k__BackingField; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* __EffectParamList_k__BackingField; // 0x28
		::RPG::GameCore::GridFightTrailblazeGoodsType _Type_k__BackingField; // 0x30
		::System::Int32 _GoodIndex_k__BackingField; // 0x34
		::System::UInt32 _Cost_k__BackingField; // 0x38
		::System::UInt32 _ID_k__BackingField; // 0x3C
		::RPG::Client::TextID _GoodName_k__BackingField; // 0x40
		::System::Void _ctor(::AMNAMDLMADK* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::AMNAMDLMADK*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTrailblazeGoodsType get_Type()
		{
			return ((::RPG::GameCore::GridFightTrailblazeGoodsType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_TYPE_OFFSET))(this);
		}

		::System::Int32 get_GoodIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODINDEX_OFFSET))(this);
		}

		::System::UInt32 get_Cost()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_COST_OFFSET))(this);
		}

		::System::Void set_Cost(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_COST_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_DESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_GoodName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODNAME_OFFSET))(this);
		}

		::System::Void set_GoodName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_GOODNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get__ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__PARAMLIST_OFFSET))(this);
		}

		::System::Void set__ParamList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__PARAMLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::FixPoint>* get__EffectParamList()
		{
			return ((::Il2CppArray<::RPG::GameCore::FixPoint>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__EFFECTPARAMLIST_OFFSET))(this);
		}

		::System::Void set__EffectParamList(::Il2CppArray<::RPG::GameCore::FixPoint>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__EFFECTPARAMLIST_OFFSET))(this, a1);
		}

	};
}
