#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPBHCHBALOC;
namespace System { class Object; }

#define FPBHCHBALOC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E403AB0)
#define FPBHCHBALOC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E403AF0)
#define FPBHCHBALOC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E403B00)

	class FPBHCHBALOC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPBHCHBALOC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC___C_CTOR_OFFSET))(this);
		}

		::FPBHCHBALOC* __cctor_b__28_0()
		{
			return ((::FPBHCHBALOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBHCHBALOC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
