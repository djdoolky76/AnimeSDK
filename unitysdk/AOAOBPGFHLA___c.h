#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOAOBPGFHLA;
namespace System { class Object; }

#define AOAOBPGFHLA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63A790)
#define AOAOBPGFHLA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63A7D0)
#define AOAOBPGFHLA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E63A7E0)

inline static constexpr unsigned int AOAOBPGFHLA___c_TypeDefinitionIndex = 25246;

	class AOAOBPGFHLA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x486A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AOAOBPGFHLA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA___C_CTOR_OFFSET))(this);
		}

		::AOAOBPGFHLA* __cctor_b__38_0()
		{
			return ((::AOAOBPGFHLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AOAOBPGFHLA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
