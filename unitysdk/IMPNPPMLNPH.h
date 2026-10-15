#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class FreeStyleController; }

#define IMPNPPMLNPH_CTOR_OFFSET UNITYSDK_OFFSET(0x164E58E0)
#define IMPNPPMLNPH_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x164E5890)

	class IMPNPPMLNPH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMPNPPMLNPH_CTOR_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::RPG::GameCore::FreeStyleController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FreeStyleController*))((::PBYTE)hIl2Cpp + IMPNPPMLNPH_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
