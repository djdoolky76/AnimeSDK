#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGENMGNLDJ;
namespace System { class Object; }

#define HCGENMGNLDJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F834B40)
#define HCGENMGNLDJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F834B80)
#define HCGENMGNLDJ___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F834B90)

inline static constexpr unsigned int HCGENMGNLDJ___c_TypeDefinitionIndex = 28450;

	class HCGENMGNLDJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x255F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGENMGNLDJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ___C_CTOR_OFFSET))(this);
		}

		::HCGENMGNLDJ* __cctor_b__18_0()
		{
			return ((::HCGENMGNLDJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGENMGNLDJ___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
