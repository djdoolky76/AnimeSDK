#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace RPG::Client { class AttachPointMapping; }
namespace RPG::Client { class AttachmentBone; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ATTACHMENTSOLVER_CIJDJDICMMM_OFFSET UNITYSDK_OFFSET(0xC6AA860)
#define RPG_CLIENT_ATTACHMENTSOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AAD30)
#define RPG_CLIENT_ATTACHMENTSOLVER_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0xC6AACF0)
#define RPG_CLIENT_ATTACHMENTSOLVER_MEILFKECFAA_OFFSET UNITYSDK_OFFSET(0xC6AA430)
#define RPG_CLIENT_ATTACHMENTSOLVER_ONKNDHLLKAF_OFFSET UNITYSDK_OFFSET(0xC6AA1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int AttachmentSolver_TypeDefinitionIndex = 68439;

	class AttachmentSolver : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::AttachmentBone*>* Attachments; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* _RelativeMatrix; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_CTOR_OFFSET))(this);
		}

		::System::Void ONKNDHLLKAF(::RPG::Client::AttachPointMapping* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AttachPointMapping*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_ONKNDHLLKAF_OFFSET))(this, a1);
		}

		::System::Void MEILFKECFAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_MEILFKECFAA_OFFSET))(this);
		}

		::System::Void CIJDJDICMMM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_CIJDJDICMMM_OFFSET))(this, a1);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTSOLVER_FHPAOJGFHHE_OFFSET))(this);
		}

	};
}
