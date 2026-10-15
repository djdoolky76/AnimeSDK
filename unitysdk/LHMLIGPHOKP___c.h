#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHMLIGPHOKP;
namespace System { class Object; }

#define LHMLIGPHOKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E967C70)
#define LHMLIGPHOKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E967CB0)
#define LHMLIGPHOKP___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E967CC0)

inline static constexpr unsigned int LHMLIGPHOKP___c_TypeDefinitionIndex = 29269;

	class LHMLIGPHOKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C_CTOR_OFFSET))(this);
		}

		::LHMLIGPHOKP* __cctor_b__23_0()
		{
			return ((::LHMLIGPHOKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHMLIGPHOKP___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
