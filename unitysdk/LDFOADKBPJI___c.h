#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDFOADKBPJI;
namespace System { class Object; }

#define LDFOADKBPJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9145A0)
#define LDFOADKBPJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9145E0)
#define LDFOADKBPJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9145F0)

inline static constexpr unsigned int LDFOADKBPJI___c_TypeDefinitionIndex = 33100;

	class LDFOADKBPJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDFOADKBPJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI___C_CTOR_OFFSET))(this);
		}

		::LDFOADKBPJI* __cctor_b__28_0()
		{
			return ((::LDFOADKBPJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFOADKBPJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
