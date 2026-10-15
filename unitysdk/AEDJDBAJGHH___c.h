#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEDJDBAJGHH;
namespace System { class Object; }

#define AEDJDBAJGHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA640)
#define AEDJDBAJGHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEA680)
#define AEDJDBAJGHH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDEA690)

inline static constexpr unsigned int AEDJDBAJGHH___c_TypeDefinitionIndex = 27533;

	class AEDJDBAJGHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C470);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C_CTOR_OFFSET))(this);
		}

		::AEDJDBAJGHH* __cctor_b__18_0()
		{
			return ((::AEDJDBAJGHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDJDBAJGHH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
