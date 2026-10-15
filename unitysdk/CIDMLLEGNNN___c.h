#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDMLLEGNNN;
namespace System { class Object; }

#define CIDMLLEGNNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF9A0)
#define CIDMLLEGNNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0CF9D0)
#define CIDMLLEGNNN___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E0CF9E0)

inline static constexpr unsigned int CIDMLLEGNNN___c_TypeDefinitionIndex = 26911;

	class CIDMLLEGNNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIDMLLEGNNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN___C_CTOR_OFFSET))(this);
		}

		::CIDMLLEGNNN* __cctor_b__38_0()
		{
			return ((::CIDMLLEGNNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDMLLEGNNN___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
