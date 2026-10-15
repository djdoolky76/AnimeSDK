#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBGCEENEKND.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HMKFHBKCFGN.h"
class DDPFPHOOCLN;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }

#define JNPKHNPNMFC_BDGLMELIJHO_OFFSET UNITYSDK_OFFSET(0xB2935B0)
#define JNPKHNPNMFC_CLEAR_OFFSET UNITYSDK_OFFSET(0xB2934A0)
#define JNPKHNPNMFC_CTOR_OFFSET UNITYSDK_OFFSET(0xB293720)
#define JNPKHNPNMFC_DLBEJAHBOBK_OFFSET UNITYSDK_OFFSET(0xB293710)
#define JNPKHNPNMFC_KNCCKBGHLAC_OFFSET UNITYSDK_OFFSET(0xB2936C0)

inline static constexpr unsigned int JNPKHNPNMFC_TypeDefinitionIndex = 69843;

	class JNPKHNPNMFC : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::FBGCEENEKND, ::DDPFPHOOCLN*>* CAAJDHDLEHI; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* FCAIIKJDOHF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPKHNPNMFC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPKHNPNMFC_CLEAR_OFFSET))(this);
		}

		::HMKFHBKCFGN KNCCKBGHLAC()
		{
			return ((::HMKFHBKCFGN(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPKHNPNMFC_KNCCKBGHLAC_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* DLBEJAHBOBK()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPKHNPNMFC_DLBEJAHBOBK_OFFSET))(this);
		}

		::System::Void BDGLMELIJHO(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + JNPKHNPNMFC_BDGLMELIJHO_OFFSET))(this, a1);
		}

	};
