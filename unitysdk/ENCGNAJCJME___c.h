#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENCGNAJCJME;
namespace System { class Object; }

#define ENCGNAJCJME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9E10)
#define ENCGNAJCJME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E9E50)
#define ENCGNAJCJME___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E2E9E60)

inline static constexpr unsigned int ENCGNAJCJME___c_TypeDefinitionIndex = 30205;

	class ENCGNAJCJME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x54360);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENCGNAJCJME___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME___C_CTOR_OFFSET))(this);
		}

		::ENCGNAJCJME* __cctor_b__18_0()
		{
			return ((::ENCGNAJCJME*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENCGNAJCJME___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
