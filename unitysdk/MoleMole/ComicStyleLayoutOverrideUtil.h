#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ComicImgStyle; }
namespace MoleMole { class ComicPartInfo; }
namespace MoleMole { class ComicPartLayoutOverride; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_CLONEFORCOMPOSE_OFFSET UNITYSDK_OFFSET(0x1F1AD590)
#define MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_CLONEPARTINFO_OFFSET UNITYSDK_OFFSET(0x1F1AD9C0)
#define MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_COMPOSE_OFFSET UNITYSDK_OFFSET(0x1F1ACFD0)

namespace MoleMole
{
	inline static constexpr unsigned int ComicStyleLayoutOverrideUtil_TypeDefinitionIndex = 32218;

	class ComicStyleLayoutOverrideUtil : public ::System::Object
	{
	public:
		static ::MoleMole::ComicImgStyle* Compose(::MoleMole::ComicImgStyle* baseStyle, ::System::Collections::Generic::List_1<::MoleMole::ComicPartLayoutOverride*>* overrides)
		{
			return ((::MoleMole::ComicImgStyle*(*)(::MoleMole::ComicImgStyle*, ::System::Collections::Generic::List_1<::MoleMole::ComicPartLayoutOverride*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_COMPOSE_OFFSET))(baseStyle, overrides);
		}

		static ::MoleMole::ComicImgStyle* CloneForCompose(::MoleMole::ComicImgStyle* source)
		{
			return ((::MoleMole::ComicImgStyle*(*)(::MoleMole::ComicImgStyle*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_CLONEFORCOMPOSE_OFFSET))(source);
		}

		static ::MoleMole::ComicPartInfo* ClonePartInfo(::MoleMole::ComicPartInfo* source)
		{
			return ((::MoleMole::ComicPartInfo*(*)(::MoleMole::ComicPartInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMICSTYLELAYOUTOVERRIDEUTIL_CLONEPARTINFO_OFFSET))(source);
		}
	};
}
