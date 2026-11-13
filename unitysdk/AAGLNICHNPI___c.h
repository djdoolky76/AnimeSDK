#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGLNICHNPI;
namespace System { class Object; }

#define AAGLNICHNPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2030B020)
#define AAGLNICHNPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2030B060)
#define AAGLNICHNPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x2030B070)

inline static constexpr unsigned int AAGLNICHNPI___c_TypeDefinitionIndex = 27915;

	class AAGLNICHNPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAGLNICHNPI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI___C_CTOR_OFFSET))(this);
		}

		::AAGLNICHNPI* __cctor_b__23_0()
		{
			return ((::AAGLNICHNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AAGLNICHNPI___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
