#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/Serialization/BufferedString.h"

namespace MoleMole { class UIViewModelReference; }
namespace Sirenix::Serialization { class IDataReader; }
namespace Sirenix::Serialization { class IDataWriter; }

#define MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_GET_MEMBERCOUNT_OFFSET UNITYSDK_OFFSET(0x164D7FD0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_READMEMBER_OFFSET UNITYSDK_OFFSET(0x164D7FE0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_WRITE_OFFSET UNITYSDK_OFFSET(0x164D80B0)
#define MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG__CTOR_OFFSET UNITYSDK_OFFSET(0x164D8160)

namespace MoleMole
{
	inline static constexpr unsigned int UIViewModelReference_DLKAGAAEAJG_TypeDefinitionIndex = 90865;

	class UIViewModelReference_DLKAGAAEAJG
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MemberCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_GET_MEMBERCOUNT_OFFSET))(this);
		}

		::System::Boolean ReadMember(::MoleMole::UIViewModelReference*& EGEGIMGMJHN, ::Sirenix::Serialization::BufferedString& HIAIKHDFCLN, ::Sirenix::Serialization::IDataReader* FAJNJHEJMEA, ::System::Int32 BIOGEIHKABE)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::BufferedString&, ::Sirenix::Serialization::IDataReader*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_READMEMBER_OFFSET))(this, EGEGIMGMJHN, HIAIKHDFCLN, FAJNJHEJMEA, BIOGEIHKABE);
		}

		::System::Void Write(::MoleMole::UIViewModelReference*& EGEGIMGMJHN, ::Sirenix::Serialization::IDataWriter* KJOELGPFKDM)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIViewModelReference*&, ::Sirenix::Serialization::IDataWriter*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVIEWMODELREFERENCE_DLKAGAAEAJG_WRITE_OFFSET))(this, EGEGIMGMJHN, KJOELGPFKDM);
		}
	};
}
