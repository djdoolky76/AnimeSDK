#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAGLNICHNPI;
namespace System { class Object; }

#define AAGLNICHNPI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD8D6E0)
#define AAGLNICHNPI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD8D720)
#define AAGLNICHNPI___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DD8D730)

inline static constexpr unsigned int AAGLNICHNPI___c_TypeDefinitionIndex = 27384;

	class AAGLNICHNPI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2E960);
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
