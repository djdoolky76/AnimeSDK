#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JICKEGCLBMC.h"
namespace System { class Version; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IDDNILEJNID_CTOR_OFFSET UNITYSDK_OFFSET(0x15EAA020)
#define IDDNILEJNID_GODCHGIMIAJ_OFFSET UNITYSDK_OFFSET(0x15EA9C10)
#define IDDNILEJNID_JIAFJMICIGF_OFFSET UNITYSDK_OFFSET(0x15EA9F60)
#define IDDNILEJNID_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15EA9A70)

inline static constexpr unsigned int IDDNILEJNID_TypeDefinitionIndex = 82248;

	class IDDNILEJNID : public ::JICKEGCLBMC
	{
	public:
		::Il2CppArray<::System::Boolean>* OLMHNPNMACN; // 0x28
		::Il2CppArray<::System::Int32>* KJMDDAHEODL; // 0x30
		::Il2CppArray<::System::Int32>* FIIKLMKCFNB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDNILEJNID_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::System::Collections::Generic::List_1<::System::Version*>* a1, ::Il2CppArray<::Il2CppArray<::System::Int32>*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Version*>*, ::Il2CppArray<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + IDDNILEJNID_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::Int32>* GODCHGIMIAJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + IDDNILEJNID_GODCHGIMIAJ_OFFSET))(this, a1, a2);
		}

		::System::Int32 JIAFJMICIGF()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDNILEJNID_JIAFJMICIGF_OFFSET))(this);
		}

	};
