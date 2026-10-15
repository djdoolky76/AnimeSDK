#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOFPOHPJBGL_ABHOBELFLJC_OFFSET UNITYSDK_OFFSET(0x11FE2C00)
#define DOFPOHPJBGL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE2C90)
#define DOFPOHPJBGL_DABEFMAGJLD_OFFSET UNITYSDK_OFFSET(0x11FE2BC0)
#define DOFPOHPJBGL_IKNBGBFGMCD_OFFSET UNITYSDK_OFFSET(0x11FE2C40)
#define DOFPOHPJBGL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x11FE2B00)

inline static constexpr unsigned int DOFPOHPJBGL_TypeDefinitionIndex = 76534;

	class DOFPOHPJBGL : public ::System::Object
	{
	public:
		::System::Boolean DIMOMKEJBPD; // 0x10
		::System::Boolean LKBJHOGEAAI; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 NHJHFDNOKMJ; // 0x14
		::System::Int32 OLHGFGLENOH; // 0x18
		::System::Boolean JIFDGNEOBKM; // 0x1C
		::System::Boolean NLIHLPKINEC; // 0x1D
		::System::Boolean IFACCMDIFDP; // 0x1E
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
