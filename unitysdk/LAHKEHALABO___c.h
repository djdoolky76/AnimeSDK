#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAHKEHALABO;
namespace System { class Object; }

#define LAHKEHALABO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20387AA0)
#define LAHKEHALABO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20387AE0)
#define LAHKEHALABO___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20387AF0)

inline static constexpr unsigned int LAHKEHALABO___c_TypeDefinitionIndex = 35495;

	class LAHKEHALABO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x279C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAHKEHALABO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO___C_CTOR_OFFSET))(this);
		}

		::LAHKEHALABO* __cctor_b__23_0()
		{
			return ((::LAHKEHALABO*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHKEHALABO___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
