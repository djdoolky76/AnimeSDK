#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AkRoom;
class AkRoomAwareObject;
namespace UnityEngine { class Collider; }
template <typename T> class FCECB52A00C1344E;

#define E57152F5FF5FAA17_B16D978EE9A52778_OFFSET UNITYSDK_OFFSET(0x291C800)
#define E57152F5FF5FAA17_BA61977D6C177281_OFFSET UNITYSDK_OFFSET(0x291C900)
#define E57152F5FF5FAA17_BDD784DDF56CD8C4_1_OFFSET UNITYSDK_OFFSET(0x291C390)
#define E57152F5FF5FAA17_BDD784DDF56CD8C4_OFFSET UNITYSDK_OFFSET(0x291C450)
#define E57152F5FF5FAA17_E2FBDAD8160A646A_OFFSET UNITYSDK_OFFSET(0x291C880)
#define E57152F5FF5FAA17_F48D830F551B9444_OFFSET UNITYSDK_OFFSET(0x291C9A0)
#define E57152F5FF5FAA17_FB0359B9196E5FA7_1_OFFSET UNITYSDK_OFFSET(0x291C530)
#define E57152F5FF5FAA17_FB0359B9196E5FA7_OFFSET UNITYSDK_OFFSET(0x291C650)
#define E57152F5FF5FAA17__CCTOR_OFFSET UNITYSDK_OFFSET(0x291CBA0)

inline static constexpr unsigned int E57152F5FF5FAA17_TypeDefinitionIndex = 20465;

class E57152F5FF5FAA17 : public ::System::Object
{
public:
	static ::FCECB52A00C1344E<::AkRoomAwareObject*>** StaticGet_BAA587E188D30296()
	{
		return (::FCECB52A00C1344E<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(E57152F5FF5FAA17_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::FCECB52A00C1344E<::AkRoomAwareObject*>** StaticGet_E6652E8F6AD92A06()
	{
		return (::FCECB52A00C1344E<::AkRoomAwareObject*>**)Il2CppClass::FromTypeDefinitionIndex(E57152F5FF5FAA17_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void BDD784DDF56CD8C4(::AkRoomAwareObject* B3E9386A7277BBA6, ::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_BDD784DDF56CD8C4_OFFSET))(B3E9386A7277BBA6, BE6E61920F79DDD0);
	}

	static ::System::Void BDD784DDF56CD8C4_1(::UnityEngine::Collider* AED9F3D0814B967F, ::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_BDD784DDF56CD8C4_1_OFFSET))(AED9F3D0814B967F, BE6E61920F79DDD0);
	}

	static ::System::Void B16D978EE9A52778(::AkRoomAwareObject* B3E9386A7277BBA6)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_B16D978EE9A52778_OFFSET))(B3E9386A7277BBA6);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E57152F5FF5FAA17__CCTOR_OFFSET))();
	}

	static ::System::Void F48D830F551B9444()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_F48D830F551B9444_OFFSET))();
	}

	static ::System::Void FB0359B9196E5FA7(::UnityEngine::Collider* AED9F3D0814B967F, ::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::UnityEngine::Collider*, ::AkRoom*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_FB0359B9196E5FA7_OFFSET))(AED9F3D0814B967F, BE6E61920F79DDD0);
	}

	static ::System::Void E2FBDAD8160A646A(::AkRoomAwareObject* B3E9386A7277BBA6)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_E2FBDAD8160A646A_OFFSET))(B3E9386A7277BBA6);
	}

	static ::System::Void BA61977D6C177281(::AkRoomAwareObject* B3E9386A7277BBA6)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_BA61977D6C177281_OFFSET))(B3E9386A7277BBA6);
	}

	static ::System::Void FB0359B9196E5FA7_1(::AkRoomAwareObject* B3E9386A7277BBA6, ::AkRoom* BE6E61920F79DDD0)
	{
		return ((::System::Void(*)(::AkRoomAwareObject*, ::AkRoom*))((::PBYTE)hIl2Cpp + E57152F5FF5FAA17_FB0359B9196E5FA7_1_OFFSET))(B3E9386A7277BBA6, BE6E61920F79DDD0);
	}
};
