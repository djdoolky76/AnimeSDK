#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LCOMIBOIAPN;
namespace RPG::GameCore { class ModifierBehaviorVisual; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LCOMIBOIAPN_BHLEPGPACGM_OFFSET UNITYSDK_OFFSET(0x1AC729B0)
#define LCOMIBOIAPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1AC73190)
#define LCOMIBOIAPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1AC730D0)
#define LCOMIBOIAPN_KOAGINAEBGO_OFFSET UNITYSDK_OFFSET(0x1AC72F50)
#define LCOMIBOIAPN_NFDCJEIHOJH_OFFSET UNITYSDK_OFFSET(0x1AC73010)
#define LCOMIBOIAPN_PEJCNLBKIGN_OFFSET UNITYSDK_OFFSET(0x1AC72AE0)

inline static constexpr unsigned int LCOMIBOIAPN_TypeDefinitionIndex = 55593;

	class LCOMIBOIAPN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* EFLDGELNJJL; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::ModifierBehaviorVisual*>* MLMOKAFJPOF; // 0x18
		static ::LCOMIBOIAPN** StaticGet_FFLJMCNLHFH()
		{
			return (::LCOMIBOIAPN**)UnitySDK::FromName("", "LCOMIBOIAPN")->GetStaticField(0xCB90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOMIBOIAPN_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCOMIBOIAPN_CCTOR_OFFSET))();
		}

		::System::Void BHLEPGPACGM(::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::ModifierBehaviorVisual*>*))((::PBYTE)hIl2Cpp + LCOMIBOIAPN_BHLEPGPACGM_OFFSET))(this, a1);
		}

		::System::Void KOAGINAEBGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOMIBOIAPN_KOAGINAEBGO_OFFSET))(this);
		}

		::RPG::GameCore::ModifierBehaviorVisual* NFDCJEIHOJH(::System::Int32 a1)
		{
			return ((::RPG::GameCore::ModifierBehaviorVisual*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCOMIBOIAPN_NFDCJEIHOJH_OFFSET))(this, a1);
		}

		::System::Void PEJCNLBKIGN(::RPG::GameCore::ModifierBehaviorVisual* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ModifierBehaviorVisual*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LCOMIBOIAPN_PEJCNLBKIGN_OFFSET))(this, a1, a2, a3);
		}

	};
