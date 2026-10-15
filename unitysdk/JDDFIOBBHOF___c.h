#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDDFIOBBHOF;
namespace System { class Object; }

#define JDDFIOBBHOF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB5E0)
#define JDDFIOBBHOF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DB620)
#define JDDFIOBBHOF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6DB630)

inline static constexpr unsigned int JDDFIOBBHOF___c_TypeDefinitionIndex = 25983;

	class JDDFIOBBHOF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5A720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDDFIOBBHOF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF___C_CTOR_OFFSET))(this);
		}

		::JDDFIOBBHOF* __cctor_b__28_0()
		{
			return ((::JDDFIOBBHOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDFIOBBHOF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
