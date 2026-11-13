#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OGGELMMFPKP;
namespace System { class Object; }

#define OGGELMMFPKP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F215BF0)
#define OGGELMMFPKP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F215C30)
#define OGGELMMFPKP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F215C40)

inline static constexpr unsigned int OGGELMMFPKP___c_TypeDefinitionIndex = 27614;

	class OGGELMMFPKP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x151C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OGGELMMFPKP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP___C_CTOR_OFFSET))(this);
		}

		::OGGELMMFPKP* __cctor_b__28_0()
		{
			return ((::OGGELMMFPKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGGELMMFPKP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
