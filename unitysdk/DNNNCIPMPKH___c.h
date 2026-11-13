#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNNNCIPMPKH;
namespace System { class Object; }

#define DNNNCIPMPKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201EA9C0)
#define DNNNCIPMPKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x201EAA00)
#define DNNNCIPMPKH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x201EAA10)

inline static constexpr unsigned int DNNNCIPMPKH___c_TypeDefinitionIndex = 29054;

	class DNNNCIPMPKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x37030);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNNNCIPMPKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH___C_CTOR_OFFSET))(this);
		}

		::DNNNCIPMPKH* __cctor_b__33_0()
		{
			return ((::DNNNCIPMPKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNNNCIPMPKH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
