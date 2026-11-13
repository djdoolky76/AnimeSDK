#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
namespace System { class Object; }

#define AKMCODLAEKI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20641FB0)
#define AKMCODLAEKI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20641FE0)
#define AKMCODLAEKI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20641FF0)

inline static constexpr unsigned int AKMCODLAEKI___c_TypeDefinitionIndex = 34306;

	class AKMCODLAEKI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34D20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKMCODLAEKI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI___C_CTOR_OFFSET))(this);
		}

		::AKMCODLAEKI* __cctor_b__28_0()
		{
			return ((::AKMCODLAEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
