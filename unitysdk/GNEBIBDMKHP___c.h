#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GNEBIBDMKHP;
namespace System { class Object; }

#define GNEBIBDMKHP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7ED290)
#define GNEBIBDMKHP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7ED2D0)
#define GNEBIBDMKHP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F7ED2E0)

inline static constexpr unsigned int GNEBIBDMKHP___c_TypeDefinitionIndex = 33186;

	class GNEBIBDMKHP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x19AF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNEBIBDMKHP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP___C_CTOR_OFFSET))(this);
		}

		::GNEBIBDMKHP* __cctor_b__33_0()
		{
			return ((::GNEBIBDMKHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNEBIBDMKHP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
