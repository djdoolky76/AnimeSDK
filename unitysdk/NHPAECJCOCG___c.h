#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NHPAECJCOCG;
namespace System { class Object; }

#define NHPAECJCOCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF6740)
#define NHPAECJCOCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF6770)
#define NHPAECJCOCG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAF6780)

inline static constexpr unsigned int NHPAECJCOCG___c_TypeDefinitionIndex = 25552;

	class NHPAECJCOCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x64F70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHPAECJCOCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG___C_CTOR_OFFSET))(this);
		}

		::NHPAECJCOCG* __cctor_b__28_0()
		{
			return ((::NHPAECJCOCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHPAECJCOCG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
