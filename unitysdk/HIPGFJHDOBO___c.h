#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIPGFJHDOBO;
namespace System { class Object; }

#define HIPGFJHDOBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2052B650)
#define HIPGFJHDOBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2052B690)
#define HIPGFJHDOBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x2052B6A0)

inline static constexpr unsigned int HIPGFJHDOBO___c_TypeDefinitionIndex = 31299;

	class HIPGFJHDOBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x303D0);
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
