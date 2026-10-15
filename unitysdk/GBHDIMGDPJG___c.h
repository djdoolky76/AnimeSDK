#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBHDIMGDPJG;
namespace System { class Object; }

#define GBHDIMGDPJG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42BA00)
#define GBHDIMGDPJG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42BA40)
#define GBHDIMGDPJG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E42BA50)

inline static constexpr unsigned int GBHDIMGDPJG___c_TypeDefinitionIndex = 27390;

	class GBHDIMGDPJG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCFE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBHDIMGDPJG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHDIMGDPJG___C_CTOR_OFFSET))(this);
		}

		::GBHDIMGDPJG* __cctor_b__28_0()
		{
			return ((::GBHDIMGDPJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBHDIMGDPJG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
