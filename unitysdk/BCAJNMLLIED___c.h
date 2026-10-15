#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
namespace System { class Object; }

#define BCAJNMLLIED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D7250)
#define BCAJNMLLIED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D7280)
#define BCAJNMLLIED___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E8D7290)

inline static constexpr unsigned int BCAJNMLLIED___c_TypeDefinitionIndex = 32449;

	class BCAJNMLLIED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAJNMLLIED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED___C_CTOR_OFFSET))(this);
		}

		::BCAJNMLLIED* __cctor_b__38_0()
		{
			return ((::BCAJNMLLIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
