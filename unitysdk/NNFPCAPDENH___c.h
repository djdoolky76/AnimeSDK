#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNFPCAPDENH;
namespace System { class Object; }

#define NNFPCAPDENH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB55F00)
#define NNFPCAPDENH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB55F40)
#define NNFPCAPDENH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EB55F50)

inline static constexpr unsigned int NNFPCAPDENH___c_TypeDefinitionIndex = 29538;

	class NNFPCAPDENH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2FC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNFPCAPDENH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH___C_CTOR_OFFSET))(this);
		}

		::NNFPCAPDENH* __cctor_b__18_0()
		{
			return ((::NNFPCAPDENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNFPCAPDENH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
