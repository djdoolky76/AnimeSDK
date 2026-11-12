#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGDGEAGBMGH;
namespace System { class Object; }

#define BGDGEAGBMGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD335E0)
#define BGDGEAGBMGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD33620)
#define BGDGEAGBMGH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FD33630)

inline static constexpr unsigned int BGDGEAGBMGH___c_TypeDefinitionIndex = 30659;

	class BGDGEAGBMGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x43410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGDGEAGBMGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH___C_CTOR_OFFSET))(this);
		}

		::BGDGEAGBMGH* __cctor_b__23_0()
		{
			return ((::BGDGEAGBMGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDGEAGBMGH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
