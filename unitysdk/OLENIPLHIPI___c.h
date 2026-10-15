#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLENIPLHIPI;
namespace System { class Object; }

#define OLENIPLHIPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE78890)
#define OLENIPLHIPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE788D0)
#define OLENIPLHIPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DE788E0)

inline static constexpr unsigned int OLENIPLHIPI___c_TypeDefinitionIndex = 31833;

	class OLENIPLHIPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x20D80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLENIPLHIPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI___C_CTOR_OFFSET))(this);
		}

		::OLENIPLHIPI* __cctor_b__23_0()
		{
			return ((::OLENIPLHIPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLENIPLHIPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
