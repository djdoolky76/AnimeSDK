#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client::FullBody { class Grounding; }

#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_ACDPBPKPKGE_OFFSET UNITYSDK_OFFSET(0x1A7CEAD0)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CE960)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_GET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D1460)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_GET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D1430)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_JBGIFBGMLMF_OFFSET UNITYSDK_OFFSET(0x1A7CFCC0)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1A7D04D0)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x1A7D1480)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_SET_HEIGHTOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D1470)
#define RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_SET_IKOFFSET_OFFSET UNITYSDK_OFFSET(0x1A7D1450)

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding_JGJCNOBMEOJ_TypeDefinitionIndex = 76392;

	class Grounding_JGJCNOBMEOJ : public ::System::Object
	{
	public:
		::RPG::Client::FullBody::Grounding* MDFCPEMDFDH; // 0x10
		::System::Single JKKIMOPDMIH; // 0x18
		::System::Single _heightOffset_k__BackingField; // 0x1C
		::UnityEngine::Vector3 OPPKAHNEILK; // 0x20
		::UnityEngine::Vector3 _IKOffset_k__BackingField; // 0x2C
		::System::Boolean EIELHMOJDHL; // 0x38
		::System::Byte _padding0[0x3];
		::System::Single IAIOOFOFKOJ; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_IKOffset()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_GET_IKOFFSET_OFFSET))(this);
		}

		::System::Void set_IKOffset(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_SET_IKOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_heightOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_GET_HEIGHTOFFSET_OFFSET))(this);
		}

		::System::Void set_heightOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_SET_HEIGHTOFFSET_OFFSET))(this, a1);
		}

		::System::Void ACDPBPKPKGE(::RPG::Client::FullBody::Grounding* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FullBody::Grounding*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_ACDPBPKPKGE_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void JBGIFBGMLMF(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_FULLBODY_GROUNDING_JGJCNOBMEOJ_JBGIFBGMLMF_OFFSET))(this, a1, a2, a3);
		}

	};
}
