#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPDFANKBJNO;
namespace System { class Object; }

#define JPDFANKBJNO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8DB8A0)
#define JPDFANKBJNO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8DB8D0)
#define JPDFANKBJNO___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1F8DB8E0)

inline static constexpr unsigned int JPDFANKBJNO___c_TypeDefinitionIndex = 28526;

	class JPDFANKBJNO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68D30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPDFANKBJNO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDFANKBJNO___C_CTOR_OFFSET))(this);
		}

		::JPDFANKBJNO* __cctor_b__68_0()
		{
			return ((::JPDFANKBJNO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPDFANKBJNO___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
