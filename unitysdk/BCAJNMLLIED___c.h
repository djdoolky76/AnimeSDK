#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCAJNMLLIED;
namespace System { class Object; }

#define BCAJNMLLIED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA77890)
#define BCAJNMLLIED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA778C0)
#define BCAJNMLLIED___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1FA778D0)

inline static constexpr unsigned int BCAJNMLLIED___c_TypeDefinitionIndex = 33362;

	class BCAJNMLLIED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45180);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BCAJNMLLIED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED___C_CTOR_OFFSET))(this);
		}

		::BCAJNMLLIED* __cctor_b__43_0()
		{
			return ((::BCAJNMLLIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCAJNMLLIED___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
