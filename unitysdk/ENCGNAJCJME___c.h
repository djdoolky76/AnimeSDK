#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENCGNAJCJME;
namespace System { class Object; }

#define ENCGNAJCJME___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206E17D0)
#define ENCGNAJCJME___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206E1810)
#define ENCGNAJCJME___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x206E1820)

inline static constexpr unsigned int ENCGNAJCJME___c_TypeDefinitionIndex = 31103;

	class ENCGNAJCJME___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AEE0);
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
