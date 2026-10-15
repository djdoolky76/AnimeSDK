#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCFHMPGKDBD;
namespace System { class Object; }

#define PCFHMPGKDBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF07CF0)
#define PCFHMPGKDBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF07D20)
#define PCFHMPGKDBD___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DF07D30)

inline static constexpr unsigned int PCFHMPGKDBD___c_TypeDefinitionIndex = 27458;

	class PCFHMPGKDBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x35E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFHMPGKDBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD___C_CTOR_OFFSET))(this);
		}

		::PCFHMPGKDBD* __cctor_b__18_0()
		{
			return ((::PCFHMPGKDBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFHMPGKDBD___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
