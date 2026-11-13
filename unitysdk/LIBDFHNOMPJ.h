#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEHOCKFOKCE;
namespace RPG::GameCore { class FiveDimSimpleHitBoxConfig; }

#define LIBDFHNOMPJ_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D63AB60)
#define LIBDFHNOMPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63ABC0)

inline static constexpr unsigned int LIBDFHNOMPJ_TypeDefinitionIndex = 44503;

	class LIBDFHNOMPJ : public ::System::Object
	{
	public:
		::CEHOCKFOKCE* BPAPBAFOMCH; // 0x10
		::RPG::GameCore::FiveDimSimpleHitBoxConfig* EABKOHGCHFP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBDFHNOMPJ_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIBDFHNOMPJ_CLEAR_OFFSET))(this);
		}

	};
