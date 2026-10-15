#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FABNMKAOFMJ;
namespace System { class Object; }

#define FABNMKAOFMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2EF110)
#define FABNMKAOFMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2EF150)
#define FABNMKAOFMJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2EF160)

inline static constexpr unsigned int FABNMKAOFMJ___c_TypeDefinitionIndex = 33576;

	class FABNMKAOFMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FABNMKAOFMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FABNMKAOFMJ___C_CTOR_OFFSET))(this);
		}

		::FABNMKAOFMJ* __cctor_b__23_0()
		{
			return ((::FABNMKAOFMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + FABNMKAOFMJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
