#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MMPPKFJEOGK;
namespace System { class Object; }

#define MMPPKFJEOGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA909F0)
#define MMPPKFJEOGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA90A30)
#define MMPPKFJEOGK___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1EA90A40)

inline static constexpr unsigned int MMPPKFJEOGK___c_TypeDefinitionIndex = 28338;

	class MMPPKFJEOGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59480);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMPPKFJEOGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK___C_CTOR_OFFSET))(this);
		}

		::MMPPKFJEOGK* __cctor_b__23_0()
		{
			return ((::MMPPKFJEOGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMPPKFJEOGK___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
