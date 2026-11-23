#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF824C5F35E1F618.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBA640434B7904E1_A3B890159838DCB9_OFFSET UNITYSDK_OFFSET(0x39C62D0)
#define FBA640434B7904E1_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x39C6120)
#define FBA640434B7904E1_AA1715FD65C208AB_OFFSET UNITYSDK_OFFSET(0x39C61F0)
#define FBA640434B7904E1_F1BC7F40422866D2_OFFSET UNITYSDK_OFFSET(0x39C7340)
#define FBA640434B7904E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x39C77B0)
#define FBA640434B7904E1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FBA640434B7904E1_TypeDefinitionIndex = 12590;

class FBA640434B7904E1 : public ::EF824C5F35E1F618
{
public:
	static ::FBA640434B7904E1** StaticGet_E0E7A5F93551109B()
	{
		return (::FBA640434B7904E1**)Il2CppClass::FromTypeDefinitionIndex(FBA640434B7904E1_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void A3B890159838DCB9(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + FBA640434B7904E1_A3B890159838DCB9_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	static ::FBA640434B7904E1* A68C7B7988A81FDD()
	{
		return ((::FBA640434B7904E1*(*)())((::PBYTE)hIl2Cpp + FBA640434B7904E1_A68C7B7988A81FDD_OFFSET))();
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBA640434B7904E1__CCTOR_OFFSET))();
	}

	::System::Void AA1715FD65C208AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBA640434B7904E1_AA1715FD65C208AB_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBA640434B7904E1__CTOR_OFFSET))(this);
	}

	::System::Void F1BC7F40422866D2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + FBA640434B7904E1_F1BC7F40422866D2_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}
};
