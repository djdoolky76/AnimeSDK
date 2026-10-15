#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIMFFPGEPIO;
namespace System { class Object; }

#define PIMFFPGEPIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6DFC0)
#define PIMFFPGEPIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6E000)
#define PIMFFPGEPIO___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DF6E010)

	class PIMFFPGEPIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44B50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C_CTOR_OFFSET))(this);
		}

		::PIMFFPGEPIO* __cctor_b__33_0()
		{
			return ((::PIMFFPGEPIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMFFPGEPIO___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
