#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPMHNPHIHHF;
namespace System { class Object; }

#define BPMHNPHIHHF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F310810)
#define BPMHNPHIHHF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F310850)
#define BPMHNPHIHHF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F310860)

inline static constexpr unsigned int BPMHNPHIHHF___c_TypeDefinitionIndex = 35822;

	class BPMHNPHIHHF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56C50);
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
