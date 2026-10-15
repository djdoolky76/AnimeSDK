#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLBGMJFLJEE;
namespace System { class Object; }

#define JLBGMJFLJEE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E747750)
#define JLBGMJFLJEE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E747790)
#define JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E7477A0)

inline static constexpr unsigned int JLBGMJFLJEE___c_TypeDefinitionIndex = 27004;

	class JLBGMJFLJEE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63D70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C_CTOR_OFFSET))(this);
		}

		::JLBGMJFLJEE* __cctor_b__38_0()
		{
			return ((::JLBGMJFLJEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLBGMJFLJEE___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
