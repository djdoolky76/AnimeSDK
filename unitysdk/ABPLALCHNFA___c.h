#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABPLALCHNFA;
namespace System { class Object; }

#define ABPLALCHNFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2008F490)
#define ABPLALCHNFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2008F4D0)
#define ABPLALCHNFA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x2008F4E0)

inline static constexpr unsigned int ABPLALCHNFA___c_TypeDefinitionIndex = 30110;

	class ABPLALCHNFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37700);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABPLALCHNFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPLALCHNFA___C_CTOR_OFFSET))(this);
		}

		::ABPLALCHNFA* __cctor_b__33_0()
		{
			return ((::ABPLALCHNFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABPLALCHNFA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
