#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IAAHGDFHCNB_MGCPDNMHMCO;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class TextAsset; }

#define PJHEDPGGMIH_KFOCMAFKMIE_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x1556D8A0)
#define PJHEDPGGMIH_KFOCMAFKMIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1556D890)

inline static constexpr unsigned int PJHEDPGGMIH_KFOCMAFKMIE_TypeDefinitionIndex = 86309;

class PJHEDPGGMIH_KFOCMAFKMIE : public ::System::Object
{
public:
	::IAAHGDFHCNB_MGCPDNMHMCO* NGGNKKAMDGH; // 0x10
	::System::Collections::Generic::List_1<::System::String*>* MKLEDMIMEEH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJHEDPGGMIH_KFOCMAFKMIE__CTOR_OFFSET))(this);
	}

	::IAAHGDFHCNB_MGCPDNMHMCO* FLIAEJGDMLI(::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>* MHDAJGPGLOD)
	{
		return ((::IAAHGDFHCNB_MGCPDNMHMCO*(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::TextAsset*>*))((::PBYTE)hIl2Cpp + PJHEDPGGMIH_KFOCMAFKMIE_FLIAEJGDMLI_OFFSET))(this, MHDAJGPGLOD);
	}
};
