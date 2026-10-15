#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPDFOCPPAHN.h"
namespace RPG::Client { class SceneTV; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define FLEDMMJFKLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1582D790)
#define FLEDMMJFKLE_DBCOBABPCOO_OFFSET UNITYSDK_OFFSET(0x1582DAB0)
#define FLEDMMJFKLE_DJCBGDDOLBL_OFFSET UNITYSDK_OFFSET(0x1582DD60)
#define FLEDMMJFKLE_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x1582D850)
#define FLEDMMJFKLE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1582D810)
#define FLEDMMJFKLE_LGOCFIEODJA_OFFSET UNITYSDK_OFFSET(0x1582D890)
#define FLEDMMJFKLE_NNNGFJMFLON_OFFSET UNITYSDK_OFFSET(0x1582DBD0)
#define FLEDMMJFKLE_PDOKCIFFKIC_OFFSET UNITYSDK_OFFSET(0x1582DE80)

	class FLEDMMJFKLE : public ::IPDFOCPPAHN
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SceneTV*>* KOHPIBKEHBL; // 0x18
		::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void LGOCFIEODJA(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_LGOCFIEODJA_OFFSET))(this, a1);
		}

		::System::Void DBCOBABPCOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_DBCOBABPCOO_OFFSET))(this);
		}

		::System::Void NNNGFJMFLON(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_NNNGFJMFLON_OFFSET))(this, a1);
		}

		::System::Void DJCBGDDOLBL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_DJCBGDDOLBL_OFFSET))(this);
		}

		::System::Void PDOKCIFFKIC(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + FLEDMMJFKLE_PDOKCIFFKIC_OFFSET))(this, a1, a2);
		}

	};
