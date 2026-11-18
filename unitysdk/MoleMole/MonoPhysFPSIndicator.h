#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_MONOPHYSFPSINDICATOR_HJDBIJDJLJK_1_OFFSET UNITYSDK_OFFSET(0x1469B640)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_HJDBIJDJLJK_OFFSET UNITYSDK_OFFSET(0x1469B5F0)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_START_OFFSET UNITYSDK_OFFSET(0x1469AF70)
#define MOLEMOLE_MONOPHYSFPSINDICATOR_UPDATE_OFFSET UNITYSDK_OFFSET(0x1469B170)
#define MOLEMOLE_MONOPHYSFPSINDICATOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1469B5E0)
#define MOLEMOLE_MONOPHYSFPSINDICATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1469B550)

namespace MoleMole
{
	inline static constexpr unsigned int MonoPhysFPSIndicator_TypeDefinitionIndex = 77003;

	class MonoPhysFPSIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Boolean* StaticGet_CollectAndroidPssMemory()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonoPhysFPSIndicator_TypeDefinitionIndex)->GetStaticField(0x14420);
		}
		::System::Single updateInterval; // 0x18
		::System::Single fps; // 0x1C
		::System::Single JPIHKNPJKPH; // 0x20
		::System::Int32 PBKKBEKPPPK; // 0x24
		::System::Single OPOFPMMNPGO; // 0x28
		::System::Int32 NAHBOKJECKM; // 0x2C
		::UnityEngine::UI::Text* HEOFBENDNID; // 0x30
		::Il2CppArray<::System::UInt64>* KOKGOJPFDEP; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR__CCTOR_OFFSET))();
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_UPDATE_OFFSET))(this);
		}

		static ::System::String* HJDBIJDJLJK(::System::UInt64 EEDDICPIOCN)
		{
			return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_HJDBIJDJLJK_OFFSET))(EEDDICPIOCN);
		}

		static ::System::String* HJDBIJDJLJK_1(::System::Int64 EEDDICPIOCN)
		{
			return ((::System::String*(*)(::System::Int64))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOPHYSFPSINDICATOR_HJDBIJDJLJK_1_OFFSET))(EEDDICPIOCN);
		}
	};
}
