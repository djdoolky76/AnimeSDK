#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKJALKLPNKB;

#define CKJALKLPNKB_CTOR_OFFSET UNITYSDK_OFFSET(0xD758470)
#define CKJALKLPNKB_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xD7585F0)
#define CKJALKLPNKB_GAJGBBFELEL_OFFSET UNITYSDK_OFFSET(0xD758270)
#define CKJALKLPNKB_LCHPEIGGGKJ_OFFSET UNITYSDK_OFFSET(0xD758480)

inline static constexpr unsigned int CKJALKLPNKB_TypeDefinitionIndex = 68231;

	class CKJALKLPNKB : public ::System::Object
	{
	public:
		::System::Boolean POBCBCKMGCE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJALKLPNKB_CTOR_OFFSET))(this);
		}

		static ::CKJALKLPNKB* GAJGBBFELEL()
		{
			return ((::CKJALKLPNKB*(*)())((::PBYTE)hIl2Cpp + CKJALKLPNKB_GAJGBBFELEL_OFFSET))();
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKJALKLPNKB_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void LCHPEIGGGKJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKJALKLPNKB_LCHPEIGGGKJ_OFFSET))(this, a1);
		}

	};
