#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOBMOAAFGK;
namespace RPG::GameCore { class OverrideFloorConfigRow; }

#define PBNOGIFIKBC_BICOPDKDCJK_OFFSET UNITYSDK_OFFSET(0xBFF5B90)
#define PBNOGIFIKBC_BOLLKKJJGGF_OFFSET UNITYSDK_OFFSET(0xBFF5C20)
#define PBNOGIFIKBC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF5BF0)
#define PBNOGIFIKBC_JCNIHCGPEDB_OFFSET UNITYSDK_OFFSET(0xBFF5B40)
#define PBNOGIFIKBC_KKKNPNBEAGL_OFFSET UNITYSDK_OFFSET(0xBFF5AF0)
#define PBNOGIFIKBC_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0xBFF5C60)
#define PBNOGIFIKBC_OJAKJDAJCNN_OFFSET UNITYSDK_OFFSET(0xBFF5AA0)

	class PBNOGIFIKBC : public ::System::Object
	{
	public:
		::RPG::GameCore::OverrideFloorConfigRow* IBPBJBOKKMF; // 0x10
		::MAOBMOAAFGK* MKPECJPHOEK; // 0x18
		::System::Void _ctor(::RPG::GameCore::OverrideFloorConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::OverrideFloorConfigRow*))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 OJAKJDAJCNN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_OJAKJDAJCNN_OFFSET))(this);
		}

		::System::UInt32 KKKNPNBEAGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_KKKNPNBEAGL_OFFSET))(this);
		}

		::System::UInt32 JCNIHCGPEDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_JCNIHCGPEDB_OFFSET))(this);
		}

		::System::Boolean BICOPDKDCJK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_BICOPDKDCJK_OFFSET))(this);
		}

		::MAOBMOAAFGK* BOLLKKJJGGF()
		{
			return ((::MAOBMOAAFGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_BOLLKKJJGGF_OFFSET))(this);
		}

		::System::Boolean MNBBCAMDGDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBNOGIFIKBC_MNBBCAMDGDI_OFFSET))(this);
		}

	};
