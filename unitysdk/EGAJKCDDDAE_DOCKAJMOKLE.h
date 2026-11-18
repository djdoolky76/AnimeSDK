#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class EGAJKCDDDAE_KJHLJJPELEN;
class EKHEOJOFLLA;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define EGAJKCDDDAE_DOCKAJMOKLE_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1722F870)
#define EGAJKCDDDAE_DOCKAJMOKLE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x17230090)
#define EGAJKCDDDAE_DOCKAJMOKLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1722F360)

inline static constexpr unsigned int EGAJKCDDDAE_DOCKAJMOKLE_TypeDefinitionIndex = 90953;

class EGAJKCDDDAE_DOCKAJMOKLE : public ::System::Object
{
public:
	::UnityEngine::Transform* JJEPFNHOAPO; // 0x10
	::EGAJKCDDDAE_KJHLJJPELEN* FGBNBFHOKAA; // 0x18
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* DLMJCFBENGB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DOCKAJMOKLE__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::Foundation::ViewObject::ViewObjectHandle IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DOCKAJMOKLE_AAHMACBDCPN_OFFSET))(this, IGAAKDOIPNN);
	}

	::System::Void LIDNPLMPHAL(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DOCKAJMOKLE_LIDNPLMPHAL_OFFSET))(this, AAOCANGHBDG);
	}
};
