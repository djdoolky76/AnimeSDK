#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class CharacterEffect; }
namespace RPG::Client { class MonoEffectPluginBodyAlchemize; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define MFHDFHJOKJC_CCTOR_OFFSET UNITYSDK_OFFSET(0xB8FE990)
#define MFHDFHJOKJC_CHIJHGLHOND_OFFSET UNITYSDK_OFFSET(0xB8FB6F0)
#define MFHDFHJOKJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB8FE980)
#define MFHDFHJOKJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8FD060)
#define MFHDFHJOKJC_EPNBAMOEILG_OFFSET UNITYSDK_OFFSET(0xB8FD0E0)
#define MFHDFHJOKJC_FDCLPOKMFJM_OFFSET UNITYSDK_OFFSET(0xB8FD720)
#define MFHDFHJOKJC_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB8FD380)
#define MFHDFHJOKJC_JPKHCNDFAEL_OFFSET UNITYSDK_OFFSET(0xB8FDC40)
#define MFHDFHJOKJC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB8FB670)
#define MFHDFHJOKJC_OIBPOPCFDHA_OFFSET UNITYSDK_OFFSET(0xB8FDFB0)

inline static constexpr unsigned int MFHDFHJOKJC_TypeDefinitionIndex = 69865;

	class MFHDFHJOKJC : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::Client::CharacterEffect* HAHKDGACPIL; // 0x18
		::UnityEngine::Transform* FLDGNOBDJOO; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* CFDDPCELHLG; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* AINDJAFODHB; // 0x30
		::System::Boolean LBPLJDLJOEO; // 0x38
		static ::System::Int32* StaticGet_BMMGDMANOFE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MFHDFHJOKJC")->GetStaticField(0x15990);
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
