#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDLALFAMKO;
namespace System { class Object; }

#define HDDLALFAMKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F871B80)
#define HDDLALFAMKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F871BC0)
#define HDDLALFAMKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F871BD0)

inline static constexpr unsigned int HDDLALFAMKO___c_TypeDefinitionIndex = 31912;

	class HDDLALFAMKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x27910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDLALFAMKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO___C_CTOR_OFFSET))(this);
		}

		::HDDLALFAMKO* __cctor_b__28_0()
		{
			return ((::HDDLALFAMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDLALFAMKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
