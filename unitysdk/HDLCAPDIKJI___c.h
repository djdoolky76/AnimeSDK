#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLCAPDIKJI;
namespace System { class Object; }

#define HDLCAPDIKJI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E523CD0)
#define HDLCAPDIKJI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E523D10)
#define HDLCAPDIKJI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E523D20)

inline static constexpr unsigned int HDLCAPDIKJI___c_TypeDefinitionIndex = 25763;

	class HDLCAPDIKJI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2C2D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLCAPDIKJI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI___C_CTOR_OFFSET))(this);
		}

		::HDLCAPDIKJI* __cctor_b__28_0()
		{
			return ((::HDLCAPDIKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
