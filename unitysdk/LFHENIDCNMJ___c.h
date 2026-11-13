#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFHENIDCNMJ;
namespace System { class Object; }

#define LFHENIDCNMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAA9D80)
#define LFHENIDCNMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAA9DC0)
#define LFHENIDCNMJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FAA9DD0)

inline static constexpr unsigned int LFHENIDCNMJ___c_TypeDefinitionIndex = 31495;

	class LFHENIDCNMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFHENIDCNMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ___C_CTOR_OFFSET))(this);
		}

		::LFHENIDCNMJ* __cctor_b__18_0()
		{
			return ((::LFHENIDCNMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFHENIDCNMJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
