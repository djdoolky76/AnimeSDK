#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOGCCINEHFJ;
namespace System { class Object; }

#define JOGCCINEHFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1BB0)
#define JOGCCINEHFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7A1BF0)
#define JOGCCINEHFJ___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E7A1C00)

inline static constexpr unsigned int JOGCCINEHFJ___c_TypeDefinitionIndex = 28264;

	class JOGCCINEHFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6CF00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOGCCINEHFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ___C_CTOR_OFFSET))(this);
		}

		::JOGCCINEHFJ* __cctor_b__43_0()
		{
			return ((::JOGCCINEHFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGCCINEHFJ___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
