#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define JCPGAMOEIMK_FMBLMFGHLCP_OFFSET UNITYSDK_OFFSET(0x165A9A80)
#define JCPGAMOEIMK_IIFJCDAPKDG_OFFSET UNITYSDK_OFFSET(0x165A9D00)
#define JCPGAMOEIMK_NALLEIKKDJD_OFFSET UNITYSDK_OFFSET(0x165A9BC0)

inline static constexpr unsigned int JCPGAMOEIMK_TypeDefinitionIndex = 69762;

	class JCPGAMOEIMK : public ::System::Object
	{
	public:
		static ::UnityEngine::Camera* FMBLMFGHLCP()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + JCPGAMOEIMK_FMBLMFGHLCP_OFFSET))();
		}

		static ::UnityEngine::Camera* NALLEIKKDJD()
		{
			return ((::UnityEngine::Camera*(*)())((::PBYTE)hIl2Cpp + JCPGAMOEIMK_NALLEIKKDJD_OFFSET))();
		}

		static ::Il2CppArray<::System::String*>* IIFJCDAPKDG(::Il2CppArray<::System::String*>* a1, ::Il2CppArray<::System::String*>* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + JCPGAMOEIMK_IIFJCDAPKDG_OFFSET))(a1, a2);
		}

	};
