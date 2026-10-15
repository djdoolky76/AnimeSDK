#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECAOILCPKLA.h"
#include "unitysdk/JBIAMEODIHF.h"
class KLIKMKFLGLG;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define INNOKICFPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6B4F90)
#define INNOKICFPLN_GDEMMOMHFPF_OFFSET UNITYSDK_OFFSET(0x1C6B5030)
#define INNOKICFPLN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C6B55F0)
#define INNOKICFPLN_PIBGDEAECCM_OFFSET UNITYSDK_OFFSET(0x1C6B5D10)

inline static constexpr unsigned int INNOKICFPLN_TypeDefinitionIndex = 36899;

	class INNOKICFPLN : public ::JBIAMEODIHF
	{
	public:
		::RPG::Client::RPGProfilerMarker* PKCMNIGPGKE; // 0x18
		::System::Collections::Generic::Queue_1<::ECAOILCPKLA>* MNGCFBPCNED; // 0x20
		::System::Void _ctor(::KLIKMKFLGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIKMKFLGLG*))((::PBYTE)hIl2Cpp + INNOKICFPLN_CTOR_OFFSET))(this, a1);
		}

		::System::Void GDEMMOMHFPF(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + INNOKICFPLN_GDEMMOMHFPF_OFFSET))(this, a1, a2);
		}

		::System::Void JLANKNHFKCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INNOKICFPLN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void PIBGDEAECCM(::ECAOILCPKLA a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECAOILCPKLA))((::PBYTE)hIl2Cpp + INNOKICFPLN_PIBGDEAECCM_OFFSET))(this, a1);
		}

	};
