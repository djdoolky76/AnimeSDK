#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FAFEHMOPNBB_ALBBMEPBJMF;
namespace Newtonsoft::Json::Linq { class JArray; }
namespace Newtonsoft::Json::Linq { class JObject; }
namespace Newtonsoft::Json::Linq { class JToken; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Text { class UTF8Encoding; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define FAFEHMOPNBB_BBOELIGAEHO_OFFSET UNITYSDK_OFFSET(0x1565C9E0)
#define FAFEHMOPNBB_BJIONBHFFFB_OFFSET UNITYSDK_OFFSET(0x1565D910)
#define FAFEHMOPNBB_BLFCJOPJBIH_OFFSET UNITYSDK_OFFSET(0x1565E580)
#define FAFEHMOPNBB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1565ED70)
#define FAFEHMOPNBB_DBKFDKKPJJB_OFFSET UNITYSDK_OFFSET(0x1565D2C0)
#define FAFEHMOPNBB_DOGMHOAOJFD_OFFSET UNITYSDK_OFFSET(0x1565DD50)
#define FAFEHMOPNBB_FMIMCPCACMJ_OFFSET UNITYSDK_OFFSET(0x1565E450)
#define FAFEHMOPNBB_FNPCIMAENFB_OFFSET UNITYSDK_OFFSET(0x1565C3D0)
#define FAFEHMOPNBB_IJEALAIOPHP_OFFSET UNITYSDK_OFFSET(0x1565D5F0)
#define FAFEHMOPNBB_IJJCDABDGIP_OFFSET UNITYSDK_OFFSET(0x1565D350)
#define FAFEHMOPNBB_MNDMMPCMNGD_OFFSET UNITYSDK_OFFSET(0x1565BE50)
#define FAFEHMOPNBB_NHEMBHNGCEP_OFFSET UNITYSDK_OFFSET(0x1565C6D0)
#define FAFEHMOPNBB_PGODHENKEHN_OFFSET UNITYSDK_OFFSET(0x1565DE10)

inline static constexpr unsigned int FAFEHMOPNBB_TypeDefinitionIndex = 72753;

	class FAFEHMOPNBB : public ::System::Object
	{
	public:
		static ::FAFEHMOPNBB_ALBBMEPBJMF** StaticGet_CGPGGKFDOFG()
		{
			return (::FAFEHMOPNBB_ALBBMEPBJMF**)UnitySDK::FromName("", "FAFEHMOPNBB")->GetStaticField(0x50130);
		}

		static ::System::Text::UTF8Encoding** StaticGet_IANKEBCEMAF()
		{
			return (::System::Text::UTF8Encoding**)UnitySDK::FromName("", "FAFEHMOPNBB")->GetStaticField(0x50138);
		}

		// static const ::System::String* KGNFAFAJPDF; // 0x0
		// static const ::System::Object HLNAGMNCCIM; // 0x0
		// static const ::System::Object MANHBCGICMA; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAFEHMOPNBB_CCTOR_OFFSET))();
		}

		static ::System::Boolean MNDMMPCMNGD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + FAFEHMOPNBB_MNDMMPCMNGD_OFFSET))();
		}

		static ::Newtonsoft::Json::Linq::JObject* FNPCIMAENFB(::UnityEngine::GameObject* a1)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_FNPCIMAENFB_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JObject* BBOELIGAEHO(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_BBOELIGAEHO_OFFSET))(a1, a2);
		}

		static ::Newtonsoft::Json::Linq::JArray* BJIONBHFFFB(::UnityEngine::GameObject* a1)
		{
			return ((::Newtonsoft::Json::Linq::JArray*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_BJIONBHFFFB_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JObject* PGODHENKEHN(::UnityEngine::Component* a1)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::UnityEngine::Component*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_PGODHENKEHN_OFFSET))(a1);
		}

		static ::System::Boolean FMIMCPCACMJ(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_FMIMCPCACMJ_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JToken* BLFCJOPJBIH(::System::Object* a1)
		{
			return ((::Newtonsoft::Json::Linq::JToken*(*)(::System::Object*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_BLFCJOPJBIH_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JObject* IJJCDABDGIP(::UnityEngine::Vector3 a1)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_IJJCDABDGIP_OFFSET))(a1);
		}

		static ::Newtonsoft::Json::Linq::JObject* IJEALAIOPHP(::UnityEngine::Quaternion a1)
		{
			return ((::Newtonsoft::Json::Linq::JObject*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_IJEALAIOPHP_OFFSET))(a1);
		}

		static ::System::String* DBKFDKKPJJB(::UnityEngine::GameObject* a1)
		{
			return ((::System::String*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_DBKFDKKPJJB_OFFSET))(a1);
		}

		static ::System::String* DOGMHOAOJFD(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_DOGMHOAOJFD_OFFSET))(a1);
		}

		static ::System::Int32 NHEMBHNGCEP(::Newtonsoft::Json::Linq::JObject* a1)
		{
			return ((::System::Int32(*)(::Newtonsoft::Json::Linq::JObject*))((::PBYTE)hIl2Cpp + FAFEHMOPNBB_NHEMBHNGCEP_OFFSET))(a1);
		}

	};
