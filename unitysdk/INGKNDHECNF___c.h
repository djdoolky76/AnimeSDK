#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INGKNDHECNF;
namespace System { class Object; }

#define INGKNDHECNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1C90)
#define INGKNDHECNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C1CD0)
#define INGKNDHECNF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6C1CE0)

	class INGKNDHECNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x58410);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INGKNDHECNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF___C_CTOR_OFFSET))(this);
		}

		::INGKNDHECNF* __cctor_b__23_0()
		{
			return ((::INGKNDHECNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + INGKNDHECNF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
