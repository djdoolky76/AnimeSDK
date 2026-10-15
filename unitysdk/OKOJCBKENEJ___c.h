#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKOJCBKENEJ;
namespace System { class Object; }

#define OKOJCBKENEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE73DE0)
#define OKOJCBKENEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE73E20)
#define OKOJCBKENEJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DE73E30)

inline static constexpr unsigned int OKOJCBKENEJ___c_TypeDefinitionIndex = 34403;

	class OKOJCBKENEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKOJCBKENEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ___C_CTOR_OFFSET))(this);
		}

		::OKOJCBKENEJ* __cctor_b__18_0()
		{
			return ((::OKOJCBKENEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
