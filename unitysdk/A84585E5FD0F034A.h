#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF824C5F35E1F618.h"

class EF824C5F35E1F618_EA990A14CB8EA90C;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A84585E5FD0F034A_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3A729D0)
#define A84585E5FD0F034A_AA1715FD65C208AB_OFFSET UNITYSDK_OFFSET(0x3A72BC0)
#define A84585E5FD0F034A_AA8531773975E82E_OFFSET UNITYSDK_OFFSET(0x3A72B20)
#define A84585E5FD0F034A_B7B7339A3FC77A69_OFFSET UNITYSDK_OFFSET(0x3A72DD0)
#define A84585E5FD0F034A__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A72E40)
#define A84585E5FD0F034A__CTOR_OFFSET UNITYSDK_OFFSET(0x3A72E90)

inline static constexpr unsigned int A84585E5FD0F034A_TypeDefinitionIndex = 11931;

class A84585E5FD0F034A : public ::EF824C5F35E1F618
{
public:
	static ::A84585E5FD0F034A** StaticGet_E0E7A5F93551109B()
	{
		return (::A84585E5FD0F034A**)Il2CppClass::FromTypeDefinitionIndex(A84585E5FD0F034A_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* F321552BBC941F58; // 0x18

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A84585E5FD0F034A__CCTOR_OFFSET))();
	}

	::System::Void AA8531773975E82E(::System::String* B26FB45137C102C9, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + A84585E5FD0F034A_AA8531773975E82E_OFFSET))(this, B26FB45137C102C9, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void B7B7339A3FC77A69(::System::String* B26FB45137C102C9, ::EF824C5F35E1F618_EA990A14CB8EA90C* A0EB125A66A994BD)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::EF824C5F35E1F618_EA990A14CB8EA90C*))((::PBYTE)hIl2Cpp + A84585E5FD0F034A_B7B7339A3FC77A69_OFFSET))(this, B26FB45137C102C9, A0EB125A66A994BD);
	}

	::System::Void AA1715FD65C208AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A84585E5FD0F034A_AA1715FD65C208AB_OFFSET))(this);
	}

	static ::A84585E5FD0F034A* A68C7B7988A81FDD()
	{
		return ((::A84585E5FD0F034A*(*)())((::PBYTE)hIl2Cpp + A84585E5FD0F034A_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A84585E5FD0F034A__CTOR_OFFSET))(this);
	}
};
