#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFFANDLFOGP;
namespace System { class Object; }

#define JFFANDLFOGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC2F0)
#define JFFANDLFOGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FC330)
#define JFFANDLFOGP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6FC340)

inline static constexpr unsigned int JFFANDLFOGP___c_TypeDefinitionIndex = 30876;

	class JFFANDLFOGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFFANDLFOGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP___C_CTOR_OFFSET))(this);
		}

		::JFFANDLFOGP* __cctor_b__23_0()
		{
			return ((::JFFANDLFOGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFANDLFOGP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
