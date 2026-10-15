#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGNPGIKFOMJ;
namespace System { class Object; }

#define KGNPGIKFOMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E80E2F0)
#define KGNPGIKFOMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80E330)
#define KGNPGIKFOMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E80E340)

inline static constexpr unsigned int KGNPGIKFOMJ___c_TypeDefinitionIndex = 33620;

	class KGNPGIKFOMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x157C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGNPGIKFOMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ___C_CTOR_OFFSET))(this);
		}

		::KGNPGIKFOMJ* __cctor_b__23_0()
		{
			return ((::KGNPGIKFOMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNPGIKFOMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
