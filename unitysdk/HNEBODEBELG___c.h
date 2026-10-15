#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HNEBODEBELG;
namespace System { class Object; }

#define HNEBODEBELG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF000)
#define HNEBODEBELG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5AF040)
#define HNEBODEBELG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5AF050)

inline static constexpr unsigned int HNEBODEBELG___c_TypeDefinitionIndex = 27811;

	class HNEBODEBELG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3B220);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HNEBODEBELG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEBODEBELG___C_CTOR_OFFSET))(this);
		}

		::HNEBODEBELG* __cctor_b__33_0()
		{
			return ((::HNEBODEBELG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNEBODEBELG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
