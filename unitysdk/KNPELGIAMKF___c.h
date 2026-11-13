#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNPELGIAMKF;
namespace System { class Object; }

#define KNPELGIAMKF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x205A7C50)
#define KNPELGIAMKF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x205A7C90)
#define KNPELGIAMKF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x205A7CA0)

inline static constexpr unsigned int KNPELGIAMKF___c_TypeDefinitionIndex = 28058;

	class KNPELGIAMKF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1FED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNPELGIAMKF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPELGIAMKF___C_CTOR_OFFSET))(this);
		}

		::KNPELGIAMKF* __cctor_b__23_0()
		{
			return ((::KNPELGIAMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNPELGIAMKF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
