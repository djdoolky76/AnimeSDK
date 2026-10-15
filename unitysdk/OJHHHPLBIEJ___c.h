#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJHHHPLBIEJ;
namespace System { class Object; }

#define OJHHHPLBIEJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE864D0)
#define OJHHHPLBIEJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE86510)
#define OJHHHPLBIEJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1DE86520)

inline static constexpr unsigned int OJHHHPLBIEJ___c_TypeDefinitionIndex = 25426;

	class OJHHHPLBIEJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C_CTOR_OFFSET))(this);
		}

		::OJHHHPLBIEJ* __cctor_b__33_0()
		{
			return ((::OJHHHPLBIEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJHHHPLBIEJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
