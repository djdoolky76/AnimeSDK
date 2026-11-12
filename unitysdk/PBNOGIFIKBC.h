#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOBMOAAFGK;
namespace RPG::GameCore { class OverrideFloorConfigRow; }

#define PBNOGIFIKBC_BICOPDKDCJK_OFFSET UNITYSDK_OFFSET(0xC8FA410)
#define PBNOGIFIKBC_BOLLKKJJGGF_OFFSET UNITYSDK_OFFSET(0xC8FA4A0)
#define PBNOGIFIKBC_CTOR_OFFSET UNITYSDK_OFFSET(0xC8FA470)
#define PBNOGIFIKBC_JCNIHCGPEDB_OFFSET UNITYSDK_OFFSET(0xC8FA3C0)
#define PBNOGIFIKBC_KKKNPNBEAGL_OFFSET UNITYSDK_OFFSET(0xC8FA370)
#define PBNOGIFIKBC_MNBBCAMDGDI_OFFSET UNITYSDK_OFFSET(0xC8FA4E0)
#define PBNOGIFIKBC_OJAKJDAJCNN_OFFSET UNITYSDK_OFFSET(0xC8FA320)

inline static constexpr unsigned int PBNOGIFIKBC_TypeDefinitionIndex = 65087;

	class PBNOGIFIKBC : public ::System::Object
	{
	public:
		::MAOBMOAAFGK* MKPECJPHOEK; // 0x10
		::RPG::GameCore::OverrideFloorConfigRow* IBPBJBOKKMF; // 0x18
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
