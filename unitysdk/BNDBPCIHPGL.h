#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JDKNLNLGODN.h"
#include "unitysdk/RPG/Client/WorkGroupType.h"
class JDKNLNLGODN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BNDBPCIHPGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0B00)
#define BNDBPCIHPGL_EOJKNKMNGJB_OFFSET UNITYSDK_OFFSET(0xBDC4A20)
#define BNDBPCIHPGL_GKKIHAHBEEG_OFFSET UNITYSDK_OFFSET(0xBDC4CC0)
#define BNDBPCIHPGL_HFNKNOLMOAG_OFFSET UNITYSDK_OFFSET(0xBDC4CD0)
#define BNDBPCIHPGL_HPHOHGDKPMJ_OFFSET UNITYSDK_OFFSET(0xBDC0AB0)
#define BNDBPCIHPGL_KJMCBCCDOFM_OFFSET UNITYSDK_OFFSET(0xBDC4AE0)
#define BNDBPCIHPGL_LCIDMLKJENK_OFFSET UNITYSDK_OFFSET(0xBDC49E0)
#define BNDBPCIHPGL_ONSTARTLOADING_OFFSET UNITYSDK_OFFSET(0xBDC4840)
#define BNDBPCIHPGL_ONUNINIT_OFFSET UNITYSDK_OFFSET(0xBDC4730)

inline static constexpr unsigned int BNDBPCIHPGL_TypeDefinitionIndex = 61057;

	class BNDBPCIHPGL : public ::JDKNLNLGODN
	{
	public:
		::System::Collections::Generic::List_1<::JDKNLNLGODN*>* OFOJIMCMCDK; // 0x50
		::RPG::Client::WorkGroupType PJNDKBNAGBA; // 0x58
		::System::Int32 FJOBEKIPOOD; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_CTOR_OFFSET))(this);
		}

		::System::Void HPHOHGDKPMJ(::RPG::Client::WorkGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::WorkGroupType))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_HPHOHGDKPMJ_OFFSET))(this, a1);
		}

		::System::Void OnUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_ONUNINIT_OFFSET))(this);
		}

		::System::Void OnStartLoading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_ONSTARTLOADING_OFFSET))(this);
		}

		::System::Void LCIDMLKJENK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_LCIDMLKJENK_OFFSET))(this);
		}

		::System::Void EOJKNKMNGJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_EOJKNKMNGJB_OFFSET))(this);
		}

		::System::Void KJMCBCCDOFM(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_KJMCBCCDOFM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::JDKNLNLGODN*>* GKKIHAHBEEG()
		{
			return ((::System::Collections::Generic::List_1<::JDKNLNLGODN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_GKKIHAHBEEG_OFFSET))(this);
		}

		::RPG::Client::WorkGroupType HFNKNOLMOAG()
		{
			return ((::RPG::Client::WorkGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBPCIHPGL_HFNKNOLMOAG_OFFSET))(this);
		}

	};
