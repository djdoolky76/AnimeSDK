#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BA90DFC92B3EFC5F.h"
#include "unitysdk/EE07210D342447A0.h"

namespace System { template <typename T> class Action_1; }

#define AA0A900B9B5147C6_EA7EE5F525C5FB0B_OFFSET UNITYSDK_OFFSET(0x3F24240)
#define AA0A900B9B5147C6_EFAE709921C64E44_OFFSET UNITYSDK_OFFSET(0x3F241A0)
#define AA0A900B9B5147C6_FDB9F888AD9A8164_OFFSET UNITYSDK_OFFSET(0x3F24120)
#define AA0A900B9B5147C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F243B0)

inline static constexpr unsigned int AA0A900B9B5147C6_TypeDefinitionIndex = 20087;

class AA0A900B9B5147C6 : public ::System::Object
{
public:
	static ::System::Action_1<::System::Object*>** StaticGet_A5A1ED9B0D7E7D73()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AA0A900B9B5147C6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Action_1<::System::Object*>** StaticGet_E3FD46DA99490123()
	{
		return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(AA0A900B9B5147C6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void EFAE709921C64E44(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AA0A900B9B5147C6_EFAE709921C64E44_OFFSET))(E5EB06E4FD2C32F7);
	}

	static ::EE07210D342447A0 EA7EE5F525C5FB0B(::BA90DFC92B3EFC5F B22B108A2E686F3C, ::System::Action_1<::System::Object*>* E04D2BE64FCE9814, ::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::EE07210D342447A0(*)(::BA90DFC92B3EFC5F, ::System::Action_1<::System::Object*>*, ::System::Object*))((::PBYTE)hIl2Cpp + AA0A900B9B5147C6_EA7EE5F525C5FB0B_OFFSET))(B22B108A2E686F3C, E04D2BE64FCE9814, E5EB06E4FD2C32F7);
	}

	static ::System::Void FDB9F888AD9A8164(::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + AA0A900B9B5147C6_FDB9F888AD9A8164_OFFSET))(E5EB06E4FD2C32F7);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AA0A900B9B5147C6__CCTOR_OFFSET))();
	}
};
