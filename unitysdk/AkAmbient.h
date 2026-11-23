#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A29642D447D66649.h"
#include "unitysdk/AkEvent.h"
#include "unitysdk/BCD8C3D783F07AB8.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector3.h"

class A22363177FFD3CBF;
class A25EFB48A9145290;
class AkAmbientLargeModePositioner;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define AKAMBIENT_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x29143A0)
#define AKAMBIENT_A52D04DEA1831C58_OFFSET UNITYSDK_OFFSET(0x2913F60)
#define AKAMBIENT_AA79DA07385D2C09_OFFSET UNITYSDK_OFFSET(0x2913BF0)
#define AKAMBIENT_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x29141B0)
#define AKAMBIENT_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x2914630)
#define AKAMBIENT_E18155E901D11AB9_OFFSET UNITYSDK_OFFSET(0x29145A0)
#define AKAMBIENT_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2914A00)
#define AKAMBIENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x2914C20)
#define AKAMBIENT__CTOR_OFFSET UNITYSDK_OFFSET(0x2914CC0)

inline static constexpr unsigned int AkAmbient_TypeDefinitionIndex = 20468;

class AkAmbient : public ::AkEvent
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A25EFB48A9145290*>** StaticGet_A400CA86F460CA30()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A25EFB48A9145290*>**)Il2CppClass::FromTypeDefinitionIndex(AkAmbient_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::UnityEngine::E46B881AA2636190* StaticGet_F920F910BE4DAA37()
	{
		return (::UnityEngine::E46B881AA2636190*)Il2CppClass::FromTypeDefinitionIndex(AkAmbient_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	::A29642D447D66649 MultiPositionType; // 0x98
	::BCD8C3D783F07AB8 multiPositionTypeLabel; // 0x9C
	::UnityEngine::E46B881AA2636190 attenuationSphereColor; // 0xA0
	::Il2CppArray<::AkAmbientLargeModePositioner*>* LargeModePositions; // 0xB0
	::System::Collections::Generic::List_1<::UnityEngine::Vector3>* multiPositionArray; // 0xB8

	::System::Void E18155E901D11AB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_E18155E901D11AB9_OFFSET))(this);
	}

	::A22363177FFD3CBF* AA79DA07385D2C09()
	{
		return ((::A22363177FFD3CBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_AA79DA07385D2C09_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_BF13C91AD80643D2_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKAMBIENT__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT__CTOR_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKAMBIENT_BA5D948B943E88B1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_F328E4D8818B1E12_OFFSET))(this);
	}

	::A22363177FFD3CBF* A52D04DEA1831C58(::A25EFB48A9145290* E8120DEB23C45554)
	{
		return ((::A22363177FFD3CBF*(*)(::PVOID, ::A25EFB48A9145290*))((::PBYTE)hIl2Cpp + AKAMBIENT_A52D04DEA1831C58_OFFSET))(this, E8120DEB23C45554);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMBIENT_A28D6A0C3E793E7D_OFFSET))(this);
	}
};
