#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNOBLNOCEHA;
namespace System { class Object; }

#define GNOBLNOCEHA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F9F90)
#define GNOBLNOCEHA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F9FD0)
#define GNOBLNOCEHA___C___CCTOR_B__58_0_OFFSET UNITYSDK_OFFSET(0x1F7F9FE0)

inline static constexpr unsigned int GNOBLNOCEHA___c_TypeDefinitionIndex = 30563;

	class GNOBLNOCEHA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B270);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNOBLNOCEHA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOBLNOCEHA___C_CTOR_OFFSET))(this);
		}

		::GNOBLNOCEHA* __cctor_b__58_0()
		{
			return ((::GNOBLNOCEHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNOBLNOCEHA___C___CCTOR_B__58_0_OFFSET))(this);
		}

	};
