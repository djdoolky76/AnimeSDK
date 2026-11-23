#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class AkRoom;
class AkRoom_EFBFFAD3F2F8E58F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Collider; }

#define AKROOMAWAREOBJECT_A28D6A0C3E793E7D_OFFSET UNITYSDK_OFFSET(0x291CF00)
#define AKROOMAWAREOBJECT_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x291CE80)
#define AKROOMAWAREOBJECT_B2A9D80EC404637B_OFFSET UNITYSDK_OFFSET(0x291CDE0)
#define AKROOMAWAREOBJECT_B595E60F0D9D4BAC_OFFSET UNITYSDK_OFFSET(0x291D3C0)
#define AKROOMAWAREOBJECT_BF13C91AD80643D2_OFFSET UNITYSDK_OFFSET(0x291D250)
#define AKROOMAWAREOBJECT_E54BE7EDD35EF0A0_OFFSET UNITYSDK_OFFSET(0x291D400)
#define AKROOMAWAREOBJECT_F06299906A355160_OFFSET UNITYSDK_OFFSET(0x291CD80)
#define AKROOMAWAREOBJECT_F5D0462F644129CD_OFFSET UNITYSDK_OFFSET(0x291CD60)
#define AKROOMAWAREOBJECT_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x291CC70)
#define AKROOMAWAREOBJECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x291D4A0)
#define AKROOMAWAREOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x291D520)

inline static constexpr unsigned int AkRoomAwareObject_TypeDefinitionIndex = 20446;

class AkRoomAwareObject : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>** StaticGet_E5E273BBD71E6FEA()
	{
		return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Collider*, ::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(AkRoomAwareObject_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	::UnityEngine::Collider* m_Collider; // 0x20
	::AkRoom_EFBFFAD3F2F8E58F* BE9F52C1E565375B; // 0x28

	::System::Void B595E60F0D9D4BAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_B595E60F0D9D4BAC_OFFSET))(this);
	}

	::System::Void BF13C91AD80643D2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_BF13C91AD80643D2_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CCTOR_OFFSET))();
	}

	::System::Void F06299906A355160(::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_F06299906A355160_OFFSET))(this, BE6E61920F79DDD0);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT__CTOR_OFFSET))(this);
	}

	::System::Void A28D6A0C3E793E7D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_A28D6A0C3E793E7D_OFFSET))(this);
	}

	::System::Void AB36E0EE549986E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_AB36E0EE549986E5_OFFSET))(this);
	}

	::System::Void F5D0462F644129CD(::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_F5D0462F644129CD_OFFSET))(this, BE6E61920F79DDD0);
	}

	static ::AkRoomAwareObject* B2A9D80EC404637B(::UnityEngine::Collider* AED9F3D0814B967F)
	{
		return ((::AkRoomAwareObject*(*)(::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_B2A9D80EC404637B_OFFSET))(AED9F3D0814B967F);
	}

	::System::Void E54BE7EDD35EF0A0(::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::PVOID, ::AkRoom*))((::PBYTE)hIl2Cpp + AKROOMAWAREOBJECT_E54BE7EDD35EF0A0_OFFSET))(this, BE6E61920F79DDD0);
	}
};
