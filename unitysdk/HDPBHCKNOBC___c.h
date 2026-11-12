#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDPBHCKNOBC;
namespace System { class Object; }

#define HDPBHCKNOBC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F84D420)
#define HDPBHCKNOBC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F84D460)
#define HDPBHCKNOBC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F84D470)

inline static constexpr unsigned int HDPBHCKNOBC___c_TypeDefinitionIndex = 28649;

	class HDPBHCKNOBC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDPBHCKNOBC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC___C_CTOR_OFFSET))(this);
		}

		::HDPBHCKNOBC* __cctor_b__28_0()
		{
			return ((::HDPBHCKNOBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDPBHCKNOBC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
