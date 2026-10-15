#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLDOIEGCNLD;
namespace System { class Object; }

#define CLDOIEGCNLD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0F6A50)
#define CLDOIEGCNLD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0F6A90)
#define CLDOIEGCNLD___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1E0F6AA0)

inline static constexpr unsigned int CLDOIEGCNLD___c_TypeDefinitionIndex = 25182;

	class CLDOIEGCNLD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1CF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLDOIEGCNLD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDOIEGCNLD___C_CTOR_OFFSET))(this);
		}

		::CLDOIEGCNLD* __cctor_b__53_0()
		{
			return ((::CLDOIEGCNLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLDOIEGCNLD___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
