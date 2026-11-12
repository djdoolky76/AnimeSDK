#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGridMember; }
namespace RPG::Client { class IGridFightTraitShowEffect; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0xDC47260)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETNEWADDEDEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC52D80)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETSHOWNEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC52C20)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET UNITYSDK_OFFSET(0xDC51E10)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKALLEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0xDC52DC0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET UNITYSDK_OFFSET(0xDC52AC0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET UNITYSDK_OFFSET(0xDC52440)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC525D0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__CLEAR_OFFSET UNITYSDK_OFFSET(0xDC524D0)
#define RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET UNITYSDK_OFFSET(0xDC52840)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRoleEffect_TypeDefinitionIndex = 66815;

	class GridFightRoleEffect : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGridMember* _Member; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _Effects; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _ShownEffects; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* _NewAddedEffects; // 0x28
		::System::Void _ctor(::RPG::Client::GridFightGridMember* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightGridMember*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_CTOR_OFFSET))(this, a1);
		}

		::System::Void InitEffect(::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_INITEFFECT_OFFSET))(this, a1);
		}

		::System::Void UpdateEffect(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_UPDATEEFFECT_OFFSET))(this, a1);
		}

		::System::Void MarkEffectShown(::RPG::Client::IGridFightTraitShowEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::IGridFightTraitShowEffect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKEFFECTSHOWN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetShownEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETSHOWNEFFECTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* GetNewAddedEffects()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_GETNEWADDEDEFFECTS_OFFSET))(this);
		}

		::System::Void MarkAllEffectShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT_MARKALLEFFECTSHOWN_OFFSET))(this);
		}

		::System::Void _Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__CLEAR_OFFSET))(this);
		}

		::System::Void _AddEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__ADDEFFECTS_OFFSET))(this, a1);
		}

		::System::Void _IntersectEffects(::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a1, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*, ::System::Collections::Generic::List_1<::RPG::Client::IGridFightTraitShowEffect*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEEFFECT__INTERSECTEFFECTS_OFFSET))(this, a1, a2);
		}

	};
}
