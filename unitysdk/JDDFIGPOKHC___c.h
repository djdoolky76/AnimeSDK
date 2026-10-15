#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDDFIGPOKHC;
namespace System { class Object; }

#define JDDFIGPOKHC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E708300)
#define JDDFIGPOKHC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E708340)
#define JDDFIGPOKHC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E708350)

inline static constexpr unsigned int JDDFIGPOKHC___c_TypeDefinitionIndex = 29947;

	class JDDFIGPOKHC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5DB30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDDFIGPOKHC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC___C_CTOR_OFFSET))(this);
		}

		::JDDFIGPOKHC* __cctor_b__23_0()
		{
			return ((::JDDFIGPOKHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIGPOKHC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
