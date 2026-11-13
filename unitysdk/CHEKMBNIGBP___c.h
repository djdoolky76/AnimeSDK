#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CHEKMBNIGBP;
namespace System { class Object; }

#define CHEKMBNIGBP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F835EC0)
#define CHEKMBNIGBP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F835F00)
#define CHEKMBNIGBP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F835F10)

inline static constexpr unsigned int CHEKMBNIGBP___c_TypeDefinitionIndex = 35173;

	class CHEKMBNIGBP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xE420);
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
