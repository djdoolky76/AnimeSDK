#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEMAHFBGJJP;
class OEAKPLCANOI;
namespace RPG::GameCore { class LittleGameEntityConfig; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OEAKPLCANOI___C__DISPLAYCLASS55_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBDFC8A0)
#define OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__1_OFFSET UNITYSDK_OFFSET(0xBDFE820)
#define OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__2_OFFSET UNITYSDK_OFFSET(0xBDFE560)
#define OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__3_OFFSET UNITYSDK_OFFSET(0xBDFE5F0)
#define OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET UNITYSDK_OFFSET(0xBDFE620)

inline static constexpr unsigned int OEAKPLCANOI___c__DisplayClass55_0_TypeDefinitionIndex = 60404;

	class OEAKPLCANOI___c__DisplayClass55_0 : public ::System::Object
	{
	public:
		::OEAKPLCANOI* __4__this; // 0x10
		::FEMAHFBGJJP* entityLoadingContextData; // 0x18
		::System::Action* __9__2; // 0x20
		::System::Func_2<::RPG::GameCore::LittleGameEntityConfig*, ::System::Boolean>* __9__3; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::LittleGameEntityConfig*>* configByEntityID; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* hierarchyDepthCache; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS55_0_CTOR_OFFSET))(this);
		}

		::System::Void __BuildEntities_b__2(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__2_OFFSET))(this, a1);
		}

		::System::Boolean __BuildEntities_b__3(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__3_OFFSET))(this, a1);
		}

		::System::Int32 __BuildEntities_g__GetHierarchyDepth_0(::RPG::GameCore::LittleGameEntityConfig* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_G__GETHIERARCHYDEPTH_0_OFFSET))(this, a1);
		}

		::System::Int32 __BuildEntities_b__1(::RPG::GameCore::LittleGameEntityConfig* a1, ::RPG::GameCore::LittleGameEntityConfig* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::LittleGameEntityConfig*, ::RPG::GameCore::LittleGameEntityConfig*))((::PBYTE)hIl2Cpp + OEAKPLCANOI___C__DISPLAYCLASS55_0___BUILDENTITIES_B__1_OFFSET))(this, a1, a2);
		}

	};
