#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKFBNFPFKJJ;
namespace System { class Object; }

#define AKFBNFPFKJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39D0D0)
#define AKFBNFPFKJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39D110)
#define AKFBNFPFKJJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E39D120)

inline static constexpr unsigned int AKFBNFPFKJJ___c_TypeDefinitionIndex = 34399;

	class AKFBNFPFKJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EC70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFBNFPFKJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ___C_CTOR_OFFSET))(this);
		}

		::AKFBNFPFKJJ* __cctor_b__18_0()
		{
			return ((::AKFBNFPFKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
