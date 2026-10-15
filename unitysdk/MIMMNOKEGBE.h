#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class AIKCHOLLELG;
class MIMMNOKEGBE;

#define MIMMNOKEGBE_AJBPOOJGLAH_OFFSET UNITYSDK_OFFSET(0xB95F4E0)
#define MIMMNOKEGBE_CBJLPOGLLOG_OFFSET UNITYSDK_OFFSET(0xB95F580)
#define MIMMNOKEGBE_CTOR_OFFSET UNITYSDK_OFFSET(0xB95F7A0)
#define MIMMNOKEGBE_GET_ID_OFFSET UNITYSDK_OFFSET(0xB95F470)
#define MIMMNOKEGBE_LDMNDIDOEEB_OFFSET UNITYSDK_OFFSET(0xB95F640)
#define MIMMNOKEGBE_LHLALAKKKKJ_OFFSET UNITYSDK_OFFSET(0xB95F6E0)
#define MIMMNOKEGBE_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB95F480)

inline static constexpr unsigned int MIMMNOKEGBE_TypeDefinitionIndex = 61403;

	class MIMMNOKEGBE : public ::System::Object
	{
	public:
		::System::UInt32 _ID_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_GET_ID_OFFSET))(this);
		}

		::AIKCHOLLELG* PDAENODHFCM()
		{
			return ((::AIKCHOLLELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_PDAENODHFCM_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* AJBPOOJGLAH()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_AJBPOOJGLAH_OFFSET))(this);
		}

		::RPG::Client::TextID CBJLPOGLLOG()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_CBJLPOGLLOG_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TextID>* LDMNDIDOEEB()
		{
			return ((::Il2CppArray<::RPG::Client::TextID>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_LDMNDIDOEEB_OFFSET))(this);
		}

		static ::System::Boolean LHLALAKKKKJ(::System::UInt32 a1, ::MIMMNOKEGBE* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::MIMMNOKEGBE*))((::PBYTE)hIl2Cpp + MIMMNOKEGBE_LHLALAKKKKJ_OFFSET))(a1, a2);
		}

	};
