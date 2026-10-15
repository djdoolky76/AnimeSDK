#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JICKEGCLBMC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1ECC00)
#define JICKEGCLBMC_GODCHGIMIAJ_OFFSET UNITYSDK_OFFSET(0xB1ECBB0)
#define JICKEGCLBMC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB1ECB40)

	class JICKEGCLBMC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Version*>* BLICIKDLKOC; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Int32>*>* EFHHHMFJOOA; // 0x18
		::System::Int32 JDIIOGHKECL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JICKEGCLBMC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + JICKEGCLBMC_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* GODCHGIMIAJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JICKEGCLBMC_GODCHGIMIAJ_OFFSET))(this, a1, a2);
		}

	};
