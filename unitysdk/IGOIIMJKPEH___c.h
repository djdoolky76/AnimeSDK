#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGOIIMJKPEH;
namespace System { class Object; }

#define IGOIIMJKPEH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6290E0)
#define IGOIIMJKPEH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E629120)
#define IGOIIMJKPEH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E629130)

inline static constexpr unsigned int IGOIIMJKPEH___c_TypeDefinitionIndex = 26860;

	class IGOIIMJKPEH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGOIIMJKPEH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH___C_CTOR_OFFSET))(this);
		}

		::IGOIIMJKPEH* __cctor_b__28_0()
		{
			return ((::IGOIIMJKPEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGOIIMJKPEH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
