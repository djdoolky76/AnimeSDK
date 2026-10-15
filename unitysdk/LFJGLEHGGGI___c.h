#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFJGLEHGGGI;
namespace System { class Object; }

#define LFJGLEHGGGI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93F1F0)
#define LFJGLEHGGGI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93F230)
#define LFJGLEHGGGI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E93F240)

inline static constexpr unsigned int LFJGLEHGGGI___c_TypeDefinitionIndex = 34338;

	class LFJGLEHGGGI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B120);
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
