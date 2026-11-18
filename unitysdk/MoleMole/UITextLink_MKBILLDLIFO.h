#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UITEXTLINK_MKBILLDLIFO__CTOR_OFFSET UNITYSDK_OFFSET(0x164C83C0)

namespace MoleMole
{
	inline static constexpr unsigned int UITextLink_MKBILLDLIFO_TypeDefinitionIndex = 74693;

	class UITextLink_MKBILLDLIFO : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rect>* JCGGNCGJFCA; // 0x10
		::System::String* HIAIKHDFCLN; // 0x18
		::System::Int32 FKGNDKNHAEH; // 0x20
		::System::Int32 NOLLMOIGJHF; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITEXTLINK_MKBILLDLIFO__CTOR_OFFSET))(this);
		}
	};
}
