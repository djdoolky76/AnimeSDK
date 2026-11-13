#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFMKFJJCDKN;
namespace System { class Object; }

#define JFMKFJJCDKN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x206252D0)
#define JFMKFJJCDKN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20625310)
#define JFMKFJJCDKN___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20625320)

inline static constexpr unsigned int JFMKFJJCDKN___c_TypeDefinitionIndex = 28614;

	class JFMKFJJCDKN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FCC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFMKFJJCDKN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKFJJCDKN___C_CTOR_OFFSET))(this);
		}

		::JFMKFJJCDKN* __cctor_b__23_0()
		{
			return ((::JFMKFJJCDKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFMKFJJCDKN___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
