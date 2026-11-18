#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIPinballResultDialogPageController_SettleStatCandidate; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17BB94A0)
#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x17BB94E0)
#define MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__SELECTCANDIDATESBYPRIORITY_B__26_0_OFFSET UNITYSDK_OFFSET(0x17BB94F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPinballResultDialogPageController___c_TypeDefinitionIndex = 84420;

	class UIPinballResultDialogPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIPinballResultDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x39030);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__26_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIPinballResultDialogPageController___c_TypeDefinitionIndex)->GetStaticField(0x39038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _SelectCandidatesByPriority_b__26_0(::MoleMole::UIPinballResultDialogPageController_SettleStatCandidate* a, ::MoleMole::UIPinballResultDialogPageController_SettleStatCandidate* b)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::UIPinballResultDialogPageController_SettleStatCandidate*, ::MoleMole::UIPinballResultDialogPageController_SettleStatCandidate*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPINBALLRESULTDIALOGPAGECONTROLLER___C__SELECTCANDIDATESBYPRIORITY_B__26_0_OFFSET))(this, a, b);
		}
	};
}
