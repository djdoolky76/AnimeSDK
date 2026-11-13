#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OADGBFHDCDE;
namespace System { class Object; }

#define OADGBFHDCDE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD96410)
#define OADGBFHDCDE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD96440)
#define OADGBFHDCDE___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1FD96450)

inline static constexpr unsigned int OADGBFHDCDE___c_TypeDefinitionIndex = 26966;

	class OADGBFHDCDE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xA140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OADGBFHDCDE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGBFHDCDE___C_CTOR_OFFSET))(this);
		}

		::OADGBFHDCDE* __cctor_b__63_0()
		{
			return ((::OADGBFHDCDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGBFHDCDE___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
