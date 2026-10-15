#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLPLFCOHHFE;
namespace System { class Object; }

#define JLPLFCOHHFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E786530)
#define JLPLFCOHHFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E786570)
#define JLPLFCOHHFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E786580)

inline static constexpr unsigned int JLPLFCOHHFE___c_TypeDefinitionIndex = 33793;

	class JLPLFCOHHFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6BDC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JLPLFCOHHFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE___C_CTOR_OFFSET))(this);
		}

		::JLPLFCOHHFE* __cctor_b__28_0()
		{
			return ((::JLPLFCOHHFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLPLFCOHHFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
