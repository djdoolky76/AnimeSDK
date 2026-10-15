#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHOCKFOKCE;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }

#define LIBDFHNOMPJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C90ED60)
#define LIBDFHNOMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C90EDE0)

	class LIBDFHNOMPJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FiveDimSimpleHitBoxConfig* EABKOHGCHFP; // 0x10
		::CEHOCKFOKCE* BPAPBAFOMCH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBDFHNOMPJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBDFHNOMPJ_CLEAR_OFFSET))(this);
		}

	};
