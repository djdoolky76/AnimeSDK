#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JBKHHHPLBEL;
class MFBKLAENAEC;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define KAEJIGFNDMO_CAAILFGGFFO_OFFSET UNITYSDK_OFFSET(0x130A7170)
#define KAEJIGFNDMO__CTOR_OFFSET UNITYSDK_OFFSET(0x130A7160)

inline static constexpr unsigned int KAEJIGFNDMO_TypeDefinitionIndex = 61230;

class KAEJIGFNDMO : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAEJIGFNDMO__CTOR_OFFSET))(this);
	}

	static ::MFBKLAENAEC* CAAILFGGFFO(::System::String* MCOHLHMKLIP, ::System::Action_1<::UnityEngine::Transform*>* AJNEOEGFCIE, ::System::Action_1<::UnityEngine::Transform*>* EEMGAKNBADM, ::System::Action* MGAKJHJAGJI, ::System::Action* KAOPKANJNNJ, ::System::Boolean APBCICAJOBN, ::UnityEngine::Transform* DNPCBBFCMJO, ::System::Boolean CGJLIGGNPPD, ::System::String* AGDIFJHJAIF, ::JBKHHHPLBEL* AAOCANGHBDG)
	{
		return ((::MFBKLAENAEC*(*)(::System::String*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action_1<::UnityEngine::Transform*>*, ::System::Action*, ::System::Action*, ::System::Boolean, ::UnityEngine::Transform*, ::System::Boolean, ::System::String*, ::JBKHHHPLBEL*))((::PBYTE)hIl2Cpp + KAEJIGFNDMO_CAAILFGGFFO_OFFSET))(MCOHLHMKLIP, AJNEOEGFCIE, EEMGAKNBADM, MGAKJHJAGJI, KAOPKANJNNJ, APBCICAJOBN, DNPCBBFCMJO, CGJLIGGNPPD, AGDIFJHJAIF, AAOCANGHBDG);
	}
};
