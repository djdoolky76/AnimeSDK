#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPCEIGAGLND;
namespace System { class Object; }

#define JPCEIGAGLND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9BB0)
#define JPCEIGAGLND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8D9BF0)
#define JPCEIGAGLND___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F8D9C00)

inline static constexpr unsigned int JPCEIGAGLND___c_TypeDefinitionIndex = 26712;

	class JPCEIGAGLND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPCEIGAGLND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND___C_CTOR_OFFSET))(this);
		}

		::JPCEIGAGLND* __cctor_b__28_0()
		{
			return ((::JPCEIGAGLND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPCEIGAGLND___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
