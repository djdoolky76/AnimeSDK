#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BGABPOKKOGD.h"
class ANJOILDLGOC;
class EOHOBJGGMNP;
class IFEGGGECMCG;

#define IFEGGGECMCG_AHMKIKJKGCJ_OFFSET UNITYSDK_OFFSET(0x15F00070)
#define IFEGGGECMCG_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15EFFA80)
#define IFEGGGECMCG_CLNLPJNNPNJ_1_OFFSET UNITYSDK_OFFSET(0x15EFFEA0)
#define IFEGGGECMCG_CLNLPJNNPNJ_OFFSET UNITYSDK_OFFSET(0x15EFFFE0)
#define IFEGGGECMCG_CTOR_OFFSET UNITYSDK_OFFSET(0x15EFFB10)
#define IFEGGGECMCG_FJPIGOJAMIG_OFFSET UNITYSDK_OFFSET(0x15F00230)
#define IFEGGGECMCG_FLHBJCMLAAI_OFFSET UNITYSDK_OFFSET(0x15F00180)
#define IFEGGGECMCG_HFJDGLDEAEB_OFFSET UNITYSDK_OFFSET(0x15EFFB20)
#define IFEGGGECMCG_JIFDPGHJHHN_OFFSET UNITYSDK_OFFSET(0x15EFFF70)
#define IFEGGGECMCG_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x15F00110)
#define IFEGGGECMCG_OPAFKKLJKNC_OFFSET UNITYSDK_OFFSET(0x15EFFC80)
#define IFEGGGECMCG_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x15EFFF00)

inline static constexpr unsigned int IFEGGGECMCG_TypeDefinitionIndex = 72125;

	class IFEGGGECMCG : public ::System::Object
	{
	public:
		::EOHOBJGGMNP* HHNHFJPNACD; // 0x10
		::EOHOBJGGMNP* BLHBDDDJMKD; // 0x18
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
