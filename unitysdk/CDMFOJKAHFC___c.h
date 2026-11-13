#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDMFOJKAHFC;
namespace System { class Object; }

#define CDMFOJKAHFC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C01B0)
#define CDMFOJKAHFC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x204C01F0)
#define CDMFOJKAHFC___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x204C0200)

inline static constexpr unsigned int CDMFOJKAHFC___c_TypeDefinitionIndex = 29509;

	class CDMFOJKAHFC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x624A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDMFOJKAHFC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC___C_CTOR_OFFSET))(this);
		}

		::CDMFOJKAHFC* __cctor_b__38_0()
		{
			return ((::CDMFOJKAHFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMFOJKAHFC___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
