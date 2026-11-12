#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJJGLJEHPJE;
namespace System { class Object; }

#define KJJGLJEHPJE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB8A240)
#define KJJGLJEHPJE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB8A280)
#define KJJGLJEHPJE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FB8A290)

inline static constexpr unsigned int KJJGLJEHPJE___c_TypeDefinitionIndex = 29956;

	class KJJGLJEHPJE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15DB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJJGLJEHPJE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE___C_CTOR_OFFSET))(this);
		}

		::KJJGLJEHPJE* __cctor_b__23_0()
		{
			return ((::KJJGLJEHPJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
