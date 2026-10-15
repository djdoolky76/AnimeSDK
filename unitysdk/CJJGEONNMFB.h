#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JBIAMEODIHF.h"
class AKHGJJKOKHO;
class KLIKMKFLGLG;
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define CJJGEONNMFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C554540)
#define CJJGEONNMFB_DFMPFLDKKHB_1_OFFSET UNITYSDK_OFFSET(0x1C553F20)
#define CJJGEONNMFB_DFMPFLDKKHB_OFFSET UNITYSDK_OFFSET(0x1C5A7EE0)
#define CJJGEONNMFB_NJHKOILGAAK_OFFSET UNITYSDK_OFFSET(0x1C5537B0)

inline static constexpr unsigned int CJJGEONNMFB_TypeDefinitionIndex = 36900;

	class CJJGEONNMFB : public ::JBIAMEODIHF
	{
	public:
		::RPG::Client::RPGProfilerMarker* PKCMNIGPGKE; // 0x18
		::System::Void _ctor(::KLIKMKFLGLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLIKMKFLGLG*))((::PBYTE)hIl2Cpp + CJJGEONNMFB_CTOR_OFFSET))(this, a1);
		}

		::System::Void DFMPFLDKKHB(::AKHGJJKOKHO* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::AKHGJJKOKHO*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CJJGEONNMFB_DFMPFLDKKHB_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DFMPFLDKKHB_1(::System::UInt32 a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CJJGEONNMFB_DFMPFLDKKHB_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NJHKOILGAAK(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1, ::System::String* a2, ::Il2CppArray<::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + CJJGEONNMFB_NJHKOILGAAK_OFFSET))(this, a1, a2, a3);
		}

	};
