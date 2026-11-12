#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGDDOAIIMPG;
namespace System { class Object; }

#define OGDDOAIIMPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0F57B0)
#define OGDDOAIIMPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0F57F0)
#define OGDDOAIIMPG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F0F5800)

inline static constexpr unsigned int OGDDOAIIMPG___c_TypeDefinitionIndex = 34384;

	class OGDDOAIIMPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x134E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGDDOAIIMPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG___C_CTOR_OFFSET))(this);
		}

		::OGDDOAIIMPG* __cctor_b__43_0()
		{
			return ((::OGDDOAIIMPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGDDOAIIMPG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
