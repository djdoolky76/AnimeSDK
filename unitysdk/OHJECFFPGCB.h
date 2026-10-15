#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class Stage; }
namespace System { class String; }

#define OHJECFFPGCB_CTOR_OFFSET UNITYSDK_OFFSET(0xBE660D0)
#define OHJECFFPGCB_KEOKEELBKHI_OFFSET UNITYSDK_OFFSET(0xBE660E0)
#define OHJECFFPGCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0xBE662D0)

inline static constexpr unsigned int OHJECFFPGCB_TypeDefinitionIndex = 59274;

	class OHJECFFPGCB : public ::System::Object
	{
	public:
		::RPG::Client::Stage* AAIPOEIBOAJ; // 0x10
		::System::Void _ctor(::RPG::Client::Stage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Stage*))((::PBYTE)hIl2Cpp + OHJECFFPGCB_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean KEOKEELBKHI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJECFFPGCB_KEOKEELBKHI_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHJECFFPGCB_TOSTRING_OFFSET))(this);
		}

	};
