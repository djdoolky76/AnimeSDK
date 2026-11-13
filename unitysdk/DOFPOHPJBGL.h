#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOFPOHPJBGL_ABHOBELFLJC_OFFSET UNITYSDK_OFFSET(0x191A6170)
#define DOFPOHPJBGL_CTOR_OFFSET UNITYSDK_OFFSET(0x191A6200)
#define DOFPOHPJBGL_DABEFMAGJLD_OFFSET UNITYSDK_OFFSET(0x191A6130)
#define DOFPOHPJBGL_IKNBGBFGMCD_OFFSET UNITYSDK_OFFSET(0x191A61B0)
#define DOFPOHPJBGL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x191A6070)

inline static constexpr unsigned int DOFPOHPJBGL_TypeDefinitionIndex = 78865;

	class DOFPOHPJBGL : public ::System::Object
	{
	public:
		::System::Boolean JIFDGNEOBKM; // 0x10
		::System::Boolean NLIHLPKINEC; // 0x11
		::System::Boolean LKBJHOGEAAI; // 0x12
		::System::Boolean DIMOMKEJBPD; // 0x13
		::System::Boolean IFACCMDIFDP; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 OLHGFGLENOH; // 0x18
		::System::Int32 NHJHFDNOKMJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFPOHPJBGL_CTOR_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFPOHPJBGL_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Boolean DABEFMAGJLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFPOHPJBGL_DABEFMAGJLD_OFFSET))(this);
		}

		::System::Boolean ABHOBELFLJC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFPOHPJBGL_ABHOBELFLJC_OFFSET))(this);
		}

		::System::Int32 IKNBGBFGMCD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOFPOHPJBGL_IKNBGBFGMCD_OFFSET))(this);
		}

	};
