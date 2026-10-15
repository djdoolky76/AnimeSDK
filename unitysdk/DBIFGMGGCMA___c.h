#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBIFGMGGCMA;
namespace System { class Object; }

#define DBIFGMGGCMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15DE50)
#define DBIFGMGGCMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15DE90)
#define DBIFGMGGCMA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E15DEA0)

inline static constexpr unsigned int DBIFGMGGCMA___c_TypeDefinitionIndex = 31995;

	class DBIFGMGGCMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25FD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBIFGMGGCMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA___C_CTOR_OFFSET))(this);
		}

		::DBIFGMGGCMA* __cctor_b__28_0()
		{
			return ((::DBIFGMGGCMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBIFGMGGCMA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
