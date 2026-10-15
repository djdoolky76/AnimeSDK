#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNDBPCIHPGL.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"
class BMPIEAPOJBJ;
namespace System { class Object; }
namespace System { class String; }

#define BMPIEAPOJBJ_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBDC4780)
#define BMPIEAPOJBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC48B0)

	class BMPIEAPOJBJ : public ::BNDBPCIHPGL
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMPIEAPOJBJ_CTOR_OFFSET))(this);
		}

		static ::BMPIEAPOJBJ* BPLPBPMEODA(::RPG::Client::WorkGroupType a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::BMPIEAPOJBJ*(*)(::RPG::Client::WorkGroupType, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + BMPIEAPOJBJ_BPLPBPMEODA_OFFSET))(a1, a2, a3);
		}

	};
