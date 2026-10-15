#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

#define ENVIROMENTSYSTEMV2SPACE_ENVLAYOUTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1563C040)

namespace EnviromentSystemV2Space
{
	class EnvLayoutInfo : public ::System::Object
	{
	public:
		::System::String* category; // 0x10
		::System::String* subversion; // 0x18
		::System::Void _ctor(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEMV2SPACE_ENVLAYOUTINFO_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
