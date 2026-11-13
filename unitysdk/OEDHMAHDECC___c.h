#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEDHMAHDECC;
namespace System { class Object; }

#define OEDHMAHDECC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB5B130)
#define OEDHMAHDECC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB5B170)
#define OEDHMAHDECC___C___CCTOR_B__153_0_OFFSET UNITYSDK_OFFSET(0x1FB5B180)

inline static constexpr unsigned int OEDHMAHDECC___c_TypeDefinitionIndex = 30440;

	class OEDHMAHDECC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDHMAHDECC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHMAHDECC___C_CTOR_OFFSET))(this);
		}

		::OEDHMAHDECC* __cctor_b__153_0()
		{
			return ((::OEDHMAHDECC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHMAHDECC___C___CCTOR_B__153_0_OFFSET))(this);
		}

	};
