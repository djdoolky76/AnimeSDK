#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF824C5F35E1F618.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F6FAE4C8C5CC3DD3_A26EF69EA05B2CF2_OFFSET UNITYSDK_OFFSET(0x3A935B0)
#define F6FAE4C8C5CC3DD3_A68C7B7988A81FDD_OFFSET UNITYSDK_OFFSET(0x3A91B60)
#define F6FAE4C8C5CC3DD3_A97981D180D7A3EF_OFFSET UNITYSDK_OFFSET(0x3A92CC0)
#define F6FAE4C8C5CC3DD3_AA1715FD65C208AB_OFFSET UNITYSDK_OFFSET(0x3A91C30)
#define F6FAE4C8C5CC3DD3_AFAA91720CAD7726_OFFSET UNITYSDK_OFFSET(0x3A91D60)
#define F6FAE4C8C5CC3DD3__CCTOR_OFFSET UNITYSDK_OFFSET(0x3A93D60)
#define F6FAE4C8C5CC3DD3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F6FAE4C8C5CC3DD3_TypeDefinitionIndex = 12038;

class F6FAE4C8C5CC3DD3 : public ::EF824C5F35E1F618
{
public:
	static ::F6FAE4C8C5CC3DD3** StaticGet_E0E7A5F93551109B()
	{
		return (::F6FAE4C8C5CC3DD3**)Il2CppClass::FromTypeDefinitionIndex(F6FAE4C8C5CC3DD3_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	::System::Void A97981D180D7A3EF(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3_A97981D180D7A3EF_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void A26EF69EA05B2CF2(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3_A26EF69EA05B2CF2_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	static ::F6FAE4C8C5CC3DD3* A68C7B7988A81FDD()
	{
		return ((::F6FAE4C8C5CC3DD3*(*)())((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3_A68C7B7988A81FDD_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3__CTOR_OFFSET))(this);
	}

	::System::Void AFAA91720CAD7726(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>* ACB935251C72AC4E, ::System::String* B3AEDF12C345BA57)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Action_2<::System::String*, ::System::Action_1<::System::String*>*>*>*, ::System::String*))((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3_AFAA91720CAD7726_OFFSET))(this, ACB935251C72AC4E, B3AEDF12C345BA57);
	}

	::System::Void AA1715FD65C208AB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3_AA1715FD65C208AB_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F6FAE4C8C5CC3DD3__CCTOR_OFFSET))();
	}
};
