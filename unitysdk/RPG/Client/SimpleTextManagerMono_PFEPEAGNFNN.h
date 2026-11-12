#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/UIVertex.h"
namespace RPG::Client { class SimpleTextManagerMono; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xEB3E8C0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_BAKIJBBMPDI_OFFSET UNITYSDK_OFFSET(0xEB36EA0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_BDEEMBKOBFJ_OFFSET UNITYSDK_OFFSET(0xEB46DD0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_CTOR_OFFSET UNITYSDK_OFFSET(0xEB3DFC0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_GDKICCOEHEG_OFFSET UNITYSDK_OFFSET(0xEB387A0)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_JMJMCEOFKLF_OFFSET UNITYSDK_OFFSET(0xEB46D90)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_JNKONNECDKK_OFFSET UNITYSDK_OFFSET(0xEB46E60)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_LDAMHBBILAD_OFFSET UNITYSDK_OFFSET(0xEB44120)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_MPNEPIGKJOG_OFFSET UNITYSDK_OFFSET(0xEB44160)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_PKOBEBNNEDA_OFFSET UNITYSDK_OFFSET(0xEB46E20)
#define RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN___CTOR_G__GETFORMAT_13_0_OFFSET UNITYSDK_OFFSET(0xEB47BC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SimpleTextManagerMono_PFEPEAGNFNN_TypeDefinitionIndex = 74727;

	class SimpleTextManagerMono_PFEPEAGNFNN : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIVertex>* ABNOBMLHDKA; // 0x10
		::UnityEngine::RenderTexture* GMBNAHJNIHN; // 0x18
		::System::Boolean NJHHGCPPHEB; // 0x20
		::System::Boolean POGILOGNKJF; // 0x21
		::System::Byte _padding0[0x2];
		::System::Single DEABLIDBINA; // 0x24
		::System::Int32 DCCCJFAHOJF; // 0x28
		// static const ::System::String* FJCCABFCDND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_CTOR_OFFSET))(this);
		}

		::System::Int32 JNKONNECDKK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_JNKONNECDKK_OFFSET))(this);
		}

		::UnityEngine::Texture* JMJMCEOFKLF()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_JMJMCEOFKLF_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::UIVertex>* PKOBEBNNEDA()
		{
			return ((::Il2CppArray<::UnityEngine::UIVertex>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_PKOBEBNNEDA_OFFSET))(this);
		}

		::System::Single BDEEMBKOBFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_BDEEMBKOBFJ_OFFSET))(this);
		}

		::System::Boolean LDAMHBBILAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_LDAMHBBILAD_OFFSET))(this);
		}

		::System::Boolean GDKICCOEHEG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_GDKICCOEHEG_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void MPNEPIGKJOG(::UnityEngine::Font* a1, ::System::Int32 a2, ::RPG::Client::SimpleTextManagerMono* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Font*, ::System::Int32, ::RPG::Client::SimpleTextManagerMono*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_MPNEPIGKJOG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAKIJBBMPDI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN_BAKIJBBMPDI_OFFSET))(this);
		}

		static ::UnityEngine::Experimental::Rendering::GraphicsFormat __ctor_g__GetFormat_13_0()
		{
			return ((::UnityEngine::Experimental::Rendering::GraphicsFormat(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_SIMPLETEXTMANAGERMONO_PFEPEAGNFNN___CTOR_G__GETFORMAT_13_0_OFFSET))();
		}

	};
}
