#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKGNKFKLIJK.h"
#include "unitysdk/System/Object.h"
class OAIPJANPCEK;
namespace RPG::GameCore { class ChenLingFesItemRuleGroupRow; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define LEANJDBILDH_BEMDNIPJHAG_1_OFFSET UNITYSDK_OFFSET(0xB644660)
#define LEANJDBILDH_BEMDNIPJHAG_OFFSET UNITYSDK_OFFSET(0xB6443E0)
#define LEANJDBILDH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6442B0)
#define LEANJDBILDH_DBFGADIOBHE_OFFSET UNITYSDK_OFFSET(0xB644B40)
#define LEANJDBILDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB644300)
#define LEANJDBILDH_FDJDGICFGIP_OFFSET UNITYSDK_OFFSET(0xB644490)
#define LEANJDBILDH_FOKDNJCCEOJ_OFFSET UNITYSDK_OFFSET(0xB644A50)
#define LEANJDBILDH_FPIBEOGIFLO_OFFSET UNITYSDK_OFFSET(0xB644C30)
#define LEANJDBILDH_MMIIPNDLAPI_OFFSET UNITYSDK_OFFSET(0xB644980)
#define LEANJDBILDH_NKFKBIGPJDB_OFFSET UNITYSDK_OFFSET(0xB6448E0)
#define LEANJDBILDH_PKOEHOGLCND_OFFSET UNITYSDK_OFFSET(0xB644820)

inline static constexpr unsigned int LEANJDBILDH_TypeDefinitionIndex = 77767;

	class LEANJDBILDH : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::BKGNKFKLIJK>* LILFILFDLHO; // 0x10
		::OAIPJANPCEK* PDENFEFCAGN; // 0x18
		::RPG::GameCore::ChenLingFesItemRuleGroupRow* OONJJEELBFI; // 0x20
		::System::Void _ctor(::OAIPJANPCEK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OAIPJANPCEK*))((::PBYTE)hIl2Cpp + LEANJDBILDH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANJDBILDH_DISPOSE_OFFSET))(this);
		}

		::System::Void BEMDNIPJHAG(::BKGNKFKLIJK a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKGNKFKLIJK))((::PBYTE)hIl2Cpp + LEANJDBILDH_BEMDNIPJHAG_OFFSET))(this, a1);
		}

		::System::Void BEMDNIPJHAG_1(::System::UInt32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LEANJDBILDH_BEMDNIPJHAG_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void PKOEHOGLCND(::BKGNKFKLIJK a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKGNKFKLIJK))((::PBYTE)hIl2Cpp + LEANJDBILDH_PKOEHOGLCND_OFFSET))(this, a1);
		}

		::System::Boolean NKFKBIGPJDB(::BKGNKFKLIJK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BKGNKFKLIJK))((::PBYTE)hIl2Cpp + LEANJDBILDH_NKFKBIGPJDB_OFFSET))(this, a1);
		}

		::System::Void MMIIPNDLAPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANJDBILDH_MMIIPNDLAPI_OFFSET))(this);
		}

		::System::Void FOKDNJCCEOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEANJDBILDH_FOKDNJCCEOJ_OFFSET))(this, a1);
		}

		::System::UInt32 DBFGADIOBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANJDBILDH_DBFGADIOBHE_OFFSET))(this);
		}

		::System::Void FDJDGICFGIP(::BKGNKFKLIJK a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKGNKFKLIJK))((::PBYTE)hIl2Cpp + LEANJDBILDH_FDJDGICFGIP_OFFSET))(this, a1);
		}

		::System::Boolean FPIBEOGIFLO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEANJDBILDH_FPIBEOGIFLO_OFFSET))(this);
		}

	};
