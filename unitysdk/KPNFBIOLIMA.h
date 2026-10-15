#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define KPNFBIOLIMA_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0xB5C7130)
#define KPNFBIOLIMA_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xB5C5870)
#define KPNFBIOLIMA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5C5570)
#define KPNFBIOLIMA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB5C5580)
#define KPNFBIOLIMA_FKABDJFMJEP_OFFSET UNITYSDK_OFFSET(0xB5C7250)
#define KPNFBIOLIMA_HMCBKHHIMML_OFFSET UNITYSDK_OFFSET(0xB5C7110)
#define KPNFBIOLIMA_ILJOIGNFIBI_OFFSET UNITYSDK_OFFSET(0xB5C71B0)
#define KPNFBIOLIMA_KGGEOBDNLNL_OFFSET UNITYSDK_OFFSET(0xB5C7240)
#define KPNFBIOLIMA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5C55D0)
#define KPNFBIOLIMA_MGHMEAPNJNA_OFFSET UNITYSDK_OFFSET(0xB5C71C0)
#define KPNFBIOLIMA_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB5C7120)

	class KPNFBIOLIMA : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x10
		::Il2CppArray<::UnityEngine::Transform*>* PMPBJKLGEAF; // 0x18
		::Il2CppArray<::UnityEngine::Transform*>* GGIHGMALFPJ; // 0x20
		::Il2CppArray<::System::Single>* GAEDDPBHPJB; // 0x28
		::Il2CppArray<::UnityEngine::Vector3>* BPNDEODJIMA; // 0x30
		::System::Single DMBNFEGGFFL; // 0x38
		::System::Single CLKJEOCKGKE; // 0x3C
		::System::Boolean DOFJLCMOJML; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single OPPPEMFFLDP; // 0x44
		::System::Single CFNOCGHABOH; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_DISPOSE_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::System::UInt32 a3, ::UnityEngine::AnimationCurve* a4, ::Il2CppArray<::UnityEngine::Transform*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::System::UInt32, ::UnityEngine::AnimationCurve*, ::Il2CppArray<::UnityEngine::Transform*>*))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void CIJDJDICMMM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_CIJDJDICMMM_OFFSET))(this, a1);
		}

		::System::Boolean HMCBKHHIMML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_HMCBKHHIMML_OFFSET))(this);
		}

		::System::Single NHONNHCIOOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::System::Single ILJOIGNFIBI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_ILJOIGNFIBI_OFFSET))(this);
		}

		::System::Void MGHMEAPNJNA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_MGHMEAPNJNA_OFFSET))(this, a1);
		}

		::System::Single KGGEOBDNLNL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_KGGEOBDNLNL_OFFSET))(this);
		}

		::System::Single FKABDJFMJEP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNFBIOLIMA_FKABDJFMJEP_OFFSET))(this);
		}

	};
