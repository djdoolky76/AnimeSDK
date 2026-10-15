#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEFICANECDH;
namespace System { class Object; }

#define IEFICANECDH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E60BF10)
#define IEFICANECDH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E60BF50)
#define IEFICANECDH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E60BF60)

inline static constexpr unsigned int IEFICANECDH___c_TypeDefinitionIndex = 27724;

	class IEFICANECDH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFICANECDH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH___C_CTOR_OFFSET))(this);
		}

		::IEFICANECDH* __cctor_b__33_0()
		{
			return ((::IEFICANECDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFICANECDH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
