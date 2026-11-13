#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPLCFFGANFC;
namespace System { class Object; }

#define LPLCFFGANFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBAC330)
#define LPLCFFGANFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FBAC370)
#define LPLCFFGANFC___C___CCTOR_B__63_0_OFFSET UNITYSDK_OFFSET(0x1FBAC380)

inline static constexpr unsigned int LPLCFFGANFC___c_TypeDefinitionIndex = 28324;

	class LPLCFFGANFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPLCFFGANFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFFGANFC___C_CTOR_OFFSET))(this);
		}

		::LPLCFFGANFC* __cctor_b__63_0()
		{
			return ((::LPLCFFGANFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPLCFFGANFC___C___CCTOR_B__63_0_OFFSET))(this);
		}

	};
