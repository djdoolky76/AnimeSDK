#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BGABPOKKOGD.h"
class ANJOILDLGOC;
class EOHOBJGGMNP;
class IFEGGGECMCG;

#define IFEGGGECMCG_AHMKIKJKGCJ_OFFSET UNITYSDK_OFFSET(0x15F0C030)
#define IFEGGGECMCG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15F0BA40)
#define IFEGGGECMCG_CLNLPJNNPNJ_1_OFFSET UNITYSDK_OFFSET(0x15F0BE60)
#define IFEGGGECMCG_CLNLPJNNPNJ_OFFSET UNITYSDK_OFFSET(0x15F0BFA0)
#define IFEGGGECMCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15F0BAD0)
#define IFEGGGECMCG_FJPIGOJAMIG_OFFSET UNITYSDK_OFFSET(0x15F0C1F0)
#define IFEGGGECMCG_FLHBJCMLAAI_OFFSET UNITYSDK_OFFSET(0x15F0C140)
#define IFEGGGECMCG_HFJDGLDEAEB_OFFSET UNITYSDK_OFFSET(0x15F0BAE0)
#define IFEGGGECMCG_JIFDPGHJHHN_OFFSET UNITYSDK_OFFSET(0x15F0BF30)
#define IFEGGGECMCG_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x15F0C0D0)
#define IFEGGGECMCG_OPAFKKLJKNC_OFFSET UNITYSDK_OFFSET(0x15F0BC40)
#define IFEGGGECMCG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15F0BEC0)

inline static constexpr unsigned int IFEGGGECMCG_TypeDefinitionIndex = 72126;

	class IFEGGGECMCG : public ::System::Object
	{
	public:
		::EOHOBJGGMNP* BLHBDDDJMKD; // 0x10
		::EOHOBJGGMNP* HHNHFJPNACD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGGGECMCG_CTOR_OFFSET))(this);
		}

		static ::IFEGGGECMCG* BPLPBPMEODA(::System::Single a1)
		{
			return ((::IFEGGGECMCG*(*)(::System::Single))((::PBYTE)hIl2Cpp + IFEGGGECMCG_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void OPAFKKLJKNC(::ANJOILDLGOC* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::ANJOILDLGOC*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEGGGECMCG_OPAFKKLJKNC_OFFSET))(this, a1, a2);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGGGECMCG_PJPFIHFAHGO_OFFSET))(this);
		}

		::ANJOILDLGOC* JIFDPGHJHHN(::BGABPOKKOGD a1)
		{
			return ((::ANJOILDLGOC*(*)(::PVOID, ::BGABPOKKOGD))((::PBYTE)hIl2Cpp + IFEGGGECMCG_JIFDPGHJHHN_OFFSET))(this, a1);
		}

		::System::Void AHMKIKJKGCJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEGGGECMCG_AHMKIKJKGCJ_OFFSET))(this, a1);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEGGGECMCG_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Int32 FLHBJCMLAAI(::BGABPOKKOGD a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BGABPOKKOGD))((::PBYTE)hIl2Cpp + IFEGGGECMCG_FLHBJCMLAAI_OFFSET))(this, a1);
		}

		::System::Void FJPIGOJAMIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFEGGGECMCG_FJPIGOJAMIG_OFFSET))(this);
		}

		static ::EOHOBJGGMNP* HFJDGLDEAEB(::System::Boolean a1, ::System::Single a2)
		{
			return ((::EOHOBJGGMNP*(*)(::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + IFEGGGECMCG_HFJDGLDEAEB_OFFSET))(a1, a2);
		}

		::EOHOBJGGMNP* CLNLPJNNPNJ(::BGABPOKKOGD a1)
		{
			return ((::EOHOBJGGMNP*(*)(::PVOID, ::BGABPOKKOGD))((::PBYTE)hIl2Cpp + IFEGGGECMCG_CLNLPJNNPNJ_OFFSET))(this, a1);
		}

		::EOHOBJGGMNP* CLNLPJNNPNJ_1(::System::Boolean a1)
		{
			return ((::EOHOBJGGMNP*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFEGGGECMCG_CLNLPJNNPNJ_1_OFFSET))(this, a1);
		}

	};
