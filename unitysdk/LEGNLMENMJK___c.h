#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEGNLMENMJK;
namespace System { class Object; }

#define LEGNLMENMJK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4D910)
#define LEGNLMENMJK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4D940)
#define LEGNLMENMJK___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1FC4D950)

inline static constexpr unsigned int LEGNLMENMJK___c_TypeDefinitionIndex = 27583;

	class LEGNLMENMJK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2DEF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEGNLMENMJK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK___C_CTOR_OFFSET))(this);
		}

		::LEGNLMENMJK* __cctor_b__42_0()
		{
			return ((::LEGNLMENMJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEGNLMENMJK___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
