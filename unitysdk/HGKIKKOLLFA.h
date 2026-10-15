#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECBFFNKFPDA;
class HGKIKKOLLFA;
class HGKIKKOLLFA_CBEFJLDGFMG;
class HGKIKKOLLFA_OOHAABPLNLD;
class PMGOFCCJEDE;
class POCFKFBIABM;

#define HGKIKKOLLFA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15CAA400)
#define HGKIKKOLLFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x15CAAD20)
#define HGKIKKOLLFA_CTOR_OFFSET UNITYSDK_OFFSET(0x15CAA480)
#define HGKIKKOLLFA_HNAOIKLILCL_OFFSET UNITYSDK_OFFSET(0x15CAA490)
#define HGKIKKOLLFA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15CAA840)
#define HGKIKKOLLFA_LBGDGIOCPFK_OFFSET UNITYSDK_OFFSET(0x15CAA9B0)
#define HGKIKKOLLFA_ODDLBLFDJJM_OFFSET UNITYSDK_OFFSET(0x15CAAAC0)
#define HGKIKKOLLFA_PGCPDNGPMLJ_OFFSET UNITYSDK_OFFSET(0x15CAABF0)

	class HGKIKKOLLFA : public ::System::Object
	{
	public:
		::POCFKFBIABM* ECEOOJALIMG; // 0x10
		::POCFKFBIABM* DLNIGFGLPLJ; // 0x18
		static ::HGKIKKOLLFA_CBEFJLDGFMG** StaticGet_AFBAELBOIMK()
		{
			return (::HGKIKKOLLFA_CBEFJLDGFMG**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x15610);
		}

		static ::HGKIKKOLLFA_OOHAABPLNLD** StaticGet_LJCLINDGLLH()
		{
			return (::HGKIKKOLLFA_OOHAABPLNLD**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x15618);
		}

		static ::Il2CppArray<::POCFKFBIABM*>** StaticGet_APLPBDOFFOA()
		{
			return (::Il2CppArray<::POCFKFBIABM*>**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x15620);
		}

		static ::ECBFFNKFPDA** StaticGet_CEFLOIEBOKD()
		{
			return (::ECBFFNKFPDA**)UnitySDK::FromName("", "HGKIKKOLLFA")->GetStaticField(0x15628);
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
