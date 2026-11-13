#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDEOFEHDNNO;
namespace System { class Object; }

#define JDEOFEHDNNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20424770)
#define JDEOFEHDNNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204247B0)
#define JDEOFEHDNNO___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x204247C0)

inline static constexpr unsigned int JDEOFEHDNNO___c_TypeDefinitionIndex = 28465;

	class JDEOFEHDNNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDEOFEHDNNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO___C_CTOR_OFFSET))(this);
		}

		::JDEOFEHDNNO* __cctor_b__48_0()
		{
			return ((::JDEOFEHDNNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDEOFEHDNNO___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
