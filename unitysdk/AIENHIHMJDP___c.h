#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AIENHIHMJDP;
namespace System { class Object; }

#define AIENHIHMJDP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F52EED0)
#define AIENHIHMJDP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F52EF10)
#define AIENHIHMJDP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F52EF20)

inline static constexpr unsigned int AIENHIHMJDP___c_TypeDefinitionIndex = 32288;

	class AIENHIHMJDP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D6C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIENHIHMJDP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIENHIHMJDP___C_CTOR_OFFSET))(this);
		}

		::AIENHIHMJDP* __cctor_b__33_0()
		{
			return ((::AIENHIHMJDP*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIENHIHMJDP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
