#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMKAACCBCCB;
namespace System { class Object; }

#define EMKAACCBCCB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5C81F0)
#define EMKAACCBCCB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C8220)
#define EMKAACCBCCB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F5C8230)

inline static constexpr unsigned int EMKAACCBCCB___c_TypeDefinitionIndex = 33250;

	class EMKAACCBCCB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMKAACCBCCB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB___C_CTOR_OFFSET))(this);
		}

		::EMKAACCBCCB* __cctor_b__18_0()
		{
			return ((::EMKAACCBCCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMKAACCBCCB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
