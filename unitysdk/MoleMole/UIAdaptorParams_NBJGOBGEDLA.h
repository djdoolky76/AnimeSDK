#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIAdaptorParams; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x17EA76D0)
#define MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_READMEMBER_OFFSET UNITYSDK_OFFSET(0x17EA76E0)
#define MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_WRITE_OFFSET UNITYSDK_OFFSET(0x17EA7930)
#define MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA__CTOR_OFFSET UNITYSDK_OFFSET(0x17EA7AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAdaptorParams_NBJGOBGEDLA_TypeDefinitionIndex = 41753;

	class UIAdaptorParams_NBJGOBGEDLA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIAdaptorParams*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIAdaptorParams*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAdaptorParams*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADAPTORPARAMS_NBJGOBGEDLA_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
