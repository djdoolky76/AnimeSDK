#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOOPOAHOODF;
namespace System { class Object; }

#define BOOPOAHOODF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E011840)
#define BOOPOAHOODF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E011880)
#define BOOPOAHOODF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E011890)

inline static constexpr unsigned int BOOPOAHOODF___c_TypeDefinitionIndex = 30450;

	class BOOPOAHOODF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOOPOAHOODF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF___C_CTOR_OFFSET))(this);
		}

		::BOOPOAHOODF* __cctor_b__23_0()
		{
			return ((::BOOPOAHOODF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOPOAHOODF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
