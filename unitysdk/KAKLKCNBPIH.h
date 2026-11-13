#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIMDJOBJCNE.h"
class JCBMNCANHAP;
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class String; }

#define KAKLKCNBPIH_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x19DB2C80)
#define KAKLKCNBPIH_CTOR_OFFSET UNITYSDK_OFFSET(0x19DB30C0)
#define KAKLKCNBPIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19DB2BD0)
#define KAKLKCNBPIH_DLFDHOJLEBG_OFFSET UNITYSDK_OFFSET(0x19DB3050)
#define KAKLKCNBPIH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x19DB2E40)
#define KAKLKCNBPIH_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x19DB2C40)
#define KAKLKCNBPIH_MILDAIHIGAI_OFFSET UNITYSDK_OFFSET(0x19DB30B0)
#define KAKLKCNBPIH_MOCPCLHLAHK_OFFSET UNITYSDK_OFFSET(0x19DB2CC0)
#define KAKLKCNBPIH_NGIDAKDKANM_OFFSET UNITYSDK_OFFSET(0x19DB30A0)

inline static constexpr unsigned int KAKLKCNBPIH_TypeDefinitionIndex = 61580;

	class KAKLKCNBPIH : public ::FIMDJOBJCNE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_DISPOSE_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Void MOCPCLHLAHK(::RPG::GameCore::CharacterInputData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::System::Single))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_MOCPCLHLAHK_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLFDHOJLEBG(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_DLFDHOJLEBG_OFFSET))(this, a1);
		}

		::System::Boolean NGIDAKDKANM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_NGIDAKDKANM_OFFSET))(this);
		}

		::JCBMNCANHAP* MILDAIHIGAI()
		{
			return ((::JCBMNCANHAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKLKCNBPIH_MILDAIHIGAI_OFFSET))(this);
		}

	};
