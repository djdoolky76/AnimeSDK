#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHELJEPEIHM;
namespace System { class Object; }

#define BHELJEPEIHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F003FC0)
#define BHELJEPEIHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F003FF0)
#define BHELJEPEIHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F004000)

inline static constexpr unsigned int BHELJEPEIHM___c_TypeDefinitionIndex = 34736;

	class BHELJEPEIHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHELJEPEIHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM___C_CTOR_OFFSET))(this);
		}

		::BHELJEPEIHM* __cctor_b__23_0()
		{
			return ((::BHELJEPEIHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHELJEPEIHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
