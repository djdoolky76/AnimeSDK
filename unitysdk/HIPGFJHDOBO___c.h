#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIPGFJHDOBO;
namespace System { class Object; }

#define HIPGFJHDOBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E573960)
#define HIPGFJHDOBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5739A0)
#define HIPGFJHDOBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5739B0)

inline static constexpr unsigned int HIPGFJHDOBO___c_TypeDefinitionIndex = 30393;

	class HIPGFJHDOBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34F60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIPGFJHDOBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO___C_CTOR_OFFSET))(this);
		}

		::HIPGFJHDOBO* __cctor_b__28_0()
		{
			return ((::HIPGFJHDOBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIPGFJHDOBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
