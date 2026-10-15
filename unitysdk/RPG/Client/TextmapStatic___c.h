#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Sprite; }

#define RPG_CLIENT_TEXTMAPSTATIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xE226780)
#define RPG_CLIENT_TEXTMAPSTATIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0xE2267C0)
#define RPG_CLIENT_TEXTMAPSTATIC___C___COMPILETEXTICONSPATTERN_B__38_0_OFFSET UNITYSDK_OFFSET(0xE2267D0)

namespace RPG::Client
{
	inline static constexpr unsigned int TextmapStatic___c_TypeDefinitionIndex = 72947;

	class TextmapStatic___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*>** StaticGet___9__38_0()
		{
			return (::System::Comparison_1<::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15E10);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x15E18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __CompileTextIconsPattern_b__38_0(::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>* a1, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*, ::System::Tuple_2<::System::UInt32, ::UnityEngine::Sprite*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEXTMAPSTATIC___C___COMPILETEXTICONSPATTERN_B__38_0_OFFSET))(this, a1, a2);
		}

	};
}
