#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAdataporRectTransform; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x1982F450)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_READMEMBER_OFFSET UNITYSDK_OFFSET(0x1982F460)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_WRITE_OFFSET UNITYSDK_OFFSET(0x1982FCA0)
#define MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF__CTOR_OFFSET UNITYSDK_OFFSET(0x19830170)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdataporRectTransform_HNFGNIFGBPF_TypeDefinitionIndex = 75609;

	class UIAdataporRectTransform_HNFGNIFGBPF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdataporRectTransform*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAdataporRectTransform*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdataporRectTransform*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADATAPORRECTTRANSFORM_HNFGNIFGBPF_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
