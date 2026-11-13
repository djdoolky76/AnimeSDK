#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLJNBBHKKMI;
class LPHINGPIEAJ;
namespace RPG::Client::LittleGame::ComicDessert { class ComicDessertProductView; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define PHPGNLHADJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A9BBAA0)
#define PHPGNLHADJM_FMBLOHELADF_OFFSET UNITYSDK_OFFSET(0x1A9BC5D0)
#define PHPGNLHADJM_GKBBPCLJHIE_OFFSET UNITYSDK_OFFSET(0x1A9BCA40)
#define PHPGNLHADJM_IICMOFIDKMD_OFFSET UNITYSDK_OFFSET(0x1A9BC7E0)
#define PHPGNLHADJM_KJOLLIAOHOO_OFFSET UNITYSDK_OFFSET(0x1A9BC460)
#define PHPGNLHADJM_LEINDCJHJAH_OFFSET UNITYSDK_OFFSET(0x1A9BCCE0)
#define PHPGNLHADJM_LNJAMPLHFKO_OFFSET UNITYSDK_OFFSET(0x1A9BBAB0)
#define PHPGNLHADJM_ODPBNICJFPF_OFFSET UNITYSDK_OFFSET(0x1A9BC9A0)

inline static constexpr unsigned int PHPGNLHADJM_TypeDefinitionIndex = 79882;

	class PHPGNLHADJM : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::HLJNBBHKKMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_CTOR_OFFSET))(this, a1);
		}

		::System::Void LNJAMPLHFKO(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_LNJAMPLHFKO_OFFSET))(this, a1);
		}

		::System::Void ODPBNICJFPF(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_ODPBNICJFPF_OFFSET))(this, a1);
		}

		::System::Void GKBBPCLJHIE(::LPHINGPIEAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_GKBBPCLJHIE_OFFSET))(this, a1);
		}

		::System::Void IICMOFIDKMD(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_IICMOFIDKMD_OFFSET))(this, a1);
		}

		::System::Void LEINDCJHJAH(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_LEINDCJHJAH_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* FMBLOHELADF(::LPHINGPIEAJ* a1, ::LPHINGPIEAJ* a2)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::LPHINGPIEAJ*, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_FMBLOHELADF_OFFSET))(this, a1, a2);
		}

		::System::Void KJOLLIAOHOO(::RPG::Client::LittleGame::ComicDessert::ComicDessertProductView* a1, ::LPHINGPIEAJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ComicDessert::ComicDessertProductView*, ::LPHINGPIEAJ*))((::PBYTE)hIl2Cpp + PHPGNLHADJM_KJOLLIAOHOO_OFFSET))(this, a1, a2);
		}

	};
