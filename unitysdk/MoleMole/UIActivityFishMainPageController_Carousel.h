#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET UNITYSDK_OFFSET(0x1A0D0980)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1A0D0490)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET UNITYSDK_OFFSET(0x1A0D0690)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET UNITYSDK_OFFSET(0x1A0D0C90)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D0AB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController_Carousel_TypeDefinitionIndex = 46854;

	class UIActivityFishMainPageController_Carousel : public ::System::Object
	{
	public:
		::System::String* _fadeInClip; // 0x10
		::GCIMMDDIFBJ* _animation; // 0x18
		::FGCOIBFFCHB* _image1; // 0x20
		::System::String* _fadeOutClip; // 0x28
		::System::Collections::Generic::List_1<::System::String*>* _iconList; // 0x30
		::System::Int32 _maxNum; // 0x38
		::Foundation::Coroutine::CoroutineHandle _carouselHandle; // 0x3C
		::System::Boolean _isAvatar; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 _curNum; // 0x44
		::System::Single _fadeOutClipLength; // 0x48
		::Foundation::Coroutine::CoroutineHandle _waitFadeCarouselHandle; // 0x4C
		::System::Single _fadeInClipLength; // 0x50
		::System::Single _firstCarouselTime; // 0x54
		::System::Single _carouselTime; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET))(this);
		}

		::System::Void StartCarousel(::System::Collections::Generic::List_1<::System::String*>* iconList, ::FGCOIBFFCHB* image, ::GCIMMDDIFBJ* animation, ::System::Boolean isAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::FGCOIBFFCHB*, ::GCIMMDDIFBJ*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET))(this, iconList, image, animation, isAvatar);
		}

		::System::Void StopCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET))(this);
		}

		::System::Void CarouselNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET))(this);
		}

		::System::Void _CarouselNext_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET))(this);
		}
	};
}
