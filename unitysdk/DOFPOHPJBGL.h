#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOFPOHPJBGL_ABHOBELFLJC_OFFSET UNITYSDK_OFFSET(0x11FE7FE0)
#define DOFPOHPJBGL_CTOR_OFFSET UNITYSDK_OFFSET(0x11FE8070)
#define DOFPOHPJBGL_DABEFMAGJLD_OFFSET UNITYSDK_OFFSET(0x11FE7FA0)
#define DOFPOHPJBGL_IKNBGBFGMCD_OFFSET UNITYSDK_OFFSET(0x11FE8020)
#define DOFPOHPJBGL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x11FE7EE0)

	class DOFPOHPJBGL : public ::System::Object
	{
	public:
		::System::Boolean IFACCMDIFDP; // 0x10
		::System::Boolean NLIHLPKINEC; // 0x11
		::System::Byte _padding0[0x2];
		::System::Int32 OLHGFGLENOH; // 0x14
		::System::Int32 NHJHFDNOKMJ; // 0x18
		::System::Boolean LKBJHOGEAAI; // 0x1C
		::System::Boolean DIMOMKEJBPD; // 0x1D
		::System::Boolean JIFDGNEOBKM; // 0x1E
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
