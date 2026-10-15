#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class HPELHHKMIEK;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define EDNMLIKIMHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1332D8F0)
#define EDNMLIKIMHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1332D8A0)
#define EDNMLIKIMHK_HABIPGHPLEB_OFFSET UNITYSDK_OFFSET(0x1332D4C0)
#define EDNMLIKIMHK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1332D120)

inline static constexpr unsigned int EDNMLIKIMHK_TypeDefinitionIndex = 57179;

	class EDNMLIKIMHK : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HPELHHKMIEK*>* BPKGBGDJCHG; // 0x10
		static ::RPG::MVector3* StaticGet_JDFCENAIIAG()
		{
			return (::RPG::MVector3*)UnitySDK::FromName("", "EDNMLIKIMHK")->GetStaticField(0x15C40);
		}

		// static const ::System::Object EBDACMJDHFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDNMLIKIMHK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDNMLIKIMHK_CCTOR_OFFSET))();
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDNMLIKIMHK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HABIPGHPLEB(::UnityEngine::Object* a1, ::UnityEngine::Transform* a2, ::System::String* a3, ::UnityEngine::GameObject* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::UnityEngine::Transform*, ::System::String*, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + EDNMLIKIMHK_HABIPGHPLEB_OFFSET))(this, a1, a2, a3, a4);
		}

	};
