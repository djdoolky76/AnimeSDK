#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HGEGFCADEEC_GOBPIMACLEE;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HGEGFCADEEC_CHCKKHBDDFN_OFFSET UNITYSDK_OFFSET(0x15C88510)
#define HGEGFCADEEC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C88010)
#define HGEGFCADEEC_JPJAEBAIBFF_OFFSET UNITYSDK_OFFSET(0x15C88400)
#define HGEGFCADEEC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x15C88AA0)
#define HGEGFCADEEC_NBJFLGNEBED_OFFSET UNITYSDK_OFFSET(0x15C885A0)

inline static constexpr unsigned int HGEGFCADEEC_TypeDefinitionIndex = 69795;

	class HGEGFCADEEC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Action_1<::System::Object*>*>* MGGOBPCCILE; // 0x10
		::System::String* KAMICNALBKI; // 0x18
		::HGEGFCADEEC_GOBPIMACLEE* JLKLHLAPFMA; // 0x20
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGEGFCADEEC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JPJAEBAIBFF(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HGEGFCADEEC_JPJAEBAIBFF_OFFSET))(this, a1);
		}

		::System::Void CHCKKHBDDFN(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + HGEGFCADEEC_CHCKKHBDDFN_OFFSET))(this, a1);
		}

		::System::Void NBJFLGNEBED(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HGEGFCADEEC_NBJFLGNEBED_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGEGFCADEEC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
