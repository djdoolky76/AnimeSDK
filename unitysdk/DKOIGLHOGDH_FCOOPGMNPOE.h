#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
class LMIOHCMPBJB;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceBaseTargetSelectorConfig; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define DKOIGLHOGDH_FCOOPGMNPOE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C8430)
#define DKOIGLHOGDH_FCOOPGMNPOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5C83C0)
#define DKOIGLHOGDH_FCOOPGMNPOE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C84C0)
#define DKOIGLHOGDH_FCOOPGMNPOE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C5C7620)

inline static constexpr unsigned int DKOIGLHOGDH_FCOOPGMNPOE_TypeDefinitionIndex = 37430;

	class DKOIGLHOGDH_FCOOPGMNPOE : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + DKOIGLHOGDH_FCOOPGMNPOE_CTOR_OFFSET))(this, a1, a2);
		}

		::LMIOHCMPBJB* Invoke(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4)
		{
			return ((::LMIOHCMPBJB*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + DKOIGLHOGDH_FCOOPGMNPOE_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig* a2, ::PBGNKMMDBGD* a3, ::System::Int32 a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::RPG::GameCore::CakeRaceBaseTargetSelectorConfig*, ::PBGNKMMDBGD*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + DKOIGLHOGDH_FCOOPGMNPOE_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::LMIOHCMPBJB* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::LMIOHCMPBJB*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + DKOIGLHOGDH_FCOOPGMNPOE_ENDINVOKE_OFFSET))(this, a1);
		}

	};
