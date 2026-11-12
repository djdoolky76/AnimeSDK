#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DOFPOHPJBGL_ABHOBELFLJC_OFFSET UNITYSDK_OFFSET(0x12DE18D0)
#define DOFPOHPJBGL_CTOR_OFFSET UNITYSDK_OFFSET(0x12DE1960)
#define DOFPOHPJBGL_DABEFMAGJLD_OFFSET UNITYSDK_OFFSET(0x12DE1890)
#define DOFPOHPJBGL_IKNBGBFGMCD_OFFSET UNITYSDK_OFFSET(0x12DE1910)
#define DOFPOHPJBGL_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x12DE17D0)

inline static constexpr unsigned int DOFPOHPJBGL_TypeDefinitionIndex = 78866;

	class DOFPOHPJBGL : public ::System::Object
	{
	public:
		::System::Boolean DIMOMKEJBPD; // 0x10
		::System::Boolean NLIHLPKINEC; // 0x11
		::System::Boolean LKBJHOGEAAI; // 0x12
		::System::Byte _padding0[0x1];
		::System::Int32 NHJHFDNOKMJ; // 0x14
		::System::Int32 OLHGFGLENOH; // 0x18
		::System::Boolean JIFDGNEOBKM; // 0x1C
		::System::Boolean IFACCMDIFDP; // 0x1D
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
