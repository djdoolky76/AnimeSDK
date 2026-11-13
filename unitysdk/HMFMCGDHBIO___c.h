#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define HMFMCGDHBIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A34F920)
#define HMFMCGDHBIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1A34F960)
#define HMFMCGDHBIO___C___TRYASSIGNBASICEQUIP_B__10_1_OFFSET UNITYSDK_OFFSET(0x1A34F970)

inline static constexpr unsigned int HMFMCGDHBIO___c_TypeDefinitionIndex = 67122;

	class HMFMCGDHBIO___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>** StaticGet___9__10_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightEquipItemData*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D600);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1D608);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMFMCGDHBIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMFMCGDHBIO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean __TryAssignBasicEquip_b__10_1(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + HMFMCGDHBIO___C___TRYASSIGNBASICEQUIP_B__10_1_OFFSET))(this, a1);
		}

	};
