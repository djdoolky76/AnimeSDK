#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightTrailblazeGoodsType.h"
#include "unitysdk/System/Object.h"
class AMNAMDLMADK;
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D3C40)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_COST_OFFSET UNITYSDK_OFFSET(0x1D3D8150)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1D3D8190)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODINDEX_OFFSET UNITYSDK_OFFSET(0x1D3D8140)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_GOODNAME_OFFSET UNITYSDK_OFFSET(0x1D3D81B0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3D8170)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_ID_OFFSET UNITYSDK_OFFSET(0x1D3D8120)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1D3D8130)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__EFFECTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D3D81F0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_GET__PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D3D81D0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_COST_OFFSET UNITYSDK_OFFSET(0x1D3D8160)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_DESC_OFFSET UNITYSDK_OFFSET(0x1D3D81A0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_GOODNAME_OFFSET UNITYSDK_OFFSET(0x1D3D81C0)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D3D8180)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__EFFECTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D3D8200)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEGOOD_SET__PARAMLIST_OFFSET UNITYSDK_OFFSET(0x1D3D81E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeGood_TypeDefinitionIndex = 67281;

	class GridFightTrailblazeGood : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::Il2CppArray<::System::UInt32>* __ParamList_k__BackingField; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* __EffectParamList_k__BackingField; // 0x20
		::System::String* _Desc_k__BackingField; // 0x28
		::RPG::Client::TextID _GoodName_k__BackingField; // 0x30
		::System::Int32 _GoodIndex_k__BackingField; // 0x40
		::RPG::GameCore::GridFightTrailblazeGoodsType _Type_k__BackingField; // 0x44
		::System::UInt32 _ID_k__BackingField; // 0x48
		::System::UInt32 _Cost_k__BackingField; // 0x4C
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
