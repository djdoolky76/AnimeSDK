#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GDMONJOAKHD;
class LJFHKAJPFNE;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGNCEPPGLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0xCF3B510)
#define AGNCEPPGLBJ_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0xCF3A7C0)
#define AGNCEPPGLBJ_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xCF3AE30)
#define AGNCEPPGLBJ_LLLDCDEIBIM_OFFSET UNITYSDK_OFFSET(0xCF3A8E0)

inline static constexpr unsigned int AGNCEPPGLBJ_TypeDefinitionIndex = 73936;

	class AGNCEPPGLBJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::GDMONJOAKHD*>* LPIBDLKBGKL; // 0x10
		::System::Collections::Generic::List_1<::GDMONJOAKHD*>* GOHNCBINDCI; // 0x18
		::System::Collections::Generic::List_1<::GDMONJOAKHD*>* OBLMEGIMIJI; // 0x20
		::System::Collections::Generic::List_1<::GDMONJOAKHD*>* AIKFNODPNMA; // 0x28
		::System::Int32 FFJJHDLMFHF; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNCEPPGLBJ_CTOR_OFFSET))(this);
		}

		::System::Void JIGJDOFEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNCEPPGLBJ_JIGJDOFEJMI_OFFSET))(this);
		}

		::System::Void LLLDCDEIBIM(::UnityEngine::Vector3 a1, ::System::Single a2, ::GDMONJOAKHD* a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::GDMONJOAKHD*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGNCEPPGLBJ_LLLDCDEIBIM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KHNCMBEFIKI(::LJFHKAJPFNE* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LJFHKAJPFNE*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AGNCEPPGLBJ_KHNCMBEFIKI_OFFSET))(this, a1, a2);
		}

	};
