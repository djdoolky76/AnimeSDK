#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AssetState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnSceneOperationDelegate; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AsyncOperation; }
namespace UnityEngine { class Coroutine; }

#define NJCHNLINLMK_CAMDJAAPEAO_OFFSET UNITYSDK_OFFSET(0xBC09C80)
#define NJCHNLINLMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBC09960)
#define NJCHNLINLMK_EBLEKIGBAAL_OFFSET UNITYSDK_OFFSET(0xBC09A10)
#define NJCHNLINLMK_FHMNHMCAIDG_OFFSET UNITYSDK_OFFSET(0xBC0A290)
#define NJCHNLINLMK_GCOEDINNCHN_OFFSET UNITYSDK_OFFSET(0xBC0A140)
#define NJCHNLINLMK_HNFHNLFJECJ_OFFSET UNITYSDK_OFFSET(0xBC09E30)
#define NJCHNLINLMK_IBNCKHHDOKN_OFFSET UNITYSDK_OFFSET(0xBC09D60)
#define NJCHNLINLMK_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0xBC0A320)
#define NJCHNLINLMK_KHOBMCCIBOP_OFFSET UNITYSDK_OFFSET(0xBC0A200)
#define NJCHNLINLMK_MMCKHIHJOEH_OFFSET UNITYSDK_OFFSET(0xBC0A3E0)
#define NJCHNLINLMK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xBC099A0)

	class NJCHNLINLMK : public ::System::Object
	{
	public:
		::UnityEngine::AsyncOperation* NKPBLHIHMJF; // 0x10
		::RPG::Client::OnSceneOperationDelegate* GPGHPPCJLHK; // 0x18
		::UnityEngine::Coroutine* FDNDAEMBJJE; // 0x20
		::System::String* OJHKKOCDICM; // 0x28
		::System::String* FCDOILFDIAB; // 0x30
		::RPG::Client::OnSceneOperationDelegate* BBDBPAKHCCG; // 0x38
		::System::Boolean JCCCPJMDBMB; // 0x40
		::System::Boolean OJNDJLMMGDO; // 0x41
		::System::Byte _padding0[0x2];
		::System::Single KDGNDNJBIOE; // 0x44
		::RPG::Client::AssetState BJHBEJBBPBI; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_CTOR_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Void EBLEKIGBAAL(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + NJCHNLINLMK_EBLEKIGBAAL_OFFSET))(this, a1, a2);
		}

		::System::Void HNFHNLFJECJ(::System::String* a1, ::RPG::Client::OnSceneOperationDelegate* a2, ::RPG::Client::OnSceneOperationDelegate* a3, ::System::Boolean a4, ::System::Boolean a5, ::System::Single a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::Client::OnSceneOperationDelegate*, ::RPG::Client::OnSceneOperationDelegate*, ::System::Boolean, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + NJCHNLINLMK_HNFHNLFJECJ_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void CAMDJAAPEAO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NJCHNLINLMK_CAMDJAAPEAO_OFFSET))(this, a1);
		}

		::System::Boolean GCOEDINNCHN(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + NJCHNLINLMK_GCOEDINNCHN_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* KHOBMCCIBOP()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_KHOBMCCIBOP_OFFSET))(this);
		}

		::System::Void FHMNHMCAIDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_FHMNHMCAIDG_OFFSET))(this);
		}

		::System::Void IBNCKHHDOKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_IBNCKHHDOKN_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_KAOLPGACCID_OFFSET))(this);
		}

		::System::String* MMCKHIHJOEH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJCHNLINLMK_MMCKHIHJOEH_OFFSET))(this);
		}

	};
