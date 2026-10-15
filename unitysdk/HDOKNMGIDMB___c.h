#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDOKNMGIDMB;
namespace System { class Object; }

#define HDOKNMGIDMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E553420)
#define HDOKNMGIDMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E553450)
#define HDOKNMGIDMB___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E553460)

inline static constexpr unsigned int HDOKNMGIDMB___c_TypeDefinitionIndex = 25322;

	class HDOKNMGIDMB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDOKNMGIDMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB___C_CTOR_OFFSET))(this);
		}

		::HDOKNMGIDMB* __cctor_b__33_0()
		{
			return ((::HDOKNMGIDMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDOKNMGIDMB___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
