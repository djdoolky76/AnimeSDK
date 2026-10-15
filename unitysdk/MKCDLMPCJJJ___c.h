#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKCDLMPCJJJ;
namespace System { class Object; }

#define MKCDLMPCJJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA25A10)
#define MKCDLMPCJJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA25A40)
#define MKCDLMPCJJJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA25A50)

inline static constexpr unsigned int MKCDLMPCJJJ___c_TypeDefinitionIndex = 33829;

	class MKCDLMPCJJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x546D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKCDLMPCJJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ___C_CTOR_OFFSET))(this);
		}

		::MKCDLMPCJJJ* __cctor_b__23_0()
		{
			return ((::MKCDLMPCJJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDLMPCJJJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
