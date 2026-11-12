#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMAHFBGJJP;
class OEAKPLCANOI;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEAKPLCANOI___C__DISPLAYCLASS60_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC6B2BA0)
#define OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__1_OFFSET UNITYSDK_OFFSET(0xC6B4B30)
#define OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__2_OFFSET UNITYSDK_OFFSET(0xC6B4870)
#define OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__3_OFFSET UNITYSDK_OFFSET(0xC6B4900)
#define OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET UNITYSDK_OFFSET(0xC6B4930)

inline static constexpr unsigned int OEAKPLCANOI___c__DisplayClass60_0_TypeDefinitionIndex = 61694;

	class OEAKPLCANOI___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::FEMAHFBGJJP* entityLoadingContextData; // 0x10
		::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean>* __9__3; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hierarchyDepthCache; // 0x20
		::System::Action_1<::RPG::GameCore::LittleGameEntityConfig*>* __9__2; // 0x28
		::OEAKPLCANOI* __4__this; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* configByEntityID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS60_0_CTOR_OFFSET))(this);
		}

		::System::Void __BuildEntities_b__2(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __BuildEntities_b__3(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__3_OFFSET))(this, a1);
		}

		::System::Int32 __BuildEntities_g__GetHierarchyDepth_0(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET))(this, a1);
		}

		::System::Int32 __BuildEntities_b__1(::RPG::GameCore::LittleGameEntityConfig* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS60_0___BUILDENTITIES_B__1_OFFSET))(this, a1, a2);
		}

	};
