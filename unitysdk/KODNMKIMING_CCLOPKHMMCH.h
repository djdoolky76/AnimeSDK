#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class AJFCABOOKCA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBasePredicateConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define KODNMKIMING_CCLOPKHMMCH_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C71D940)
#define KODNMKIMING_CCLOPKHMMCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C71D850)
#define KODNMKIMING_CCLOPKHMMCH_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C71D980)
#define KODNMKIMING_CCLOPKHMMCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C71C680)

inline static constexpr unsigned int KODNMKIMING_CCLOPKHMMCH_TypeDefinitionIndex = 37408;

	class KODNMKIMING_CCLOPKHMMCH : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + KODNMKIMING_CCLOPKHMMCH_CTOR_OFFSET))(this, a1, a2);
		}

		::AJFCABOOKCA* Invoke(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::AJFCABOOKCA*(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + KODNMKIMING_CCLOPKHMMCH_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::RPG::GameCore::CakeRaceBasePredicateConfig* a1, ::PBGNKMMDBGD* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::RPG::GameCore::CakeRaceBasePredicateConfig*, ::PBGNKMMDBGD*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + KODNMKIMING_CCLOPKHMMCH_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::AJFCABOOKCA* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::AJFCABOOKCA*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + KODNMKIMING_CCLOPKHMMCH_ENDINVOKE_OFFSET))(this, a1);
		}

	};
