#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKGEOBIHHD;
namespace System { class Object; }

#define JFKGEOBIHHD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E702720)
#define JFKGEOBIHHD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702760)
#define JFKGEOBIHHD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E702770)

inline static constexpr unsigned int JFKGEOBIHHD___c_TypeDefinitionIndex = 27354;

	class JFKGEOBIHHD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D6D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKGEOBIHHD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGEOBIHHD___C_CTOR_OFFSET))(this);
		}

		::JFKGEOBIHHD* __cctor_b__48_0()
		{
			return ((::JFKGEOBIHHD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKGEOBIHHD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
