#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPIAJDLLAHL;
namespace System { class Object; }

#define NPIAJDLLAHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F8D0)
#define NPIAJDLLAHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB6F910)
#define NPIAJDLLAHL___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EB6F920)

inline static constexpr unsigned int NPIAJDLLAHL___c_TypeDefinitionIndex = 30137;

	class NPIAJDLLAHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPIAJDLLAHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIAJDLLAHL___C_CTOR_OFFSET))(this);
		}

		::NPIAJDLLAHL* __cctor_b__38_0()
		{
			return ((::NPIAJDLLAHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPIAJDLLAHL___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
