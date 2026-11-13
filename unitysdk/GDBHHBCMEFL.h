#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDBHHBCMEFL_ACCKFPFHKMN_OFFSET UNITYSDK_OFFSET(0x19ECE7E0)
#define GDBHHBCMEFL_BNNKNIJBGPA_OFFSET UNITYSDK_OFFSET(0x19ECE4E0)
#define GDBHHBCMEFL_COCMJJNJHOO_OFFSET UNITYSDK_OFFSET(0x19ECE980)
#define GDBHHBCMEFL_CTOR_OFFSET UNITYSDK_OFFSET(0x19ECE3E0)
#define GDBHHBCMEFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19ECE490)
#define GDBHHBCMEFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19ECE730)
#define GDBHHBCMEFL_TICK_OFFSET UNITYSDK_OFFSET(0x19ECE780)

inline static constexpr unsigned int GDBHHBCMEFL_TypeDefinitionIndex = 54504;

	class GDBHHBCMEFL : public ::GELIALJDFBL
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* GBKJPHPEECD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_TICK_OFFSET))(this, a1);
		}

		::System::Void ACCKFPFHKMN(::System::String* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_ACCKFPFHKMN_OFFSET))(this, a1, a2);
		}

		::System::Void BNNKNIJBGPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_BNNKNIJBGPA_OFFSET))(this);
		}

		::System::Void COCMJJNJHOO(::Il2CppArray<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + GDBHHBCMEFL_COCMJJNJHOO_OFFSET))(this, a1);
		}

	};
