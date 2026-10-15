#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMFGKDLHIB;
class FDPALAEIHPB;
namespace System { class Object; }
namespace System { class Random; }

#define LGCICJNMABG_AIJPBJCBKEM_OFFSET UNITYSDK_OFFSET(0xB68F130)
#define LGCICJNMABG_CTOR_OFFSET UNITYSDK_OFFSET(0xB68EC20)
#define LGCICJNMABG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB68ED10)
#define LGCICJNMABG_HHMMDCAKNAM_OFFSET UNITYSDK_OFFSET(0xB68F3E0)
#define LGCICJNMABG_IEEMMJNAPBP_OFFSET UNITYSDK_OFFSET(0xB68F1A0)
#define LGCICJNMABG_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB68EDE0)
#define LGCICJNMABG_KBABMEEBFAM_OFFSET UNITYSDK_OFFSET(0xB68F040)
#define LGCICJNMABG_MGGOFDBEIJB_OFFSET UNITYSDK_OFFSET(0xB68F2E0)
#define LGCICJNMABG_OFBGMNOLCEG_OFFSET UNITYSDK_OFFSET(0xB68EE40)
#define LGCICJNMABG_PNHPCALOHDN_OFFSET UNITYSDK_OFFSET(0xB68F420)

inline static constexpr unsigned int LGCICJNMABG_TypeDefinitionIndex = 76569;

	class LGCICJNMABG : public ::System::Object
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x10
		::System::Random* OPEOMKLFGHL; // 0x18
		::BOMFGKDLHIB* PDENFEFCAGN; // 0x20
		::System::Boolean OFBDNGGNLDJ; // 0x28
		::System::Boolean KOBKJNKBLBM; // 0x29
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
