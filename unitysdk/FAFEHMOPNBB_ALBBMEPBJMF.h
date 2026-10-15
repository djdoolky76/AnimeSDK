#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace Newtonsoft::Json { class JsonTextWriter; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define FAFEHMOPNBB_ALBBMEPBJMF_BEGIN_OFFSET UNITYSDK_OFFSET(0x15668610)
#define FAFEHMOPNBB_ALBBMEPBJMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1566B2B0)
#define FAFEHMOPNBB_ALBBMEPBJMF_DDDJJHJJJBD_OFFSET UNITYSDK_OFFSET(0x1566AC30)
#define FAFEHMOPNBB_ALBBMEPBJMF_GODDMEPBENB_OFFSET UNITYSDK_OFFSET(0x1566AEE0)
#define FAFEHMOPNBB_ALBBMEPBJMF_ICCKBHGBCPD_OFFSET UNITYSDK_OFFSET(0x1566ACD0)
#define FAFEHMOPNBB_ALBBMEPBJMF_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x156685A0)
#define FAFEHMOPNBB_ALBBMEPBJMF_KHFHNDEBGDH_OFFSET UNITYSDK_OFFSET(0x1566ABA0)
#define FAFEHMOPNBB_ALBBMEPBJMF_ONGUI_OFFSET UNITYSDK_OFFSET(0x1566AD70)

inline static constexpr unsigned int FAFEHMOPNBB_ALBBMEPBJMF_TypeDefinitionIndex = 72755;

	class FAFEHMOPNBB_ALBBMEPBJMF : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Newtonsoft::Json::Linq::JObject* MJECNGGELFK; // 0x18
		::System::String* CEKHDBPOJHO; // 0x20
		::System::Int32 JGGDJHJHLDI; // 0x28
		::System::Int32 NCLILBPNMNN; // 0x2C
		::System::Int32 PCENCBLCPAE; // 0x30
		::System::Boolean JKPCEJLLGDH; // 0x34
		::System::Byte _padding0[0x3];
		::System::String* MFHKDHFJAHE; // 0x38
		::UnityEngine::Rect EPDMOKHFKHG; // 0x40
		::System::Boolean IMEEDAPLPLM; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_CTOR_OFFSET))(this);
		}

		::System::Void Initialize(::Newtonsoft::Json::Linq::JObject* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::Newtonsoft::Json::Linq::JObject*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_INITIALIZE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Begin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_BEGIN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KHFHNDEBGDH()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_KHFHNDEBGDH_OFFSET))(this);
		}

		::System::Collections::IEnumerator* DDDJJHJJJBD(::Newtonsoft::Json::JsonTextWriter* a1, ::Newtonsoft::Json::Linq::JObject* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Newtonsoft::Json::JsonTextWriter*, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_DDDJJHJJJBD_OFFSET))(this, a1, a2);
		}

		::System::Collections::IEnumerator* ICCKBHGBCPD(::Newtonsoft::Json::JsonTextWriter* a1, ::Newtonsoft::Json::Linq::JObject* a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::Newtonsoft::Json::JsonTextWriter*, ::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_ICCKBHGBCPD_OFFSET))(this, a1, a2);
		}

		::System::Void OnGUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_ONGUI_OFFSET))(this);
		}

		::System::Void GODDMEPBENB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_ALBBMEPBJMF_GODDMEPBENB_OFFSET))(this, a1);
		}

	};
