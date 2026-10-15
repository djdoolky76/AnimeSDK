#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJFLKGEPIGG;
namespace System { class Object; }

#define KJFLKGEPIGG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83ECF0)
#define KJFLKGEPIGG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83ED30)
#define KJFLKGEPIGG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E83ED40)

inline static constexpr unsigned int KJFLKGEPIGG___c_TypeDefinitionIndex = 31013;

	class KJFLKGEPIGG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1A0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJFLKGEPIGG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG___C_CTOR_OFFSET))(this);
		}

		::KJFLKGEPIGG* __cctor_b__23_0()
		{
			return ((::KJFLKGEPIGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJFLKGEPIGG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
