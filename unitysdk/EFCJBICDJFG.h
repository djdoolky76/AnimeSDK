#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define EFCJBICDJFG_AOLBPOLCJGJ_OFFSET UNITYSDK_OFFSET(0x13A48300)
#define EFCJBICDJFG_CTOR_OFFSET UNITYSDK_OFFSET(0x13A483C0)
#define EFCJBICDJFG_PJLGNEPKOGE_OFFSET UNITYSDK_OFFSET(0x13A48370)

	class EFCJBICDJFG : public ::System::Object
	{
	public:
		::System::UInt32 IHALFHPNNGL; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double CHHDAKCOACO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCJBICDJFG_CTOR_OFFSET))(this);
		}

		::System::Void AOLBPOLCJGJ(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + EFCJBICDJFG_AOLBPOLCJGJ_OFFSET))(this, a1);
		}

		::System::Int64 PJLGNEPKOGE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCJBICDJFG_PJLGNEPKOGE_OFFSET))(this);
		}

	};
