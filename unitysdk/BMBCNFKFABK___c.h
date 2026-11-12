#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMBCNFKFABK;
namespace System { class Object; }

#define BMBCNFKFABK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2C2A30)
#define BMBCNFKFABK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2C2A70)
#define BMBCNFKFABK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F2C2A80)

inline static constexpr unsigned int BMBCNFKFABK___c_TypeDefinitionIndex = 29337;

	class BMBCNFKFABK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50C20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMBCNFKFABK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK___C_CTOR_OFFSET))(this);
		}

		::BMBCNFKFABK* __cctor_b__33_0()
		{
			return ((::BMBCNFKFABK*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCNFKFABK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
