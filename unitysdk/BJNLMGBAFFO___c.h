#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJNLMGBAFFO;
namespace System { class Object; }

#define BJNLMGBAFFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E550)
#define BJNLMGBAFFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E590)
#define BJNLMGBAFFO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DF1E5A0)

inline static constexpr unsigned int BJNLMGBAFFO___c_TypeDefinitionIndex = 33767;

	class BJNLMGBAFFO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJNLMGBAFFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO___C_CTOR_OFFSET))(this);
		}

		::BJNLMGBAFFO* __cctor_b__28_0()
		{
			return ((::BJNLMGBAFFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJNLMGBAFFO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
