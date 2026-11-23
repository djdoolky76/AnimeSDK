#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF824C5F35E1F618.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABD0F192883F4E42_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3A93DB0)
#define ABD0F192883F4E42_AA1715FD65C208AB_OFFSET UNITYSDK_OFFSET(0x3A93E80)
#define ABD0F192883F4E42_E0C8129D79F74E55_OFFSET UNITYSDK_OFFSET(0x3A93FB0)
#define ABD0F192883F4E42_F0185DB351649ECF_OFFSET UNITYSDK_OFFSET(0x3A94660)
#define ABD0F192883F4E42_F8BEDF938AFEE17D_OFFSET UNITYSDK_OFFSET(0x3A94E20)
#define ABD0F192883F4E42__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A955B0)
#define ABD0F192883F4E42__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int ABD0F192883F4E42_TypeDefinitionIndex = 12028;

class ABD0F192883F4E42 : public ::EF824C5F35E1F618
{
public:
	static ::ABD0F192883F4E42** StaticGet_E0E7A5F93551109B()
	{
		return (::ABD0F192883F4E42**)Il2CppClass::FromTypeDefinitionIndex(ABD0F192883F4E42_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABD0F192883F4E42__CCTOR_OFFSET))();
	}

	::System::Void E0C8129D79F74E55(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + ABD0F192883F4E42_E0C8129D79F74E55_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABD0F192883F4E42__CTOR_OFFSET))(this);
	}

	::System::Void F8BEDF938AFEE17D(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + ABD0F192883F4E42_F8BEDF938AFEE17D_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void F0185DB351649ECF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + ABD0F192883F4E42_F0185DB351649ECF_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	static ::ABD0F192883F4E42* A68C7B7988A81FDD()
	{
		return ((::ABD0F192883F4E42*(*)())((::PBYTE)hIl2Cpp + ABD0F192883F4E42_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void AA1715FD65C208AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABD0F192883F4E42_AA1715FD65C208AB_OFFSET))(this);
	}
};
