#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCDBGKJANIH;
namespace System { class Object; }

#define KCDBGKJANIH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7C60F0)
#define KCDBGKJANIH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7C6120)
#define KCDBGKJANIH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E7C6130)

inline static constexpr unsigned int KCDBGKJANIH___c_TypeDefinitionIndex = 33807;

	class KCDBGKJANIH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xEDF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCDBGKJANIH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH___C_CTOR_OFFSET))(this);
		}

		::KCDBGKJANIH* __cctor_b__23_0()
		{
			return ((::KCDBGKJANIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDBGKJANIH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
