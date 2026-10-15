#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace System { class Object; }
namespace System { class Random; }

#define LGCICJNMABG_AIJPBJCBKEM_OFFSET UNITYSDK_OFFSET(0xB688530)
#define LGCICJNMABG_CTOR_OFFSET UNITYSDK_OFFSET(0xB688030)
#define LGCICJNMABG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB688120)
#define LGCICJNMABG_HHMMDCAKNAM_OFFSET UNITYSDK_OFFSET(0xB6887E0)
#define LGCICJNMABG_IEEMMJNAPBP_OFFSET UNITYSDK_OFFSET(0xB6885A0)
#define LGCICJNMABG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB6881E0)
#define LGCICJNMABG_KBABMEEBFAM_OFFSET UNITYSDK_OFFSET(0xB688440)
#define LGCICJNMABG_MGGOFDBEIJB_OFFSET UNITYSDK_OFFSET(0xB6886E0)
#define LGCICJNMABG_OFBGMNOLCEG_OFFSET UNITYSDK_OFFSET(0xB688240)
#define LGCICJNMABG_PNHPCALOHDN_OFFSET UNITYSDK_OFFSET(0xB688820)

inline static constexpr unsigned int LGCICJNMABG_TypeDefinitionIndex = 76568;

	class LGCICJNMABG : public ::System::Object
	{
	public:
		::System::Random* OPEOMKLFGHL; // 0x10
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::System::Boolean KOBKJNKBLBM; // 0x28
		::System::Boolean OFBDNGGNLDJ; // 0x29
		::System::Byte _padding0[0x2];
		::System::Single ODJDJIMEDCC; // 0x2C
		::System::Void _ctor(::FDPALAEIHPB* a1, ::BOMFGKDLHIB* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::BOMFGKDLHIB*, ::System::Boolean))((::PBYTE)hIl2Cpp + LGCICJNMABG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_JLANKNHFKCN_OFFSET))(this);
		}

		::System::Void AIJPBJCBKEM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGCICJNMABG_AIJPBJCBKEM_OFFSET))(this, a1);
		}

		::System::Void MGGOFDBEIJB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGCICJNMABG_MGGOFDBEIJB_OFFSET))(this, a1);
		}

		::System::Void IEEMMJNAPBP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGCICJNMABG_IEEMMJNAPBP_OFFSET))(this, a1);
		}

		::System::Void KBABMEEBFAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_KBABMEEBFAM_OFFSET))(this);
		}

		::System::Void OFBGMNOLCEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_OFBGMNOLCEG_OFFSET))(this);
		}

		::System::Void PNHPCALOHDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_PNHPCALOHDN_OFFSET))(this);
		}

		::System::Void HHMMDCAKNAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGCICJNMABG_HHMMDCAKNAM_OFFSET))(this);
		}

	};
