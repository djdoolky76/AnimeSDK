#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBONCGFHHDN;
namespace System { class Object; }

#define DBONCGFHHDN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E136D10)
#define DBONCGFHHDN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E136D50)
#define DBONCGFHHDN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E136D60)

inline static constexpr unsigned int DBONCGFHHDN___c_TypeDefinitionIndex = 29244;

	class DBONCGFHHDN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x23570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBONCGFHHDN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN___C_CTOR_OFFSET))(this);
		}

		::DBONCGFHHDN* __cctor_b__28_0()
		{
			return ((::DBONCGFHHDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBONCGFHHDN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
