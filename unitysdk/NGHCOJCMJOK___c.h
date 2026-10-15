#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGHCOJCMJOK;
namespace System { class Object; }

#define NGHCOJCMJOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2810)
#define NGHCOJCMJOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAE2850)
#define NGHCOJCMJOK___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EAE2860)

inline static constexpr unsigned int NGHCOJCMJOK___c_TypeDefinitionIndex = 31845;

	class NGHCOJCMJOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x63C00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGHCOJCMJOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK___C_CTOR_OFFSET))(this);
		}

		::NGHCOJCMJOK* __cctor_b__38_0()
		{
			return ((::NGHCOJCMJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGHCOJCMJOK___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
