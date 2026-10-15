#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJEDJFIEHPB;
namespace System { class Object; }

#define BJEDJFIEHPB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAE50)
#define BJEDJFIEHPB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDDAE90)
#define BJEDJFIEHPB___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDDAEA0)

inline static constexpr unsigned int BJEDJFIEHPB___c_TypeDefinitionIndex = 31957;

	class BJEDJFIEHPB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x594F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJEDJFIEHPB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB___C_CTOR_OFFSET))(this);
		}

		::BJEDJFIEHPB* __cctor_b__18_0()
		{
			return ((::BJEDJFIEHPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJEDJFIEHPB___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
