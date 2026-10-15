#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMFCIFOOKNF;
namespace System { class Object; }

#define AMFCIFOOKNF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E520B00)
#define AMFCIFOOKNF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E520B30)
#define AMFCIFOOKNF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E520B40)

inline static constexpr unsigned int AMFCIFOOKNF___c_TypeDefinitionIndex = 31439;

	class AMFCIFOOKNF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3C530);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMFCIFOOKNF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF___C_CTOR_OFFSET))(this);
		}

		::AMFCIFOOKNF* __cctor_b__28_0()
		{
			return ((::AMFCIFOOKNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMFCIFOOKNF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
