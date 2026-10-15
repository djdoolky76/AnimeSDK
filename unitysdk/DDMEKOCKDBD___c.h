#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDMEKOCKDBD;
namespace System { class Object; }

#define DDMEKOCKDBD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15BA60)
#define DDMEKOCKDBD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15BAA0)
#define DDMEKOCKDBD___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E15BAB0)

inline static constexpr unsigned int DDMEKOCKDBD___c_TypeDefinitionIndex = 30512;

	class DDMEKOCKDBD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2A340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDMEKOCKDBD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMEKOCKDBD___C_CTOR_OFFSET))(this);
		}

		::DDMEKOCKDBD* __cctor_b__33_0()
		{
			return ((::DDMEKOCKDBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDMEKOCKDBD___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
