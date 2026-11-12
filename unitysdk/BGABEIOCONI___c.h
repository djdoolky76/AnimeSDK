#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGABEIOCONI;
namespace System { class Object; }

#define BGABEIOCONI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD314D0)
#define BGABEIOCONI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD31510)
#define BGABEIOCONI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD31520)

inline static constexpr unsigned int BGABEIOCONI___c_TypeDefinitionIndex = 30296;

	class BGABEIOCONI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42CF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGABEIOCONI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI___C_CTOR_OFFSET))(this);
		}

		::BGABEIOCONI* __cctor_b__23_0()
		{
			return ((::BGABEIOCONI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGABEIOCONI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
