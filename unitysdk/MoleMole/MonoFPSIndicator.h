#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOFPSINDICATOR_HJDBIJDJLJK_1_OFFSET UNITYSDK_OFFSET(0x16269600)
#define MOLEMOLE_MONOFPSINDICATOR_HJDBIJDJLJK_OFFSET UNITYSDK_OFFSET(0x16269580)
#define MOLEMOLE_MONOFPSINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x16267640)
#define MOLEMOLE_MONOFPSINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x162685B0)
#define MOLEMOLE_MONOFPSINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x16269570)
#define MOLEMOLE_MONOFPSINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x162694E0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoFPSIndicator_TypeDefinitionIndex = 71308;

	class MonoFPSIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_CollectAndroidPssMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSIndicator_TypeDefinitionIndex)->GetStaticField(0xE6C0);
		}
		static ::System::Boolean* StaticGet_dumpAssetMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoFPSIndicator_TypeDefinitionIndex)->GetStaticField(0xE6C1);
		}
		::System::Single updateInterval; // 0x18
		::System::Single fps; // 0x1C
		::System::Single JPIHKNPJKPH; // 0x20
		::System::Int32 PBKKBEKPPPK; // 0x24
		::System::Single OPOFPMMNPGO; // 0x28
		::System::Int32 NAHBOKJECKM; // 0x2C
		::UnityEngine::UI::Text* HEOFBENDNID; // 0x30
		::UnityEngine::UI::Text* PMGMALANEDD; // 0x38
		::UnityEngine::UI::Text* PBPHHKGLOLH; // 0x40
		::UnityEngine::UI::Text* JEOOBGDLPFN; // 0x48
		::UnityEngine::UI::Text* CCKLEBIFKID; // 0x50
		::UnityEngine::UI::Text* KBFMMBAOKFP; // 0x58
		::UnityEngine::UI::Text* FNICIIEFFCA; // 0x60
		::UnityEngine::UI::Text* NDGABCODMPA; // 0x68
		::UnityEngine::UI::Text* CFDBDGKHANK; // 0x70
		::UnityEngine::UI::Text* FKGLALDNKOG; // 0x78
		::UnityEngine::UI::Text* LCOJMDIPIHO; // 0x80
		::UnityEngine::UI::Text* FBPDEFBHBHE; // 0x88
		::UnityEngine::UI::Text* COCHNHLBDBL; // 0x90
		::Il2CppArray<::System::UInt64>* KOKGOJPFDEP; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* HJDBIJDJLJK(::System::UInt64 EEDDICPIOCN)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_HJDBIJDJLJK_OFFSET))(EEDDICPIOCN);
		}

		static ::System::String* HJDBIJDJLJK_1(::System::Int64 EEDDICPIOCN)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOFPSINDICATOR_HJDBIJDJLJK_1_OFFSET))(EEDDICPIOCN);
		}
	};
}
