#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHHJCBBEAGP;
namespace System { class Object; }

#define IHHJCBBEAGP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E67C2F0)
#define IHHJCBBEAGP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E67C330)
#define IHHJCBBEAGP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E67C340)

inline static constexpr unsigned int IHHJCBBEAGP___c_TypeDefinitionIndex = 27488;

	class IHHJCBBEAGP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DBF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHHJCBBEAGP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP___C_CTOR_OFFSET))(this);
		}

		::IHHJCBBEAGP* __cctor_b__33_0()
		{
			return ((::IHHJCBBEAGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHJCBBEAGP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
