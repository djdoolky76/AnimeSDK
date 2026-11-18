#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_GJDJLHHDJKE_OFFSET UNITYSDK_OFFSET(0x130E67C0)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_ICNPIJMLDAM_OFFSET UNITYSDK_OFFSET(0x130E6C80)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x130E6680)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_LGBDDJOMNHO_OFFSET UNITYSDK_OFFSET(0x130E6700)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER_OFKFGNJBCHK_OFFSET UNITYSDK_OFFSET(0x130E7060)
#define MOLEMOLE_MONOATTACHMENTCENTERDITHER__CTOR_OFFSET UNITYSDK_OFFSET(0x130E6770)

namespace MoleMole
{
	inline static constexpr unsigned int MonoAttachmentCenterDither_TypeDefinitionIndex = 57498;

	class MonoAttachmentCenterDither : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean NOPPOLBOOKD; // 0x18
		::System::Boolean IsOpen; // 0x19
		::System::Byte _padding0[0x6];
		::UnityEngine::Transform* CenterTrans; // 0x20
		::System::Single Range; // 0x28
		::System::Single Fade; // 0x2C
		::System::Single CenterMinAlpha; // 0x30
		::System::Boolean CEDAJOHPGJP; // 0x34
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* HBPDGLGOGPP; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER__CTOR_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void GJDJLHHDJKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_GJDJLHHDJKE_OFFSET))(this);
		}

		::System::Void LGBDDJOMNHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_LGBDDJOMNHO_OFFSET))(this);
		}

		::System::Void OFKFGNJBCHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_OFKFGNJBCHK_OFFSET))(this);
		}

		::System::Void ICNPIJMLDAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOATTACHMENTCENTERDITHER_ICNPIJMLDAM_OFFSET))(this);
		}
	};
}
