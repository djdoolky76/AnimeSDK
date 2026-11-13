#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COPLCPBANMD;
namespace System { class Object; }

#define COPLCPBANMD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204E2FB0)
#define COPLCPBANMD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204E2FE0)
#define COPLCPBANMD___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x204E2FF0)

inline static constexpr unsigned int COPLCPBANMD___c_TypeDefinitionIndex = 32464;

	class COPLCPBANMD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COPLCPBANMD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD___C_CTOR_OFFSET))(this);
		}

		::COPLCPBANMD* __cctor_b__28_0()
		{
			return ((::COPLCPBANMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + COPLCPBANMD___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
