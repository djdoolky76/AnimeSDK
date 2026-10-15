#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNHFLGJJKHN;
namespace System { class Object; }

#define DNHFLGJJKHN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C97A0)
#define DNHFLGJJKHN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C97D0)
#define DNHFLGJJKHN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1C97E0)

inline static constexpr unsigned int DNHFLGJJKHN___c_TypeDefinitionIndex = 26670;

	class DNHFLGJJKHN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNHFLGJJKHN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN___C_CTOR_OFFSET))(this);
		}

		::DNHFLGJJKHN* __cctor_b__28_0()
		{
			return ((::DNHFLGJJKHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
