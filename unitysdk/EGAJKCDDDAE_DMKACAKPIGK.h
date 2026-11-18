#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/System/Object.h"

class EGAJKCDDDAE_KJHLJJPELEN;
class EKHEOJOFLLA;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Transform; }

#define EGAJKCDDDAE_DMKACAKPIGK_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x17107980)
#define EGAJKCDDDAE_DMKACAKPIGK_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x17107890)
#define EGAJKCDDDAE_DMKACAKPIGK__CTOR_OFFSET UNITYSDK_OFFSET(0x17107880)

inline static constexpr unsigned int EGAJKCDDDAE_DMKACAKPIGK_TypeDefinitionIndex = 90952;

class EGAJKCDDDAE_DMKACAKPIGK : public ::System::Object
{
public:
	::UnityEngine::Transform* JJEPFNHOAPO; // 0x10
	::EGAJKCDDDAE_KJHLJJPELEN* EEMOEMFLABI; // 0x18
	::System::Action_1<::Foundation::ViewObject::ViewObjectHandle>* KAKAEMACNPB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DMKACAKPIGK__CTOR_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM(::EKHEOJOFLLA* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::EKHEOJOFLLA*))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DMKACAKPIGK_HOFIFAEOLBM_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void CKEMNJODHCH(::Foundation::ViewObject::ViewObjectHandle IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + EGAJKCDDDAE_DMKACAKPIGK_CKEMNJODHCH_OFFSET))(this, IGAAKDOIPNN);
	}
};
