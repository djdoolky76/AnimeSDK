#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOGMLBIJMEH;
namespace System { class Object; }

#define MOGMLBIJMEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF11720)
#define MOGMLBIJMEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF11760)
#define MOGMLBIJMEH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1FF11770)

inline static constexpr unsigned int MOGMLBIJMEH___c_TypeDefinitionIndex = 25995;

	class MOGMLBIJMEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53F00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOGMLBIJMEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH___C_CTOR_OFFSET))(this);
		}

		::MOGMLBIJMEH* __cctor_b__23_0()
		{
			return ((::MOGMLBIJMEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOGMLBIJMEH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
