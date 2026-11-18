#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicPartLayoutOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMICIMGSPLITSCREENGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD5E180)

namespace MoleMole
{
	inline static constexpr unsigned int ComicImgSplitScreenGroup_TypeDefinitionIndex = 32200;

	class ComicImgSplitScreenGroup : public ::System::Object
	{
	public:
		::System::String* comicImgStyle; // 0x10
		::MoleMole::ComicImgStyle* composedStyleCache; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* spriteItems; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::ComicPartLayoutOverride*>* layoutOverrides; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICIMGSPLITSCREENGROUP__CTOR_OFFSET))(this);
		}
	};
}
