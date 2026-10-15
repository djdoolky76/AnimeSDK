#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define NJPCMMKOAJE_AOLBPOLCJGJ_OFFSET UNITYSDK_OFFSET(0xBC2A230)
#define NJPCMMKOAJE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC2A2F0)
#define NJPCMMKOAJE_PJLGNEPKOGE_OFFSET UNITYSDK_OFFSET(0xBC2A2A0)

	class NJPCMMKOAJE : public ::System::Object
	{
	public:
		::System::Double CHHDAKCOACO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPCMMKOAJE_CTOR_OFFSET))(this);
		}

		::System::Void AOLBPOLCJGJ(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NJPCMMKOAJE_AOLBPOLCJGJ_OFFSET))(this, a1);
		}

		::System::Int64 PJLGNEPKOGE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPCMMKOAJE_PJLGNEPKOGE_OFFSET))(this);
		}

	};
