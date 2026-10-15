#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECNKKAHAOEN;
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDBPIOPBHID_AMIBDMAFHBA_OFFSET UNITYSDK_OFFSET(0xC761C00)
#define CDBPIOPBHID_CLMIFGMPLBN_OFFSET UNITYSDK_OFFSET(0xC761750)
#define CDBPIOPBHID_CTOR_OFFSET UNITYSDK_OFFSET(0xC761C10)
#define CDBPIOPBHID_NLCBLNNGOCH_OFFSET UNITYSDK_OFFSET(0xC7618E0)
#define CDBPIOPBHID_OKDOHDJOPBM_OFFSET UNITYSDK_OFFSET(0xC761A70)

	class CDBPIOPBHID : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::ECNKKAHAOEN*>* PFELNIJOPBO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBPIOPBHID_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ICharacterSkillRowData* CLMIFGMPLBN(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDBPIOPBHID_CLMIFGMPLBN_OFFSET))(this, a1);
		}

		::RPG::GameCore::ICharacterSkillRowData* NLCBLNNGOCH(::System::String* a1)
		{
			return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CDBPIOPBHID_NLCBLNNGOCH_OFFSET))(this, a1);
		}

		::System::Void OKDOHDJOPBM(::System::UInt32 a1, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::ICharacterSkillRowData*>*))((::PBYTE)hIl2Cpp + CDBPIOPBHID_OKDOHDJOPBM_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::ECNKKAHAOEN*>* AMIBDMAFHBA()
		{
			return ((::System::Collections::Generic::List_1<::ECNKKAHAOEN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDBPIOPBHID_AMIBDMAFHBA_OFFSET))(this);
		}

	};
