#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OHKCDFGPCKM;
namespace System { class Object; }

#define OHKCDFGPCKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE36CE0)
#define OHKCDFGPCKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE36D20)
#define OHKCDFGPCKM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DE36D30)

inline static constexpr unsigned int OHKCDFGPCKM___c_TypeDefinitionIndex = 27424;

	class OHKCDFGPCKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OHKCDFGPCKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM___C_CTOR_OFFSET))(this);
		}

		::OHKCDFGPCKM* __cctor_b__38_0()
		{
			return ((::OHKCDFGPCKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OHKCDFGPCKM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
