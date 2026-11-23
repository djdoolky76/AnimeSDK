#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF824C5F35E1F618.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E3F1C634C3C1A2EA_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3906E50)
#define E3F1C634C3C1A2EA_AA1715FD65C208AB_OFFSET UNITYSDK_OFFSET(0x3906F20)
#define E3F1C634C3C1A2EA_E2E2A089D4D2A6DF_OFFSET UNITYSDK_OFFSET(0x3907050)
#define E3F1C634C3C1A2EA_EBBC1AB244E90838_OFFSET UNITYSDK_OFFSET(0x3907880)
#define E3F1C634C3C1A2EA_F4EFEC88B463A426_OFFSET UNITYSDK_OFFSET(0x3907F50)
#define E3F1C634C3C1A2EA__CCTOR_OFFSET UNITYSDK_OFFSET(0x3908620)
#define E3F1C634C3C1A2EA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E3F1C634C3C1A2EA_TypeDefinitionIndex = 12286;

class E3F1C634C3C1A2EA : public ::EF824C5F35E1F618
{
public:
	static ::E3F1C634C3C1A2EA** StaticGet_E0E7A5F93551109B()
	{
		return (::E3F1C634C3C1A2EA**)Il2CppClass::FromTypeDefinitionIndex(E3F1C634C3C1A2EA_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void E2E2A089D4D2A6DF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA_E2E2A089D4D2A6DF_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void AA1715FD65C208AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA_AA1715FD65C208AB_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA__CCTOR_OFFSET))();
	}

	::System::Void EBBC1AB244E90838(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA_EBBC1AB244E90838_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	static ::E3F1C634C3C1A2EA* A68C7B7988A81FDD()
	{
		return ((::E3F1C634C3C1A2EA*(*)())((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA__CTOR_OFFSET))(this);
	}

	::System::Void F4EFEC88B463A426(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + E3F1C634C3C1A2EA_F4EFEC88B463A426_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}
};
