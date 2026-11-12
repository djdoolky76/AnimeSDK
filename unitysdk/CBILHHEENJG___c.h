#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBILHHEENJG;
namespace System { class Object; }

#define CBILHHEENJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F32F3D0)
#define CBILHHEENJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F32F410)
#define CBILHHEENJG___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1F32F420)

inline static constexpr unsigned int CBILHHEENJG___c_TypeDefinitionIndex = 34702;

	class CBILHHEENJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x59F10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CBILHHEENJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG___C_CTOR_OFFSET))(this);
		}

		::CBILHHEENJG* __cctor_b__43_0()
		{
			return ((::CBILHHEENJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBILHHEENJG___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
