#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DABKPEFPBOL;
namespace System { class Object; }

#define DABKPEFPBOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E11E0C0)
#define DABKPEFPBOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E11E100)
#define DABKPEFPBOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E11E110)

inline static constexpr unsigned int DABKPEFPBOL___c_TypeDefinitionIndex = 28511;

	class DABKPEFPBOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20D40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DABKPEFPBOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL___C_CTOR_OFFSET))(this);
		}

		::DABKPEFPBOL* __cctor_b__28_0()
		{
			return ((::DABKPEFPBOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DABKPEFPBOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
