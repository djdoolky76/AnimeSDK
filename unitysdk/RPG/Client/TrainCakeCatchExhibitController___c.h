#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class DynamicValue; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C609C10)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C609C50)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATEFFECT_B__42_0_OFFSET UNITYSDK_OFFSET(0x1C609D40)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEATTACHPOINT_B__41_0_OFFSET UNITYSDK_OFFSET(0x1C609D00)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEGROUPINSTANCEID_B__40_0_OFFSET UNITYSDK_OFFSET(0x1C609CA0)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_GROUNDANCHOR_B__37_0_OFFSET UNITYSDK_OFFSET(0x1C609C60)
#define RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_VOICECD_B__43_0_OFFSET UNITYSDK_OFFSET(0x1C609DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrainCakeCatchExhibitController___c_TypeDefinitionIndex = 61506;

	class TrainCakeCatchExhibitController___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>** StaticGet___9__43_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFC0);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>** StaticGet___9__42_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFC8);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>** StaticGet___9__37_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFD0);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFD8);
		}

		static ::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::RPG::GameCore::DynamicValue*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2AFE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C_CTOR_OFFSET))(this);
		}

		::System::String* __InitConstValue_GroundAnchor_b__37_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_GROUNDANCHOR_B__37_0_OFFSET))(this, a1);
		}

		::System::UInt32 __InitConstValue_CatTreeGroupInstanceID_b__40_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEGROUPINSTANCEID_B__40_0_OFFSET))(this, a1);
		}

		::System::String* __InitConstValue_CatTreeAttachPoint_b__41_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATTREEATTACHPOINT_B__41_0_OFFSET))(this, a1);
		}

		::System::Single __InitConstValue_CatEffect_b__42_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_CATEFFECT_B__42_0_OFFSET))(this, a1);
		}

		::System::Single __InitConstValue_VoiceCD_b__43_0(::RPG::GameCore::DynamicValue* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::GameCore::DynamicValue*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TRAINCAKECATCHEXHIBITCONTROLLER___C___INITCONSTVALUE_VOICECD_B__43_0_OFFSET))(this, a1);
		}

	};
}
