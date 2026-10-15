#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPHOKOPKBP;
namespace System { class Object; }

#define ECPHOKOPKBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E259F70)
#define ECPHOKOPKBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E259FB0)
#define ECPHOKOPKBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E259FC0)

inline static constexpr unsigned int ECPHOKOPKBP___c_TypeDefinitionIndex = 34407;

	class ECPHOKOPKBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3F3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPHOKOPKBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP___C_CTOR_OFFSET))(this);
		}

		::ECPHOKOPKBP* __cctor_b__28_0()
		{
			return ((::ECPHOKOPKBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
