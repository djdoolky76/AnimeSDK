#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCEDNANGIJJ;
namespace System { class Object; }

#define MCEDNANGIJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD3DEC0)
#define MCEDNANGIJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD3DF00)
#define MCEDNANGIJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD3DF10)

inline static constexpr unsigned int MCEDNANGIJJ___c_TypeDefinitionIndex = 29757;

	class MCEDNANGIJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DFC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCEDNANGIJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ___C_CTOR_OFFSET))(this);
		}

		::MCEDNANGIJJ* __cctor_b__28_0()
		{
			return ((::MCEDNANGIJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCEDNANGIJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
