#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOOPAPNFDC;
namespace System { class Object; }

#define JBOOPAPNFDC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDE80)
#define JBOOPAPNFDC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDEC0)
#define JBOOPAPNFDC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6FDED0)

	class JBOOPAPNFDC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D590);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C_CTOR_OFFSET))(this);
		}

		::JBOOPAPNFDC* __cctor_b__28_0()
		{
			return ((::JBOOPAPNFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOOPAPNFDC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
