#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KINJHHBJNJP;
namespace System { class Object; }

#define KINJHHBJNJP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E837B70)
#define KINJHHBJNJP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E837BB0)
#define KINJHHBJNJP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E837BC0)

inline static constexpr unsigned int KINJHHBJNJP___c_TypeDefinitionIndex = 29624;

	class KINJHHBJNJP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINJHHBJNJP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP___C_CTOR_OFFSET))(this);
		}

		::KINJHHBJNJP* __cctor_b__33_0()
		{
			return ((::KINJHHBJNJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KINJHHBJNJP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
