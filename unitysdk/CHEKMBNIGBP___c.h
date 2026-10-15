#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEKMBNIGBP;
namespace System { class Object; }

#define CHEKMBNIGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E096180)
#define CHEKMBNIGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0961C0)
#define CHEKMBNIGBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0961D0)

inline static constexpr unsigned int CHEKMBNIGBP___c_TypeDefinitionIndex = 34245;

	class CHEKMBNIGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CHEKMBNIGBP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP___C_CTOR_OFFSET))(this);
		}

		::CHEKMBNIGBP* __cctor_b__28_0()
		{
			return ((::CHEKMBNIGBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHEKMBNIGBP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
