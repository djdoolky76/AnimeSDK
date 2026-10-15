#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMGBGGMLFED.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define AOKDLPNDMMO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C873660)
#define AOKDLPNDMMO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8736A0)
#define AOKDLPNDMMO___C__GETLAUNCHRESULT_B__8_0_OFFSET UNITYSDK_OFFSET(0x1C8736B0)

inline static constexpr unsigned int AOKDLPNDMMO___c_TypeDefinitionIndex = 43078;

	class AOKDLPNDMMO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29FB0);
		}

		static ::System::Comparison_1<::EMGBGGMLFED>** StaticGet___9__8_0()
		{
			return (::System::Comparison_1<::EMGBGGMLFED>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29FB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOKDLPNDMMO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOKDLPNDMMO___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetLaunchResult_b__8_0(::EMGBGGMLFED a1, ::EMGBGGMLFED a2)
		{
			return ((::System::Int32(*)(::PVOID, ::EMGBGGMLFED, ::EMGBGGMLFED))((::PBYTE)hIl2Cpp + AOKDLPNDMMO___C__GETLAUNCHRESULT_B__8_0_OFFSET))(this, a1, a2);
		}

	};
