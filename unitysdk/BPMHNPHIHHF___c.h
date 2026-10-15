#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMHNPHIHHF;
namespace System { class Object; }

#define BPMHNPHIHHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E04EE50)
#define BPMHNPHIHHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E04EE90)
#define BPMHNPHIHHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E04EEA0)

	class BPMHNPHIHHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55880);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPMHNPHIHHF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF___C_CTOR_OFFSET))(this);
		}

		::BPMHNPHIHHF* __cctor_b__23_0()
		{
			return ((::BPMHNPHIHHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPMHNPHIHHF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
