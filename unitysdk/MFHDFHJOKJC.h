#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginBodyAlchemize; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define MFHDFHJOKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0x17C88AE0)
#define MFHDFHJOKJC_CHIJHGLHOND_OFFSET UNITYSDK_OFFSET(0x17C85840)
#define MFHDFHJOKJC_CTOR_OFFSET UNITYSDK_OFFSET(0x17C88AD0)
#define MFHDFHJOKJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C871B0)
#define MFHDFHJOKJC_EPNBAMOEILG_OFFSET UNITYSDK_OFFSET(0x17C87230)
#define MFHDFHJOKJC_FDCLPOKMFJM_OFFSET UNITYSDK_OFFSET(0x17C87870)
#define MFHDFHJOKJC_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0x17C874D0)
#define MFHDFHJOKJC_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0x17C87D90)
#define MFHDFHJOKJC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17C857C0)
#define MFHDFHJOKJC_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0x17C88100)

inline static constexpr unsigned int MFHDFHJOKJC_TypeDefinitionIndex = 71824;

	class MFHDFHJOKJC : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* AINDJAFODHB; // 0x18
		::System::Collections::Generic::List_1<::System::Object*>* CFDDPCELHLG; // 0x20
		::RPG::Client::CharacterEffect* HAHKDGACPIL; // 0x28
		::UnityEngine::Transform* FLDGNOBDJOO; // 0x30
		::System::Boolean LBPLJDLJOEO; // 0x38
		static ::System::Int32* StaticGet_BMMGDMANOFE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MFHDFHJOKJC")->GetStaticField(0x16030);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFHDFHJOKJC_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_DISPOSE_OFFSET))(this);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void JPKHCNDFAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_JPKHCNDFAEL_OFFSET))(this);
		}

		::System::Void OIBPOPCFDHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_OIBPOPCFDHA_OFFSET))(this);
		}

		::System::Void CHIJHGLHOND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_CHIJHGLHOND_OFFSET))(this);
		}

		::System::Void EPNBAMOEILG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_EPNBAMOEILG_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginBodyAlchemize* FDCLPOKMFJM()
		{
			return ((::RPG::Client::MonoEffectPluginBodyAlchemize*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFHDFHJOKJC_FDCLPOKMFJM_OFFSET))(this);
		}

	};
