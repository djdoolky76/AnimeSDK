#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFJHBKDGDAG;
namespace System { class Object; }

#define IFJHBKDGDAG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F965730)
#define IFJHBKDGDAG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F965770)
#define IFJHBKDGDAG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F965780)

inline static constexpr unsigned int IFJHBKDGDAG___c_TypeDefinitionIndex = 30379;

	class IFJHBKDGDAG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x483B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFJHBKDGDAG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG___C_CTOR_OFFSET))(this);
		}

		::IFJHBKDGDAG* __cctor_b__28_0()
		{
			return ((::IFJHBKDGDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFJHBKDGDAG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
