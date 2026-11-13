#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDAALEACPKL;
namespace System { class Object; }

#define JDAALEACPKL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20421160)
#define JDAALEACPKL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204211A0)
#define JDAALEACPKL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x204211B0)

inline static constexpr unsigned int JDAALEACPKL___c_TypeDefinitionIndex = 31751;

	class JDAALEACPKL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5C7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDAALEACPKL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL___C_CTOR_OFFSET))(this);
		}

		::JDAALEACPKL* __cctor_b__23_0()
		{
			return ((::JDAALEACPKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDAALEACPKL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
