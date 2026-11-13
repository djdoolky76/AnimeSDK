#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAHANHPHGGF;
namespace System { class Object; }

#define NAHANHPHGGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2014BB50)
#define NAHANHPHGGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2014BB90)
#define NAHANHPHGGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2014BBA0)

inline static constexpr unsigned int NAHANHPHGGF___c_TypeDefinitionIndex = 33646;

	class NAHANHPHGGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAHANHPHGGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHANHPHGGF___C_CTOR_OFFSET))(this);
		}

		::NAHANHPHGGF* __cctor_b__33_0()
		{
			return ((::NAHANHPHGGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHANHPHGGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
