#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define B7511F5EB9EAEB91_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x3A18130)
#define B7511F5EB9EAEB91_AA4C4090443321D1_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define B7511F5EB9EAEB91_BA0A28C6773ED508_OFFSET UNITYSDK_OFFSET(0x29CFF60)
#define B7511F5EB9EAEB91_BEF71C2EA48A5A57_OFFSET UNITYSDK_OFFSET(0x3A17A90)
#define B7511F5EB9EAEB91_EA260080A1F268B3_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define B7511F5EB9EAEB91_F17208CD71A1BF6B_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define B7511F5EB9EAEB91_F1815832EA795216_OFFSET UNITYSDK_OFFSET(0x3A17CC0)
#define B7511F5EB9EAEB91_FA53BE5063B6279D_OFFSET UNITYSDK_OFFSET(0x38EE130)
#define B7511F5EB9EAEB91_FBC0248000618FDD_OFFSET UNITYSDK_OFFSET(0x3A17BB0)
#define B7511F5EB9EAEB91_FF78520925601BFF_OFFSET UNITYSDK_OFFSET(0x17F35D0)
#define B7511F5EB9EAEB91__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B7511F5EB9EAEB91_TypeDefinitionIndex = 12878;

class B7511F5EB9EAEB91 : public ::System::Object
{
public:
	::System::Action* B0A81AB4C23019A7; // 0x10
	::System::Action* A08A62C75EBB9DDE; // 0x18

	::System::Void F17208CD71A1BF6B(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_F17208CD71A1BF6B_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void FBC0248000618FDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_FBC0248000618FDD_OFFSET))(this);
	}

	::System::Boolean F1815832EA795216(::System::String* E0C0689B1CEBE48C, ::System::String* B01C05A6976F8D7C, ::System::Boolean A0029F4E38B0F861)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_F1815832EA795216_OFFSET))(this, E0C0689B1CEBE48C, B01C05A6976F8D7C, A0029F4E38B0F861);
	}

	::System::Void FF78520925601BFF(::System::Action* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_FF78520925601BFF_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void BA0A28C6773ED508(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* AA7579420EDEA437)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_BA0A28C6773ED508_OFFSET))(this, E41EB813C7FB644A, AA7579420EDEA437);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91__CTOR_OFFSET))(this);
	}

	::System::Action* AA4C4090443321D1()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_AA4C4090443321D1_OFFSET))(this);
	}

	static ::System::Boolean BEF71C2EA48A5A57()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_BEF71C2EA48A5A57_OFFSET))();
	}

	::System::Void FA53BE5063B6279D(::System::String* E41EB813C7FB644A, ::System::Action_1<::System::String*>* E107201E5734AF59)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_FA53BE5063B6279D_OFFSET))(this, E41EB813C7FB644A, E107201E5734AF59);
	}

	::System::Action* EA260080A1F268B3()
	{
		return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_EA260080A1F268B3_OFFSET))(this);
	}

	::System::Void A16C8ED92C989C9B(::System::String* B083BE7841B347C4, ::System::String* AEA156B2FBE527C1, ::System::Boolean A71416AA20040B52)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + B7511F5EB9EAEB91_A16C8ED92C989C9B_OFFSET))(this, B083BE7841B347C4, AEA156B2FBE527C1, A71416AA20040B52);
	}
};
