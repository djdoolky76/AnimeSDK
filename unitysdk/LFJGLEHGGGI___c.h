#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFJGLEHGGGI;
namespace System { class Object; }

#define LFJGLEHGGGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5ED10)
#define LFJGLEHGGGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5ED50)
#define LFJGLEHGGGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FC5ED60)

inline static constexpr unsigned int LFJGLEHGGGI___c_TypeDefinitionIndex = 35266;

	class LFJGLEHGGGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJGLEHGGGI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI___C_CTOR_OFFSET))(this);
		}

		::LFJGLEHGGGI* __cctor_b__28_0()
		{
			return ((::LFJGLEHGGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
