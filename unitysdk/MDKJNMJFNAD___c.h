#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MDKJNMJFNAD_BNMDGBCKFCG;
namespace System { class Object; }
namespace UnityEngine { class Object; }

#define MDKJNMJFNAD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E542FB0)
#define MDKJNMJFNAD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E542FF0)
#define MDKJNMJFNAD___C__CLOSE_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E543000)

inline static constexpr unsigned int MDKJNMJFNAD___c_TypeDefinitionIndex = 45320;

	class MDKJNMJFNAD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61D90);
		}

		static ::System::Object** StaticGet___9__2_0()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x61D98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDKJNMJFNAD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDKJNMJFNAD___C_CTOR_OFFSET))(this);
		}

		::MDKJNMJFNAD_BNMDGBCKFCG* _Close_b__2_0(::UnityEngine::Object* a1)
		{
			return ((::MDKJNMJFNAD_BNMDGBCKFCG*(*)(::PVOID, ::UnityEngine::Object*))((::PBYTE)hIl2Cpp + MDKJNMJFNAD___C__CLOSE_B__2_0_OFFSET))(this, a1);
		}

	};
