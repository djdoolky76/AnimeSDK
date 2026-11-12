#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMMPGAOGCH;
namespace System { class Object; }

#define FPMMPGAOGCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6FC000)
#define FPMMPGAOGCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6FC040)
#define FPMMPGAOGCH___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F6FC050)

inline static constexpr unsigned int FPMMPGAOGCH___c_TypeDefinitionIndex = 32742;

	class FPMMPGAOGCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52B30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPMMPGAOGCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH___C_CTOR_OFFSET))(this);
		}

		::FPMMPGAOGCH* __cctor_b__23_0()
		{
			return ((::FPMMPGAOGCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPMMPGAOGCH___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
