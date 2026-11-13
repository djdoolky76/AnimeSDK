#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBLADJPMCAC_AGMNIALOCIC_OFFSET UNITYSDK_OFFSET(0x19D5E090)
#define BBLADJPMCAC_CTOR_OFFSET UNITYSDK_OFFSET(0x19D5E320)
#define BBLADJPMCAC_IPKIPDHJDNI_OFFSET UNITYSDK_OFFSET(0x19D5E040)
#define BBLADJPMCAC_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x19D5E2C0)

inline static constexpr unsigned int BBLADJPMCAC_TypeDefinitionIndex = 48946;

	class BBLADJPMCAC : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* ELNJIEFDPLO; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLADJPMCAC_CTOR_OFFSET))(this);
		}

		::System::Void IPKIPDHJDNI(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + BBLADJPMCAC_IPKIPDHJDNI_OFFSET))(this, a1);
		}

		::System::Void AGMNIALOCIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBLADJPMCAC_AGMNIALOCIC_OFFSET))(this);
		}

		::System::Void OnGraphStart(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + BBLADJPMCAC_ONGRAPHSTART_OFFSET))(this, a1);
		}

	};
