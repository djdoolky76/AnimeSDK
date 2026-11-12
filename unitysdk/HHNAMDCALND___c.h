#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHNAMDCALND;
namespace System { class Object; }

#define HHNAMDCALND___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8872E0)
#define HHNAMDCALND___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F887320)
#define HHNAMDCALND___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F887330)

inline static constexpr unsigned int HHNAMDCALND___c_TypeDefinitionIndex = 33618;

	class HHNAMDCALND___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHNAMDCALND___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND___C_CTOR_OFFSET))(this);
		}

		::HHNAMDCALND* __cctor_b__43_0()
		{
			return ((::HHNAMDCALND*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHNAMDCALND___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
