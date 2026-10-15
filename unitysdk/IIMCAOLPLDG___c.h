#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RtPropertyModifyData.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define IIMCAOLPLDG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x164406C0)
#define IIMCAOLPLDG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x16440700)
#define IIMCAOLPLDG___C__GETEQUIPMENTPROPERTYLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0x16440790)
#define IIMCAOLPLDG___C___TOPROPERTYMODIFYDATA_B__10_0_OFFSET UNITYSDK_OFFSET(0x16440710)

inline static constexpr unsigned int IIMCAOLPLDG___c_TypeDefinitionIndex = 73267;

	class IIMCAOLPLDG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60160);
		}

		static ::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>** StaticGet___9__11_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60168);
		}

		static ::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::RPG::GameCore::RtPropertyModifyData>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x60170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __ToPropertyModifyData_b__10_0(::RPG::GameCore::RtPropertyModifyData a1, ::RPG::GameCore::RtPropertyModifyData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C___TOPROPERTYMODIFYDATA_B__10_0_OFFSET))(this, a1, a2);
		}

		::System::Int32 _GetEquipmentPropertyList_b__11_0(::RPG::GameCore::RtPropertyModifyData a1, ::RPG::GameCore::RtPropertyModifyData a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::RtPropertyModifyData, ::RPG::GameCore::RtPropertyModifyData))((::PBYTE)hIl2Cpp + IIMCAOLPLDG___C__GETEQUIPMENTPROPERTYLIST_B__11_0_OFFSET))(this, a1, a2);
		}

	};
