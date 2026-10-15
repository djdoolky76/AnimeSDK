#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFLOLHMFICG;
namespace System { class Object; }

#define CFLOLHMFICG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E078FE0)
#define CFLOLHMFICG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E079020)
#define CFLOLHMFICG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E079030)

inline static constexpr unsigned int CFLOLHMFICG___c_TypeDefinitionIndex = 34542;

	class CFLOLHMFICG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x121F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFLOLHMFICG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG___C_CTOR_OFFSET))(this);
		}

		::CFLOLHMFICG* __cctor_b__23_0()
		{
			return ((::CFLOLHMFICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
