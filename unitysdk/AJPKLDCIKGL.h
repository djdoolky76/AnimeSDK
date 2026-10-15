#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJPKLDCIKGL;
class GPLMLPKBGGE;
class NBILAHJEBCL;

#define AJPKLDCIKGL_AELHCAGJOBL_OFFSET UNITYSDK_OFFSET(0x1C5104D0)
#define AJPKLDCIKGL_CAJLBMMOCJD_OFFSET UNITYSDK_OFFSET(0x1C5105C0)
#define AJPKLDCIKGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C510520)
#define AJPKLDCIKGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C5106E0)
#define AJPKLDCIKGL_GET_DIYDATA_OFFSET UNITYSDK_OFFSET(0x1C5102D0)
#define AJPKLDCIKGL_GET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C5102B0)
#define AJPKLDCIKGL_IPIMAEGOGCH_OFFSET UNITYSDK_OFFSET(0x1C510480)
#define AJPKLDCIKGL_MMAEFIMHBAC_OFFSET UNITYSDK_OFFSET(0x1C5102F0)
#define AJPKLDCIKGL_SET_DIYDATA_OFFSET UNITYSDK_OFFSET(0x1C5102E0)
#define AJPKLDCIKGL_SET_TEMPLATE_OFFSET UNITYSDK_OFFSET(0x1C5102C0)

inline static constexpr unsigned int AJPKLDCIKGL_TypeDefinitionIndex = 41863;

	class AJPKLDCIKGL : public ::System::Object
	{
	public:
		::NBILAHJEBCL* _Template_k__BackingField; // 0x10
		::GPLMLPKBGGE* _DiyData_k__BackingField; // 0x18
		::System::Void _ctor(::NBILAHJEBCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBILAHJEBCL*))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_CTOR_OFFSET))(this, a1);
		}

		::NBILAHJEBCL* get_Template()
		{
			return ((::NBILAHJEBCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_GET_TEMPLATE_OFFSET))(this);
		}

		::System::Void set_Template(::NBILAHJEBCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBILAHJEBCL*))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_SET_TEMPLATE_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* get_DiyData()
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_GET_DIYDATA_OFFSET))(this);
		}

		::System::Void set_DiyData(::GPLMLPKBGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_SET_DIYDATA_OFFSET))(this, a1);
		}

		::System::UInt32 MMAEFIMHBAC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_MMAEFIMHBAC_OFFSET))(this);
		}

		::System::UInt32 IPIMAEGOGCH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_IPIMAEGOGCH_OFFSET))(this);
		}

		::System::UInt32 AELHCAGJOBL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_AELHCAGJOBL_OFFSET))(this);
		}

		::System::Void CAJLBMMOCJD(::GPLMLPKBGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_CAJLBMMOCJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::AJPKLDCIKGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AJPKLDCIKGL*))((::PBYTE)hIl2Cpp + AJPKLDCIKGL_EQUALS_OFFSET))(this, a1);
		}

	};
