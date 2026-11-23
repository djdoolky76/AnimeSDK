#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class B1DF25493F639BCE;
class B8744C47C9CE1BFA;
class E38591179A5EEB67;
class F8311488A80A8AFC;
namespace System::Threading { class ManualResetEvent; }

#define AE212FE322C298C1_A0A7DD754A3524EA_OFFSET UNITYSDK_OFFSET(0x2F95820)
#define AE212FE322C298C1_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x3EED8F0)
#define AE212FE322C298C1_FD43B9B05A29FCD9_OFFSET UNITYSDK_OFFSET(0x3EE42A0)

inline static constexpr unsigned int AE212FE322C298C1_TypeDefinitionIndex = 15247;

class AE212FE322C298C1 : public ::System::Object
{
public:
	::B1DF25493F639BCE* BC92BE65F028CD67; // 0x10
	::F8311488A80A8AFC* A89CFEE07F7AFA27; // 0x18
	::E38591179A5EEB67* AA87CDE7A847F06C; // 0x20
	::Il2CppArray<::System::Byte>* E7D9EB05EB83745F; // 0x28
	::Il2CppArray<::System::Char>* FFEEB166F1A7A2F6; // 0x30
	::System::Boolean F0B877F1FD33266A; // 0x38
	::System::Byte _padding0[0x7];
	::System::Threading::ManualResetEvent* EAA5973B20C7740C; // 0x40
	::System::Object* F293F77F357B8C35; // 0x48
	::B8744C47C9CE1BFA* FE1FC6AE440098FE; // 0x50

	::System::Void A0A7DD754A3524EA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE212FE322C298C1_A0A7DD754A3524EA_OFFSET))(this);
	}

	::System::Void FD43B9B05A29FCD9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE212FE322C298C1_FD43B9B05A29FCD9_OFFSET))(this);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AE212FE322C298C1_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}
};
