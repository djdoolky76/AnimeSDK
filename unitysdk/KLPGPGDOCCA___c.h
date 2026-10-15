#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLPGPGDOCCA_AnimatedInstance;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define KLPGPGDOCCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xB53A9B0)
#define KLPGPGDOCCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0xB53A9F0)
#define KLPGPGDOCCA___C__PLAY_B__4_0_OFFSET UNITYSDK_OFFSET(0xB53AA00)

	class KLPGPGDOCCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ECB0);
		}

		static ::System::Comparison_1<::System::Object*>** StaticGet___9__4_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5ECB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLPGPGDOCCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLPGPGDOCCA___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _Play_b__4_0(::KLPGPGDOCCA_AnimatedInstance* a1, ::KLPGPGDOCCA_AnimatedInstance* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::KLPGPGDOCCA_AnimatedInstance*, ::KLPGPGDOCCA_AnimatedInstance*))((::PBYTE)hIl2Cpp + KLPGPGDOCCA___C__PLAY_B__4_0_OFFSET))(this, a1, a2);
		}

	};
