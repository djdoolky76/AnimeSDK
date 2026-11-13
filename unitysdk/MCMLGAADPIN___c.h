#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHKLHFALPEB;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define MCMLGAADPIN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x183BEF80)
#define MCMLGAADPIN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x183BEFC0)
#define MCMLGAADPIN___C___ENSURECACHE_B__4_0_OFFSET UNITYSDK_OFFSET(0x183BEFD0)

inline static constexpr unsigned int MCMLGAADPIN___c_TypeDefinitionIndex = 77158;

	class MCMLGAADPIN___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::KHKLHFALPEB*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::KHKLHFALPEB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72940);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72948);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCMLGAADPIN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCMLGAADPIN___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EnsureCache_b__4_0(::KHKLHFALPEB* a1, ::KHKLHFALPEB* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KHKLHFALPEB*, ::KHKLHFALPEB*))((::PBYTE)hIl2Cpp + MCMLGAADPIN___C___ENSURECACHE_B__4_0_OFFSET))(this, a1, a2);
		}

	};
