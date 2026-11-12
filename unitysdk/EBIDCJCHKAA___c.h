#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBIDCJCHKAA;
namespace System { class Object; }

#define EBIDCJCHKAA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5190D0)
#define EBIDCJCHKAA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F519110)
#define EBIDCJCHKAA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F519120)

inline static constexpr unsigned int EBIDCJCHKAA___c_TypeDefinitionIndex = 27456;

	class EBIDCJCHKAA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x49280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBIDCJCHKAA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDCJCHKAA___C_CTOR_OFFSET))(this);
		}

		::EBIDCJCHKAA* __cctor_b__23_0()
		{
			return ((::EBIDCJCHKAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBIDCJCHKAA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
