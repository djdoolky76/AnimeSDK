#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OEDHMAHDECC;
namespace System { class Object; }

#define OEDHMAHDECC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB4F0)
#define OEDHMAHDECC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDFB530)
#define OEDHMAHDECC___C___CCTOR_B__133_0_OFFSET UNITYSDK_OFFSET(0x1DDFB540)

inline static constexpr unsigned int OEDHMAHDECC___c_TypeDefinitionIndex = 29630;

	class OEDHMAHDECC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x134C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEDHMAHDECC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHMAHDECC___C_CTOR_OFFSET))(this);
		}

		::OEDHMAHDECC* __cctor_b__133_0()
		{
			return ((::OEDHMAHDECC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEDHMAHDECC___C___CCTOR_B__133_0_OFFSET))(this);
		}

	};
