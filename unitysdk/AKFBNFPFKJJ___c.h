#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKFBNFPFKJJ;
namespace System { class Object; }

#define AKFBNFPFKJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA7A0)
#define AKFBNFPFKJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA7E0)
#define AKFBNFPFKJJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E3CA7F0)

inline static constexpr unsigned int AKFBNFPFKJJ___c_TypeDefinitionIndex = 34399;

	class AKFBNFPFKJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x36810);
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
