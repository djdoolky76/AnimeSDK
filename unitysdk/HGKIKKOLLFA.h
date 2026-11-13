#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECBFFNKFPDA;
class HGKIKKOLLFA;
class HGKIKKOLLFA_CBEFJLDGFMG;
class HGKIKKOLLFA_OOHAABPLNLD;
class PMGOFCCJEDE;
class POCFKFBIABM;

#define HGKIKKOLLFA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C451E80)
#define HGKIKKOLLFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4527A0)
#define HGKIKKOLLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C451F00)
#define HGKIKKOLLFA_HNAOIKLILCL_OFFSET UNITYSDK_OFFSET(0x1C451F10)
#define HGKIKKOLLFA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1C4522C0)
#define HGKIKKOLLFA_LBGDGIOCPFK_OFFSET UNITYSDK_OFFSET(0x1C452430)
#define HGKIKKOLLFA_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x1C452540)
#define HGKIKKOLLFA_PGCPDNGPMLJ_OFFSET UNITYSDK_OFFSET(0x1C452670)

inline static constexpr unsigned int HGKIKKOLLFA_TypeDefinitionIndex = 73490;

	class HGKIKKOLLFA : public ::System::Object
	{
	public:
		::POCFKFBIABM* DLNIGFGLPLJ; // 0x10
		::POCFKFBIABM* ECEOOJALIMG; // 0x18
		static ::HGKIKKOLLFA_OOHAABPLNLD** StaticGet_LJCLINDGLLH()
		{
			return (::HGKIKKOLLFA_OOHAABPLNLD**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x73B10);
		}

		static ::HGKIKKOLLFA_CBEFJLDGFMG** StaticGet_AFBAELBOIMK()
		{
			return (::HGKIKKOLLFA_CBEFJLDGFMG**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x73B18);
		}

		static ::ECBFFNKFPDA** StaticGet_CEFLOIEBOKD()
		{
			return (::ECBFFNKFPDA**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x73B20);
		}

		static ::Il2CppArray<::POCFKFBIABM*>** StaticGet_APLPBDOFFOA()
		{
			return (::Il2CppArray<::POCFKFBIABM*>**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x73B28);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGKIKKOLLFA_CCTOR_OFFSET))();
		}

		static ::HGKIKKOLLFA* BPLPBPMEODA()
		{
			return ((::HGKIKKOLLFA*(*)())((::PBYTE)hIl2Cpp + HGKIKKOLLFA_BPLPBPMEODA_OFFSET))();
		}

		::System::Void HNAOIKLILCL(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_HNAOIKLILCL_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void LBGDGIOCPFK(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_LBGDGIOCPFK_OFFSET))(this, a1);
		}

		::System::Boolean ODDLBLFDJJM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_ODDLBLFDJJM_OFFSET))(this);
		}

		::System::Single PGCPDNGPMLJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HGKIKKOLLFA_PGCPDNGPMLJ_OFFSET))(this);
		}

	};
