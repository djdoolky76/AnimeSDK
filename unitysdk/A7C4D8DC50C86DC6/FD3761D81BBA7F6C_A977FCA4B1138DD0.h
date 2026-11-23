#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace A7C4D8DC50C86DC6 { class A03329868F553B13; }
namespace System { class Object; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define A7C4D8DC50C86DC6_FD3761D81BBA7F6C_A977FCA4B1138DD0_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FE7C20)
#define A7C4D8DC50C86DC6_FD3761D81BBA7F6C_A977FCA4B1138DD0__CTOR_OFFSET UNITYSDK_OFFSET(0x22B95F0)

namespace A7C4D8DC50C86DC6
{
	inline static constexpr unsigned int FD3761D81BBA7F6C_A977FCA4B1138DD0_TypeDefinitionIndex = 18726;

	class FD3761D81BBA7F6C_A977FCA4B1138DD0 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_FD3761D81BBA7F6C_A977FCA4B1138DD0__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::System::UInt32 A8F53A76737F9A9C, ::System::Int32 FCB78015D756C511, ::A7C4D8DC50C86DC6::A03329868F553B13* E97E8D008427A296, ::UnityEngine::TextCore::Text::FontAsset* A04B97A6BA51CC83)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::A7C4D8DC50C86DC6::A03329868F553B13*, ::UnityEngine::TextCore::Text::FontAsset*))((::PBYTE)hIl2Cpp + A7C4D8DC50C86DC6_FD3761D81BBA7F6C_A977FCA4B1138DD0_INVOKE_OFFSET))(this, A8F53A76737F9A9C, FCB78015D756C511, E97E8D008427A296, A04B97A6BA51CC83);
		}
	};
}
