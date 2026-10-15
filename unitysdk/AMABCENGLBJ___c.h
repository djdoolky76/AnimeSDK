#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMABCENGLBJ;
namespace System { class Object; }

#define AMABCENGLBJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E516270)
#define AMABCENGLBJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5162B0)
#define AMABCENGLBJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E5162C0)

inline static constexpr unsigned int AMABCENGLBJ___c_TypeDefinitionIndex = 34890;

	class AMABCENGLBJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3AAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMABCENGLBJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ___C_CTOR_OFFSET))(this);
		}

		::AMABCENGLBJ* __cctor_b__23_0()
		{
			return ((::AMABCENGLBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMABCENGLBJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
