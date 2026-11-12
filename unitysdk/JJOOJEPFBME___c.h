#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/JJOOJEPFBME_JBNJIJGBGHL.h"
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define JJOOJEPFBME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBA31820)
#define JJOOJEPFBME___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBA31860)
#define JJOOJEPFBME___C__CUSTOMERSORDERINGDISHBYPATIENCE_B__12_0_OFFSET UNITYSDK_OFFSET(0xBA31870)

inline static constexpr unsigned int JJOOJEPFBME___c_TypeDefinitionIndex = 79906;

	class JJOOJEPFBME___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::System::Object*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFFA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xFFA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOOJEPFBME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOOJEPFBME___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _CustomersOrderingDishByPatience_b__12_0(::JJOOJEPFBME_JBNJIJGBGHL a1, ::JJOOJEPFBME_JBNJIJGBGHL a2)
		{
			return ((::System::Int32(*)(::PVOID, ::JJOOJEPFBME_JBNJIJGBGHL, ::JJOOJEPFBME_JBNJIJGBGHL))((::PBYTE)hIl2Cpp + JJOOJEPFBME___C__CUSTOMERSORDERINGDISHBYPATIENCE_B__12_0_OFFSET))(this, a1, a2);
		}

	};
