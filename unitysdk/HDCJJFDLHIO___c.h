#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDCJJFDLHIO;
namespace System { class Object; }

#define HDCJJFDLHIO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F83F6F0)
#define HDCJJFDLHIO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F83F730)
#define HDCJJFDLHIO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F83F740)

inline static constexpr unsigned int HDCJJFDLHIO___c_TypeDefinitionIndex = 29779;

	class HDCJJFDLHIO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x267A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDCJJFDLHIO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO___C_CTOR_OFFSET))(this);
		}

		::HDCJJFDLHIO* __cctor_b__28_0()
		{
			return ((::HDCJJFDLHIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDCJJFDLHIO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
