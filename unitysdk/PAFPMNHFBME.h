#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DamageTextStyle;
class HDLBCFBLGKN;
class PAFPMNHFBME;
namespace RPG::Client { class SimpleTextStyleController; }
namespace UnityEngine { class Transform; }

#define PAFPMNHFBME_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFC8A90)
#define PAFPMNHFBME_CTOR_OFFSET UNITYSDK_OFFSET(0xBFC8B20)
#define PAFPMNHFBME_ELCCOJBFIIE_OFFSET UNITYSDK_OFFSET(0xBFC8C30)
#define PAFPMNHFBME_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0xBFC8CF0)
#define PAFPMNHFBME_MLMMMCFHJFD_OFFSET UNITYSDK_OFFSET(0xBFC8CB0)
#define PAFPMNHFBME_NNCHPNEAGKE_OFFSET UNITYSDK_OFFSET(0xBFC8B90)
#define PAFPMNHFBME_OGBDMDNNFPI_OFFSET UNITYSDK_OFFSET(0xBFC8B30)

inline static constexpr unsigned int PAFPMNHFBME_TypeDefinitionIndex = 72373;

	class PAFPMNHFBME : public ::System::Object
	{
	public:
		::RPG::Client::SimpleTextStyleController* ADEINJIJCHG; // 0x10
		::HDLBCFBLGKN* IFIMNENDJMJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPMNHFBME_CTOR_OFFSET))(this);
		}

		static ::PAFPMNHFBME* BPLPBPMEODA(::RPG::Client::SimpleTextStyleController* a1)
		{
			return ((::PAFPMNHFBME*(*)(::RPG::Client::SimpleTextStyleController*))((::PBYTE)hIl2Cpp + PAFPMNHFBME_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OGBDMDNNFPI(::DamageTextStyle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DamageTextStyle*))((::PBYTE)hIl2Cpp + PAFPMNHFBME_OGBDMDNNFPI_OFFSET))(this, a1);
		}

		::System::Void NNCHPNEAGKE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAFPMNHFBME_NNCHPNEAGKE_OFFSET))(this, a1);
		}

		::System::Void ELCCOJBFIIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPMNHFBME_ELCCOJBFIIE_OFFSET))(this);
		}

		::HDLBCFBLGKN* MLMMMCFHJFD()
		{
			return ((::HDLBCFBLGKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPMNHFBME_MLMMMCFHJFD_OFFSET))(this);
		}

		::UnityEngine::Transform* MJHIFABJDHJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPMNHFBME_MJHIFABJDHJ_OFFSET))(this);
		}

	};
